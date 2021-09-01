#include "game.hpp"

Game::Game(Ship startMoney, Time gameDays, size_t finalGoal)
    : startMoney_(startMoney), gameDays_(gameDays), finalGoal_(finalGoal) {}

void Game::startGame() {
    int keySignal;
    while (gameOver != true) {
        std::cout << "Sklep [0], tawerna [1], wyswietl mape [2], zakoncz dzien [3], zakoncz GRĘ [-1]\n";
        std::cin >> keySignal;
        if(keySignal == -1) {
            gameOver = true;
        }
        if (keySignal == 0) {
            std::cout << "Kupuj [0], sprzedawaj [1], wyjdz ze sklepu [2].\n";
            std::cin >> keySignal;
            if(keySignal == 0) {
                std::cout << "Co chcesz kupic?\n";
            }
            // Kupowanie i sprzedawanie

            if(keySignal == 2) {
                continue;
            }
        }
        if (keySignal == 1) {
            std::cout << "Rekrutuj [0], wyrzuc z zalogi [1], wyjdz z tawerny [2].\n";
            std::cin >> keySignal;
            // Edycja załogi

            if(keySignal == 2) {
                continue;
            }
        }
        if (keySignal == 2) {
            retrunMap().printIslands();
            std::cout << "Wybierz cel podrozy [0-9] lub cofnij [10]\n";
            std::cin >> keySignal;
            // Wybór wyspy

            if(keySignal == 10) {
                continue;
            }
        }
        if (keySignal == 3) {
            gameDays_.endCurrentDay(gameDays_.getDayNr());
        }
        if (gameDays_.getDayNr() == gameDays_.getDaysLimit()) {
            std::cout << "Koniec gry!\n";
            gameOver = true;
        }
    }
}
