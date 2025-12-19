//
// Created by Radim Kotajny on 14.12.2025.
//

#ifndef UNTITLED_ENTITY_H
#define UNTITLED_ENTITY_H
#include <iostream>

#include "GameItem.h"
#include <utility>
#include <vector>
#include <memory>


class Entity {
protected:
    std::string name;
    int health = 0;
    int maxHealth = 100;
    std::vector<std::unique_ptr<GameItem>> inventory = {};
    GameItem* activeItem = nullptr;

public:
    std::string getName() const {
        return name;
    }

    void setHealth(const int hp) {
        this->health = hp;
    }

    void dealDamage(const int damage) {
        this->health = std::clamp(health - damage, 0, maxHealth);
    }

    void heal(const int amount) {
        this->health = std::clamp(health + amount, 0, maxHealth);
    }

    explicit Entity(std::string name, int hp) : name(std::move(name)), health(hp) {}

    void pickUp(std::unique_ptr<GameItem> item) {
        if (activeItem == nullptr) {
            activeItem = item.get();
        }

        std::cout << "Sebral jsi: " << item->get_name() << std::endl;

        inventory.push_back(std::move(item));
    }

    void transferLootTo(Entity& receiver) {
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

    void showInventory() const {
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

    void equipItem(size_t index) {
        if (index >= 0 && index < inventory.size()) {
            activeItem = inventory[index].get();

            std::cout << name << " si bere do ruky: " << activeItem->get_name() << std::endl;
        } else {
            std::cout << "Takový předmět v batohu není!" << std::endl;
        }
    }



    virtual void InvokeAction() = 0;
    virtual ~Entity() = default;
};


#endif //UNTITLED_ENTITY_H