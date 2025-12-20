//
// Created by Radim Kotajny on 19.12.2025.
//

#include "Wolf.h"
#include <iostream>

Wolf::Wolf(): Monster("Šedý vlk", 30) {}

void Wolf::roar() const {
    std::cout << "*Vyjí na měsíc!*" << std::endl;
}

void Wolf::invokeAction(Entity *target) {
    std::cout << name << " tě kousnul do nohy!" << std::endl;
}

