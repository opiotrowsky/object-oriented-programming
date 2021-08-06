#include "fruit.hpp"

Fruit::Fruit(std::string &name, size_t amount, size_t basePrice,
             size_t daysToExpiry)
    : Cargo{name, amount, basePrice}, daysToExpiry_{daysToExpiry} {};

bool Fruit::operator==(Cargo &cargo) const {}

Fruit &Fruit::operator--() {
  if (daysLeftToExpiry_) {
    daysLeftToExpiry_--;
    return *this;
  }
  return *this;
}

size_t Fruit::getPrice() const {
  return (basePrice_ * (daysToExpiry_ - daysLeftToExpiry_) / daysLeftToExpiry_);
}

size_t Fruit::getBasePrice() const { return basePrice_; }
size_t Fruit::nextDay() { return daysLeftToExpiry_--; }
