#include <functional>
#include <iostream>
#include <vector>

#include "candle.h"

static std::vector<std::function<bool()>> tests;

bool test_body_contains_1() {
  //
  return false;
}

void initTests() { tests.push_back(test_body_contains_1); }

int launchTests() {
  int total = 0;
  int passed = 0;

  for (const auto& test : tests) {
    std::cout << "test #" << (total + 1);
    if (test()) {
      passed += 1;
      std::cout << " passed\n";
    } else {
      std::cout << " failed\n";
    }
    total += 1;
  }

  std::cout << "\ntests " << passed << "/" << total << " passed!" << std::endl;

  return total - passed;
}

int main() {
  initTests();
  return launchTests();
}
