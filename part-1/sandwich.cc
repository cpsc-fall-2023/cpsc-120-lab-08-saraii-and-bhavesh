// Bhavesh Malhi
// Bhavesh05@csu.fullerton.edu
// @bhavesh1024
// Partners: @roas23

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }
  std::string protien{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};
  std::cout << "Your order:\n A " << protien << " sandwich on " << bread
            << " with " << condiment << ".\n";

  return 0;
}
