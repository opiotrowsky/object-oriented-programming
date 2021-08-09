#pragma once
#include "cargo.hpp"
#include "map.hpp"
#include "player.hpp"
#include "ship.hpp"
#include "store.hpp"
#include "time.hpp"
#include "alcohol.hpp"
#include "fruit.hpp"
#include "item.hpp"
#include "coordinates.hpp"
#include "island.hpp"
#include "commands.hpp"

class Game {
private:
    Ship startMoney_;
    Time gameDays_;
    size_t finalGoal_;
    bool gameOver = true;

public:
    Game::Game();
    Game::Game(Ship startMoney, Time gameDays, size_t finalGoal) {}

    void startGame(Ship startMoney, Time gameDays, size_t finalGoal);

};