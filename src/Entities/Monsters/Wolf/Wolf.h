//
// Created by Radim Kotajny on 19.12.2025.
//

#ifndef UNTITLED_WOLF_H
#define UNTITLED_WOLF_H
#include "../Monster.h"


class Wolf : public Monster {
public:
    Wolf();

    void roar();

    void roar() const override;

    void invokeAction(Entity *target = nullptr) override;
};


#endif //UNTITLED_WOLF_H
