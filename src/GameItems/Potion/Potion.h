//
// Created by Radim Kotajny on 14.12.2025.
//

#ifndef UNTITLED_POTION_H
#define UNTITLED_POTION_H
#include <utility>

#include "../GameItem.h"

class Potion : public GameItem {
private:
    int heal;

public:
    Potion(std::string name, Rarity rarity, float price, float weight, int lvl, int h);

    void use() override;

    [[nodiscard]] int getHealAmount() const { return heal; }
};

#endif //UNTITLED_POTION_H