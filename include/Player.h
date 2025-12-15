//
// Created by Radim Kotajny on 15.12.2025.
//

#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H
#include "Entity.h"
#include <iostream>
#include <utility>

class Player : public Entity {
protected:
    int xp;
    int level;

public:
    explicit Player(std::string name, const int hp) : Entity(std::move(name), hp), xp(0), level(1) {}

    void attack() override {
        if (activeItem != nullptr) {
            std::cout << "Hráč (lvl " << level << "): " << name << " útočí!" << std::endl;
            activeItem->use();
        } else {
            std::cout << "Hráč " << name << " mlátí pěstmi! Nemá nic v ruce." << std::endl;
        }
    }
};


#endif //UNTITLED_PLAYER_H