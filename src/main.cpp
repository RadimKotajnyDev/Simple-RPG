#include <iostream>

#include "Monster.h"
#include "Player.h"
#include "Potion.h"
#include "Sword.h"

int main() {
    Player pepik("Pepik", 100);

    // 1. Pepik najde meč
    pepik.pickUp(std::make_unique<Sword>("Excalibur", LEGENDARY, 1000, 10, 1, 50));

    // 2. Zabije skřeta a vezme mu lektvar
    Monster skret("Skřet", 20);
    skret.transferLootTo(pepik);

    // 3. Koukneme do batohu
    pepik.showInventory();

    // 4. Teď drží Excalibur (protože ho sebral jako první a pickUp to nastavil).
    // Zkusíme útok:
    pepik.attack(); // Sekne mečem

    // 5. Pepik si chce vzít lektvar (bude na indexu 1, protože meč je na 0)
    pepik.equipItem(1);

    // 6. Znovu koukneme do batohu (měla by se přesunout značka [DRŽÍŠ V RUCE])
    pepik.showInventory();

    // 7. Použijeme předmět v ruce
    pepik.attack(); // Měl by se vypít lektvar

    return 0;
}