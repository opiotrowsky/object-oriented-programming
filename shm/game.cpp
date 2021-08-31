#include "game.hpp"

Game::Game(Ship startMoney, Time gameDays, size_t finalGoal)
    : startMoney_(startMoney), gameDays_(gameDays), finalGoal_(finalGoal) {}

void Game::startGame() {
    int keySignal;
    while (gameOver != true) {
        std::cout << "Sklep [0], tawerna [1], wyswietl mape [2], zakoncz dzien [3].\n";
        std::cin >> keySignal;
        if (keySignal == 0) {
            std::cout << "Kupuj [0], sprzedawaj [1], wyjdz ze sklepu [2].\n";
            std::cin >> keySignal;
        }
        if (keySignal == 1) {
            std::cout << "Rekrutuj [0], wyrzuc z zalogi [1], wyjdz z tawerny [2].\n";
            std::cin >> keySignal;
        }
        if (keySignal == 2) {
            retrunMap().printIslands();
            std::cout << "Wybierz cel podrozy [0-9] lub cofnij [10]\n";
            std::cin >> keySignal;
            // if(keySignal >= 0 and keySignal <= 9) {

            // }
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
//taki wywala blad przy kompilacji
/*
╭─marcins@msdeb ~/Programowanie/CodersSchool/OOP/object-oriented-programming/shm/build ‹Task2.6*› 
╰─$ ./SHM 
Sklep – 0, tawerna – 1, wyswietl mapy - 2, zakoncz dzien – 3.
2
2 7
3 3
4 8
5 5
7 1
11 8
12 3
13 5
14 11
15 12
Koniec gry !


Narazie taki jest efek :)  a błąd polegal na tym ze MakeFile nie bylo pliku map.cpp
*/
//o kurczę, aż dziwne
//mamy przecież tę funkcję