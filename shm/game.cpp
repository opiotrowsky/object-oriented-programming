#include "game.hpp"

Game::Game(Ship startMoney, Time gameDays, size_t finalGoal)
    : startMoney_(startMoney), gameDays_(gameDays_), finalGoal_(finalGoal) {}

void Game::startGame() {
    int keySignal;
    while (gameOver != true) {
        std::cout << "Sklep – 0, tawerna – 1, wyswietl mapy - 2, zakoncz dzien – 3.\n";  //żeby podróżować po wyświetleniu mapy?
        std::cin >> keySignal;
        if (keySignal == 0) {
            std::cout << "Kupuj – 0, sprzedawaj – 1, wyjdz ze sklepu – 2.\n";
            std::cin >> keySignal;
        }
        if (keySignal == 1) {
            std::cout << "Rekrutuj – 0, wyrzuc z zalogi – 1, wyjdz z tawerny – 2.\n";
            std::cin >> keySignal;
        }
        if (keySignal == 2) {
            retrunMap().printIslands();
        }
        if (gameDays_.getDayNr() == gameDays_.getDaysLimit()) {
            std::cout << "Koniec gry !\n";
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