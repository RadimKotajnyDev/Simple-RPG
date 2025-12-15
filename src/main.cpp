#include <iostream>

#include "Player.h"
#include "Potion.h"
#include "Sword.h"

int main() {
    /*
    std::vector<std::unique_ptr<GameItem>> inventory = {};
    inventory.push_back(std::make_unique<Sword>("Meč Racka Kobyly", RARE, 1000, 20, 10, 90));
    inventory.push_back(std::make_unique<Potion>("Heřmánkový odvar (silný)", COMMON, 30, 1, 1, 45));

    for (const auto& item : inventory) {
        item->use();
    }
    */

    Player Pepa ("Pepik", 100);

    Pepa.attack();

    Pepa.pickUp(std::make_unique<Sword>("Excalibur", LEGENDARY, 2999.0, 30, 1, 120));

    Pepa.attack();

    return 0;
}