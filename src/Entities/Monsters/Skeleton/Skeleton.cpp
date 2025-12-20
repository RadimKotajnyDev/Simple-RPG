//
// Created by Radim Kotajny on 19.12.2025.
//

#include "Skeleton.h"
#include <iostream>

Skeleton::Skeleton() : Monster ("Kostík z jogurtu", 10) {}

void Skeleton::roar() const {
    std::cout << "*Chrastí kostmi!*" << std::endl;
}

void Skeleton::invokeAction(Entity *target) {
    std::cout << "Chrastí kostmi" << std::endl;
}
