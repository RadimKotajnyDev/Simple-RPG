//
// Created by Radim Kotajny on 19.12.2025.
//

#ifndef UNTITLED_SKELETON_H
#define UNTITLED_SKELETON_H
#include "../Monster.h"

class Skeleton : public Monster {
public:
    Skeleton();

    void roar();

    void roar() const override;

    void invokeAction(Entity* target = nullptr) override;
};


#endif //UNTITLED_SKELETON_H