//
// Created by Radim Kotajny on 20.12.2025.
//

#include "Spawner.h"
#include <iostream>

std::unique_ptr<Monster> Spawner::spawnAndAnnounce() const {
    std::unique_ptr<Monster> m = spawnMonster();

    std::cout << "\n Z temnoty se vynořil: " << m->getName() << " <<<" << std::endl;
    m->roar();

    return m;
}

std::unique_ptr<Monster> ForestSpawner::spawnMonster() const {
    return std::make_unique<Wolf>();
}

std::unique_ptr<Monster> DungeonSpawner::spawnMonster() const {
    return std::make_unique<Skeleton>();
}