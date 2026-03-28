#include "../../include/createProject.hpp"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>

void createProject(const nlohmann::json &templateData,
                   const std::string &projectName) {

  std::filesystem::path projectDirectory = projectName;

  try {
    std::filesystem::create_directories(projectDirectory);
  } catch (std::filesystem::filesystem_error &e) {
    std::cerr << "error: " << e.what() << "\n";
  }

  if (templateData.contains("project_structure")) {
    for (const auto &dir : templateData["project_structure"]) {
      std::filesystem::path fullDirectoryPath =
          projectDirectory / dir.get<std::string>();
      std::filesystem::create_directories(fullDirectoryPath);
    }
  }
  if (templateData.contains("project_files")) {
    for (const auto &file : templateData["project_files"]) {
      std::filesystem::path fullFilesPath =
          projectDirectory / file.get<std::string>();

      std::ofstream ofs(fullFilesPath);
      if (ofs.is_open()) {
        ofs << "// Arquivo gerado automaticamente\n";
        ofs.close();
      } else {
        std::cerr << "Erro ao criar os arquivos: " << fullFilesPath << "\n";
      }
    }
  }
}
