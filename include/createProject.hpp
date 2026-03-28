#pragma once
#include <nlohmann/json.hpp>
#include <nlohmann/json_fwd.hpp>
#include <string>

void createProject(const nlohmann::json &templateData,
                   const std::string &projectName,
                   const std::string &projectLanguage);
