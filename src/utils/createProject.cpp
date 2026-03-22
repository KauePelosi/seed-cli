#include "../../include/createProject.hpp"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

void createProject(const std::string &projectName) {
  std::filesystem::path projectPath = projectName;

  std::filesystem::path src = projectPath / "src";
  std::filesystem::path include = projectPath / "include";
  std::filesystem::path bin = projectPath / "bin";
  std::filesystem::path build = projectPath / "build";

  if (!exists(projectPath)) {
    create_directory(projectPath);
  }
  if (!exists(src)) {
    create_directory(src);
  }
  if (!exists(include)) {
    create_directory(include);
  }
  if (!exists(build)) {
    create_directory(build);
  }
  if (!exists(bin)) {
    create_directory(bin);
  }
  std::filesystem::path main = src / "main.cpp";
  std::ofstream file(main);

  if (file.is_open()) {
    file << "#include <iostream>\n";
    file << "int main() {\n";
    file << "  std::cout << \"Hello World!\";";
    file << "\n  return 0;";
    file << "\n}";

  } else {
    std::cerr << "Failed to create file: " << main << "\n";
  }
}
