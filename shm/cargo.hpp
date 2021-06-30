#pragma once
#include <iostream>
#include <string>

class Cargo {
private:
  const std::string name_;
  size_t amount_;
  size_t basePrice_;

public:
  Cargo(const std::string name, size_t amount, size_t basePrice)
      : name_(name), amount_(amount), basePrice_(basePrice) {}

  Cargo &operator+=(size_t amount);
  Cargo &operator-=(size_t amount);
  bool operator==(Cargo &cargo);

  virtual size_t getPrice const = 0;
  virtual std::string getName() const = 0;
  virtual size_t getAmount() const = 0;
  virtual size_t getBasePrice() const = 0;
};
