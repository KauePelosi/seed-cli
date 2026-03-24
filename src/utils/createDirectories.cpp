#include <filesystem>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>

void createDirectories(const nlohmann::json &templateData,
                       const std::string &projectName) {
  std::filesystem::path projectDirectory = projectName;

  try {
    std::filesystem::create_directories(projectDirectory);
  } catch (std::filesystem::filesystem_error &e) {
    std::cerr << "error: " << e.what() << "\n";
  }

  if (templateData.contains("project_structure")) {
    for (const auto &dir : templateData["project_structure"]) {
      std::filesystem::path fullPath =
          projectDirectory / dir.get<std::string>();
      std::filesystem::create_directories(fullPath);
    }
  }
}
