//
// Created by Radim Kotajny on 15.12.2025.
//

#include "Player.h"

Player::Player(std::string name, const int hp) : Entity(std::move(name), hp), xp(0), level(1) {}


void Player::invokeAction(Entity* target) {
    if (activeItem != nullptr) {
        std::cout << "Hráč (lvl " << level << "): " << name << " útočí!" << std::endl;
        activeItem->use();
    } else {
        std::cout << "Hráč " << name << " mlátí pěstmi! Nemá nic v ruce." << std::endl;
    }
}