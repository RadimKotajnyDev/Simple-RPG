//
// Created by Radim Kotajny on 15.12.2025.
//

#include "Monster.h"
#include <iostream>

Monster::Monster(std::string name, int hp)
    : Entity(std::move(name), hp)
{
    // Tělo konstruktoru
    inventory.push_back(std::make_unique<Potion>("Potion of weakness", COMMON, 10, 0.5, 1, 10));
}

void Monster::invokeAction(Entity *target) {
    std::cout << "Monstrum " << name << " agresivně útočí!" << std::endl;
}

