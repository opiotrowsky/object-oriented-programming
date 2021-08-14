#include "game.hpp"

constexpr size_t start_money = 1'000;
constexpr size_t game_days = 100;
constexpr size_t final_goal = 2'000;

int main() {
    
    Ship ship;
    Time gameDays;
    Game game(ship, gameDays, final_goal);

    game.startGame();

    return 0;
}