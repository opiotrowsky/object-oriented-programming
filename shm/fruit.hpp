#pragma once
#include "cargo.hpp"
#include <cstddef>

class Fruit : public Cargo {

  size_t daysToExpiry_{};
  size_t daysLeftToExpiry_{daysToExpiry_};

public:
  Fruit(std::string &name, size_t amount, size_t basePrice,
        size_t daysToExpiry);
  Cargo &operator+=(size_t amount) override;
  Cargo &operator-=(size_t amount) override;
  Fruit &operator--();
  bool operator==(Cargo &cargo) const override;

  size_t getPrice() const override;
  size_t getBasePrice() const override;
  size_t nextDay() override;
};