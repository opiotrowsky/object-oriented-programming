#pragma once
#include "cargo.hpp"

class Fruit : public Cargo {

  size_t useTime_;

  Fruit &operator--(size_t useTime);

  auto getPrice();
}