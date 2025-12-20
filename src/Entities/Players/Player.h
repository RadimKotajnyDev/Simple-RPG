//
// Created by Radim Kotajny on 15.12.2025.
//

#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H
#include "../Entity.h"
#include <iostream>
#include <utility>

class Player : public Entity {
protected:
    int xp;
    int level;

public:
    explicit Player(std::string name, const int hp);

    void invokeAction(Entity* target = nullptr) override;
};


#endif //UNTITLED_PLAYER_H