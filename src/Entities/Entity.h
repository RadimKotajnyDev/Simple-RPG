#ifndef UNTITLED_ENTITY_H
#define UNTITLED_ENTITY_H

#include <string>
#include <vector>
#include <memory>
#include "../GameItems/GameItem.h"

class Entity {
protected:
    std::string name;
    int health = 0;
    int maxHealth = 100;
    std::vector<std::unique_ptr<GameItem>> inventory = {};
    GameItem* activeItem = nullptr;

public:
    explicit Entity(std::string name, int hp);

    void setName(const std::string &name);
    void setHealth(int health);
    int getHealth() const;
    [[nodiscard]] int getMaxHealth() const;
    void setMaxHealth(int max_health);
    std::string getName() const;

    void dealDamage(int damage);
    void heal(int amount);

    void pickUp(std::unique_ptr<GameItem> item);
    void transferLootTo(Entity& receiver);
    void showInventory() const;
    void equipItem(size_t index);

    void showHUD();

    virtual void invokeAction(Entity* target = nullptr) = 0;
    virtual ~Entity() = default;
};

#endif //UNTITLED_ENTITY_H