#include "../../include/generateFromTemplate.hpp"
#include "../../include/createProject.hpp"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <nlohmann/json_fwd.hpp>
#include <string>

void generateFromTemplate(const std::string &projectLanguage,
                          const std::string &projectName) {

  std::filesystem::path templatePath = std::filesystem::current_path() /
                                       "templates" / projectLanguage /
                                       "template.json";
  if (!std::filesystem::exists(templatePath)) {
    std::cerr << "error: template file to language " << projectLanguage
              << " was not found\n";
    exit(1);
  }
  std::ifstream file(templatePath);
  if (!file.is_open()) {
    std::cerr
        << "error: was not possible to open the template file to language "
        << projectLanguage << "\n";
  }
  nlohmann::json templateData = nlohmann::json::parse(file);
  createProject(templateData, projectName);
}
