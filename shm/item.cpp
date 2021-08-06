#include "item.hpp"

Item::Item(std::string &name, size_t amount, size_t basePrice, Rarity rarity)
    : Cargo{name, amount, basePrice}, rarity_{rarity} {}

size_t Item::getPrice() const {
  return static_cast<size_t>(
      ((static_cast<double>(basePrice_) * static_cast<double>(rarity_)) / 100));
}
size_t Item::getBasePrice() const { return basePrice_; }

bool Item::operator==(Cargo &cargo) const {}