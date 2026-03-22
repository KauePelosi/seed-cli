#include "../include/createProject.hpp"
#include <filesystem>
#include <fstream>
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
}
