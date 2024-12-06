#pragma once

#include <stdint.h>

#include <string>

using Price = double;

struct Candle {
 public:
  Price open;
  Price high;
  Price low;
  Price close;

 public:
  Candle() = default;
  Candle(Price _open, Price _high, Price _low, Price _close);

 public:
  bool body_contains(const Price& price) const noexcept;

  bool contains(const Price& price) const noexcept;

  double full_size() const noexcept;

  double body_size() const noexcept;

  bool is_green() const noexcept;
  bool is_red() const noexcept;
};
