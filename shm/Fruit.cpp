#include "Fruit.hpp"

Fruit &operator-- Cargo(size_t amount);

Fruit &Fruit::operator--(size_t useTime) {
  useTime_ -= 1;
  return *this;
}

auto getPrice() { return 0; }