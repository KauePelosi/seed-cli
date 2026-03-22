#include "../include/userInput.hpp"
#include <iostream>
#include <string>

std::string userInput(int argc, char *argv[]) {
  if (argc < 3) {
    std::cout << "Please, inform the language and project name, example:\n";
    std::cout << "seed cpp project_name\n";
    exit(1);
  }
  if (std::string(argv[1]) != "cpp") {
    std::cout
        << "Just cpp is available to create projects, until this moment.\n";
    exit(1);
  }
  return std::string(argv[2]);
}
