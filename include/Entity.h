//
// Created by Radim Kotajny on 14.12.2025.
//

#ifndef UNTITLED_ENTITY_H
#define UNTITLED_ENTITY_H
#include <iostream>

#include "GameItem.h"
#include <utility>
#include <vector>
#include <memory>

class Entity {
protected:
    std::string name;
    int health = 0;
    std::vector<std::unique_ptr<GameItem>> inventory = {};
    GameItem* activeItem = nullptr;

public:
    std::string get_name() const {
        return name;
    }

    explicit Entity(std::string name, int hp) : name(std::move(name)), health(hp) {}

    void pickUp(std::unique_ptr<GameItem> item) {
        if (activeItem == nullptr) {
            activeItem = item.get();
        }

        std::cout << "Sebral jsi: " << item->get_name() << std::endl;
    }

    virtual void attack() = 0;
    virtual ~Entity() = default;
};


#endif //UNTITLED_ENTITY_H