#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>

void createDirectories(nlohmann::json &templateData) {
  if (templateData.contains("project_structure")) {
    for (const auto &dir : templateData["project_structure"]) {
      std::filesystem::create_directories(dir);
    }
  }
}
