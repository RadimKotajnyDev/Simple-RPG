#include "Sword.h"
#include <iostream>
#include <utility>

Sword::Sword(std::string name, Rarity rarity, float price, float weight, int lvl, float dmg)
    : GameItem(std::move(name), rarity, price, weight, lvl),
      damage(dmg)
{}

void Sword::use() {
    std::cout << "Švih! Máchnul jsi zbraní " << get_name()
              << " a způsobil " << damage << " poškození." << std::endl;
}