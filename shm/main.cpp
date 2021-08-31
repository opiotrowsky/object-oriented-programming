#include "game.hpp"

constexpr size_t start_money = 1'000;
constexpr size_t game_days = 3;
constexpr size_t final_goal = 2'000;

int main() {
    
    Ship ship;
    ship.setCoins(start_money);
    Time gameDays;
    gameDays.setDaysLimit(game_days);
    Game game(ship, gameDays, final_goal);

    game.startGame();

    return 0;
}