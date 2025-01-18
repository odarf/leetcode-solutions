
#include <cmath>
#include <cstdlib>
#include <iostream>

int fib(int n) {
  // Fibonacci Sequence Derive Explicit Formula
  float first = 1 / sqrt(5);
  float second = pow((1 + sqrt(5)) / 2, n);
  float third = pow((1 - sqrt(5)) / 2, n);
  return round(first * second - first * third);
}

int main(int argc, char *argv[]) {
  std::cout << fib(atoi(argv[1])) << std::endl;
  return 0;
}