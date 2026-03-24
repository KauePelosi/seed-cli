#pragma once
#include <nlohmann/json.hpp>
#include <nlohmann/json_fwd.hpp>
#include <string>

void createDirectories(const nlohmann::json &templateData,
                       const std::string &projectName);
