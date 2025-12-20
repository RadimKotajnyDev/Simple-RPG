//
// Created by Radim Kotajny on 14.12.2025.
//

#include "Potion.h"

#include <iostream>
#include <utility>

Potion::Potion(std::string name, Rarity rarity, float price, float weight, int lvl, int h)
    : GameItem(std::move(name), rarity, price, weight, lvl),
      heal(h)
{}

void Potion::use() {
    std::cout << "Glglgl... Vypil jsi " << get_name()
              << " a vyléčil se o " << heal << " HP." << std::endl;
}
