#pragma once
#include "coordinates.hpp"
#include <string>
#include <vector>
#include <random>

//island will be descibed as x, y possition from coordiates class
class Island {
public:
    explicit Island(const Coordinates&);
    Coordinates getPosition() const { return position_; }
    std::string getName();
    void setName(const std::string& name);

private:
    Coordinates position_;
    std::string name_;
};
