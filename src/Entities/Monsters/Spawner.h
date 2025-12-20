//
// Created by Radim Kotajny on 20.12.2025.
//

#ifndef SIMPLERPG_MONSTERSPAWNER_H
#define SIMPLERPG_MONSTERSPAWNER_H
#include <memory>

#include "Monster.h"
#include "Skeleton/Skeleton.h"
#include "Wolf/Wolf.h"


class Spawner {
public:
    virtual ~Spawner() = default;

    virtual std::unique_ptr<Monster> spawnMonster() const = 0;

    std::unique_ptr<Monster> spawnAndAnnounce() const;

};

class ForestSpawner: public Spawner {
public:
    std::unique_ptr<Monster> spawnMonster() const override;
};

class DungeonSpawner : public Spawner {
    std::unique_ptr<Monster> spawnMonster() const override;
};


#endif //SIMPLERPG_MONSTERSPAWNER_H