#include "island.hpp"

Island::Island(const Coordinates& position)
        : position_(position)
    {}
std::string Island::getName() {
    return name_;
}

void Island::setName(const std::string& name) {
    name_ = name;
}

// std::string Island::getName(std::string name_) {
//     std::vector<std::string> firstHalf {"Green", "Sea", "Rock", "Sand", "Mount", "Sky", "Gold", "Blue", "Sun", "Moon"};
//     std::vector<std::string> secondHalf {"berg", "land", "le", "gard", "bor", "haven", "shore", "side", " Lagoon", " Bay"};
//     std::random_device rd;
//     std::mt19937 gen1(rd());
//     std::uniform_int_distribution<> dis1(0, firstHalf.size() - 1);
//     std::mt19937 gen2(rd());
//     std::uniform_int_distribution<> dis2(0, secondHalf.size() - 1);
//     name_ += (firstHalf[dis1(gen1)]);
//     name_ += (secondHalf[dis2(gen2)]);
//     return name_;
// }
