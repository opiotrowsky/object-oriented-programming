#pragma once
#include "alcohol.hpp"
#include "cargo.hpp"
#include "coordinates.hpp"
#include "fruit.hpp"
#include "island.hpp"
#include "item.hpp"
#include "map.hpp"
#include "player.hpp"
#include "ship.hpp"
#include "store.hpp"
#include "time.hpp"
// #include "commands.hpp"

class Game {
    Ship startMoney_;
    Time gameDays_;
    map newMap_;
    size_t finalGoal_;
    bool gameOver = false; 

public:
    Game();
    Game(Ship startMoney, Time gameDays, size_t finalGoal);

    //void startGame(Ship startMoney, Time gameDays, size_t finalGoal);
    void startGame();
    map retrunMap() const {return newMap_;}
};