//
// Created by Radim Kotajny on 14.12.2025.
//

#ifndef UNTITLED_SWORD_H
#define UNTITLED_SWORD_H

#include "../GameItem.h"
#include <string>

class Sword : public GameItem {
private:
    float damage;

public:
    Sword(std::string name, Rarity rarity, float price, float weight, int lvl, float dmg);

    void use() override;

    [[nodiscard]] float getDamage() const { return damage; }
};

#endif //UNTITLED_SWORD_H