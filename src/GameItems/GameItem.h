//
// Created by Radim Kotajny on 13.12.2025.
//

#ifndef UNTITLED_HERNIPREDMET_H
#define UNTITLED_HERNIPREDMET_H

#include <string>

enum Rarity {
    COMMON,
    UNCOMMON,
    GOOD,
    RARE,
    LEGENDARY
};

class GameItem {
protected:
    std::string name;
    Rarity rarity_;
    float price;
    float weight;
    int requiredLevel;

public:
    GameItem(std::string name, Rarity rarity, float price, float weight, int lvl);

    virtual ~GameItem() = default;

    virtual void use() = 0;

    [[nodiscard]] std::string get_name() const;
    [[nodiscard]] Rarity get_rarity() const;
    [[nodiscard]] float get_price() const;
    [[nodiscard]] float get_weight() const;
    [[nodiscard]] int get_required_level() const;
};

#endif //UNTITLED_HERNIPREDMET_H