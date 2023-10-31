// Bhavesh Malhi
// Bhavesh05@csu.fullerton.edu
// @bhavesh1024
// Partners: @roas23

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  double sum{0.0};
  for (int value = 1; value < arguments.size(); value++) {
    sum += std::stod(arguments.at(value));
  }
  double average = sum / (arguments.size() - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}
