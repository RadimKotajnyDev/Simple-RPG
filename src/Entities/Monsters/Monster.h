//
// Created by Radim Kotajny on 15.12.2025.
//

#ifndef UNTITLED_MONSTER_H
#define UNTITLED_MONSTER_H
#include "../Entity.h"
#include "../../GameItems/Potion/Potion.h"


class Monster : public Entity {
public:
    Monster(std::string name, int hp);

    virtual void roar() const = 0;

    void invokeAction(Entity* target = nullptr) override;
};


#endif //UNTITLED_MONSTER_H