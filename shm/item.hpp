#pragma once
#include "cargo.hpp"

enum class Rarity {
  common = 100,
  rare = 125,
  epic = 150,
  legendary = 200,
};

class Item : public Cargo {
  Rarity rarity_{Rarity::common};

public:
  Item(std::string &name, size_t amount, size_t basePrice, Rarity rarity);

  size_t getPrice() const override;
  size_t getBasePrice() const override;
  bool operator==(Cargo &cargo) const override;
};