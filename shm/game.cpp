#include "game.hpp"

void Game::startGame(Ship startMoney, Time gameDays, size_t finalGoal) {
    int keySignal;
    while(gameOver != 0) {
        std::cout << "Sklep – 0, tawerna – 1, wyplyn w podroz – 2, zakoncz dzien – 3.\n";
        std::cin >> keySignal;
        if(keySignal == 0) {
            std::cout << "Kupuj – 0, sprzedawaj – 1, wyjdz ze sklepu – 2.\n";
            std::cin >> keySignal;

        }
        if(keySignal == 1) {
            std::cout << "Rekrutuj – 0, wyrzuc z zalogi – 1, wyjdz z tawerny – 2.\n";
            std::cin >> keySignal;
        }
        if(keySignal == 2) {
            std::cout << ""; //cel podrozy
        }

        if(gameDays_.getDayNr() == gameDays_.getDaysLimit()) {
            gameOver = 0;
        }
    }
}