#pragma once
#include <nlohmann/json.hpp>
#include <string>

void createFiles(const nlohmann::json &templateData,
                 const std::string &projectName);
