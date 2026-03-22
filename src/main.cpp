#include "../include/createProject.hpp"
#include "../include/userInput.hpp"
#include <string>

int main(int agrc, char *agrv[]) {
  std::string projectName = userInput(agrc, agrv);
  createProject(projectName);
  return 0;
}
