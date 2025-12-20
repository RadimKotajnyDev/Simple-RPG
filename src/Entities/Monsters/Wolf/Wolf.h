//
// Created by Radim Kotajny on 19.12.2025.
//

#ifndef UNTITLED_WOLF_H
#define UNTITLED_WOLF_H
#include "../Monster.h"


class Wolf : public Monster {
public:
    Wolf() : Monster("Šedý vlk", 30) {
    }

    void roar() const override {
        std::cout << "*Vyjí na měsíc!*" << std::endl;
    }

    void invokeAction(Entity *target = nullptr) override {
        std::cout << name << " tě kousnul do nohy!" << std::endl;
    }
};


#endif //UNTITLED_WOLF_H
