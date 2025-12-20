#include <iostream>

#include "Entities/Monsters/Spawner.h"
#include "src/Entities/Monsters/Monster.h"
#include "src/Entities/Players/Player.h"
#include "src/GameItems/Potion/Potion.h"
#include "src/GameItems/Sword/Sword.h"

void exploreLocation(Player& player, const Spawner& spawner) {
    std::unique_ptr<Monster> enemy = spawner.spawnAndAnnounce();

    player.invokeAction(enemy.get());
    enemy->invokeAction(&player);

    if (enemy->getHealth() <= 0) {
        enemy->transferLootTo(player);
    } else {
        std::cout << "Hráč dorazil nepřítele!" << std::endl;
        enemy->transferLootTo(player);
    }
}

int main() {
    std::srand(std::time(nullptr));
    Player pepik("Pepik", 100);

    std::cout << "--- Vstupuješ do Hlubokého hvozdu ---" << std::endl;

    ForestSpawner les;

    exploreLocation(pepik, les);


    std::cout << "\n--- Sestupuješ do Zatuchlé kobky ---" << std::endl;

    DungeonSpawner kobka;

    exploreLocation(pepik, kobka);

    pepik.showInventory();

    return 0;
}