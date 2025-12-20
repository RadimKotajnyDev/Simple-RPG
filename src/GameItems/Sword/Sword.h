//
// Created by Radim Kotajny on 14.12.2025.
//

#ifndef UNTITLED_SWORD_H
#define UNTITLED_SWORD_H
#include <utility>

#include "../GameItem.h"

class Sword : public GameItem {
private:
    float damage;

public:
    Sword(std::string name, Rarity rarity, float price, float weight, int lvl, float dmg)
        : GameItem(std::move(name), rarity, price, weight, lvl), damage(dmg) {

    }

    void use() override;
};


#endif //UNTITLED_SWORD_H