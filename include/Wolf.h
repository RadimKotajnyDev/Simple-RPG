//
// Created by Radim Kotajny on 19.12.2025.
//

#ifndef UNTITLED_WOLF_H
#define UNTITLED_WOLF_H
#include "Monster.h"


class Wolf : public Monster {
public:
    Wolf() : Monster("Šedý vlk", 30) {}

    void invokeAction() override {
        std::cout << name << " tě kousnul do nohy!" << std::endl;
    }
};


#endif //UNTITLED_WOLF_H