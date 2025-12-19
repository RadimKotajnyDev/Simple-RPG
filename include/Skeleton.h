//
// Created by Radim Kotajny on 19.12.2025.
//

#ifndef UNTITLED_SKELETON_H
#define UNTITLED_SKELETON_H
#include "Monster.h"


class Skeleton : public Monster {
public:
    Skeleton() : Monster ("Vale", 10) {}

    void InvokeAction() override {
        std::cout << "Chrastí kostmi" << std::endl;
    }
};


#endif //UNTITLED_SKELETON_H