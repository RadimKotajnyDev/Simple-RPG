#include "GameItem.h"
#include <utility>

GameItem::GameItem(std::string name, const Rarity rarity, const float price, const float weight, const int lvl)
    : name(std::move(name)),
      rarity_(rarity),
      price(price),
      weight(weight),
      requiredLevel(lvl)
{}

std::string GameItem::get_name() const {
    return name;
}

Rarity GameItem::get_rarity() const {
    return rarity_;
}

float GameItem::get_price() const {
    return price;
}

float GameItem::get_weight() const {
    return weight;
}

int GameItem::get_required_level() const {
    return requiredLevel;
}