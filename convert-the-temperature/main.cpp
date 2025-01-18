#include <cstdlib>
#include <iostream>
#include <vector>

std::vector<double> convertTemperature(double celsius) {
  return {celsius + 273.15, (celsius * 1.8) + 32};
}

int main(int argc, char *argv[]) {
  std::cout << convertTemperature(atof(argv[1]))[0] << " | "
            << convertTemperature(atof(argv[1]))[1] << std::endl;
  return 0;
}