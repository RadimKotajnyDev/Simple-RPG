//
// Created by Radim Kotajny on 14.12.2025.
//

#include "Entity.h"

#include <iostream>
#include <algorithm>
#include <utility>
#include <format>

#include "../Utils/TermColors.h"

Entity::Entity(std::string name, int hp) : name(std::move(name)), health(hp) {}

void Entity::setName(const std::string &name) {
    this->name = name;
}

void Entity::setHealth(int health) {
    this->health = health;
}

int Entity::getHealth() const {
    return health;
}

int Entity::getMaxHealth() const {
    return maxHealth;
}

void Entity::setMaxHealth(int max_health) {
    maxHealth = max_health;
}

std::string Entity::getName() const {
    return name;
}

void Entity::dealDamage(const int damage) {
    this->health = std::clamp(health - damage, 0, maxHealth);
}

void Entity::heal(const int amount) {
    this->health = std::clamp(health + amount, 0, maxHealth);
}

void Entity::pickUp(std::unique_ptr<GameItem> item) {
    if (activeItem == nullptr) {
        activeItem = item.get();
    }

    std::cout << "Sebral jsi: " << item->get_name() << std::endl;
    inventory.push_back(std::move(item));
}

void Entity::transferLootTo(Entity& receiver) {
    if (inventory.empty()) {
        std::cout << name << " u sebe nic nemá." << std::endl;
        return;
    }

    std::cout << receiver.getName() << " prohledává mrtvolu " << name << "..." << std::endl;

    for (auto& item : inventory) {
        if (item != nullptr) {
            receiver.pickUp(std::move(item));
        }
    }

    inventory.clear();
    activeItem = nullptr;
}

void Entity::showInventory() const {
    std::cout << "\n------ INVENTÁŘ (" << name << ") ------" << std::endl;
    if (inventory.empty()) {
        std::cout << "(prázdný)" << std::endl;
        return;
    }

    for (size_t i = 0; i < inventory.size(); i++) {
        std::cout << i << ". " << inventory[i]->get_name();

        if (inventory[i].get() == activeItem) {
            std::cout << " [DRŽÍŠ V RUCE]";
        }

        std::cout << std::endl;
    }
    std::cout << "------------------------------" << std::endl;
}

void Entity::equipItem(size_t index) {
    if (index >= 0 && index < inventory.size()) {
        activeItem = inventory[index].get();
        std::cout << name << " si bere do ruky: " << activeItem->get_name() << std::endl;
    } else {
        std::cout << "Takový předmět v batohu není!" << std::endl;
    }
}

void Entity::showHUD() {
    const std::string bar = std::format("{} má {:<2}/{:<2} hp", name, health, maxHealth);

    if (health < std::clamp(maxHealth / 2, 0, maxHealth)) {
        std::cout << Color::RED << std::endl;
    } else {
        std::cout << Color::GRN << std::endl;
    }

    std::cout << "\n----------------------" << std::endl;
    std::cout << bar << std::endl;
    std::cout << "----------------------" << std::endl;
}