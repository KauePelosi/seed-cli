#include "../../include/getUserInput.hpp"
#include <iostream>
#include <string>
#include <utility>

std::pair<std::string, std::string> getUserInput(int argc, char *argv[]) {
  if (argc < 3) {
    std::cout << "Please provide the language and project name.\n";
    std::cout << "Example:\n";
    std::cout << "seed cpp project_name\n";
    exit(1);
  }
  if (std::string(argv[1]) != "cpp") {
    std::cout << "Only C++ is currently supported.\n";
    exit(1);
  }
  return {std::string(argv[1]), std::string(argv[2])};
}
