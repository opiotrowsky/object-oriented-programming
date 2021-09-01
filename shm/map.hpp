#pragma once
#include <memory>
#include <vector>
#include "island.hpp"

class map {
public:
    map();
    void printIslands() const;
    Island* getIsland(const Coordinates&) const;

private:
    std::vector<std::pair<int, int>> generateIslandPosition() const;
    std::vector<std::shared_ptr<Island>> map_{}; //tutaj przechowamy wszsytkie wyspy 
    Island* currentPosition_ = nullptr;
};
