//
// Created by Radim Kotajny on 15.12.2025.
//

#ifndef UNTITLED_MONSTER_H
#define UNTITLED_MONSTER_H
#include "../Entity.h"
#include "../../GameItems/Potion/Potion.h"


class Monster : public Entity {
public:
    Monster(std::string name, int hp) : Entity(std::move(name), hp) {
        inventory.push_back(std::make_unique<Potion>("Potion of weakness", COMMON, 10, 0.5, 1, 10));
    }

    virtual void roar() const = 0;

    void invokeAction(Entity* target = nullptr) override {
        std::cout << "Monstrum " << name << " agresivně útočí!" << std::endl;
    }
};


#endif //UNTITLED_MONSTER_H