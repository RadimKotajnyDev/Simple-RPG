//
// Created by Radim Kotajny on 13.12.2025.
//

#ifndef UNTITLED_HERNIPREDMET_H
#define UNTITLED_HERNIPREDMET_H
#include <string>
#include <utility>

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

    virtual void use() = 0;

    std::string get_name() const {
        return name;
    }

    Rarity get_rarity() const {
        return rarity_;
    }

    float get_price() const {
        return price;
    }

    float get_weight() const {
        return weight;
    }

    int get_required_level() const {
        return requiredLevel;
    }

    GameItem(
        std::string name,
        const Rarity rarity,
        const float price,
        const float weight,
        const int lvl)
        : name(std::move(name)),
          rarity_(rarity),
          price(price),
          weight(weight),
          requiredLevel(lvl) {
    }

    virtual ~GameItem() = default;
};


#endif //UNTITLED_HERNIPREDMET_H
