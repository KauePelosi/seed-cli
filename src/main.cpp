#include "../include/generateFromTemplate.hpp"
#include "../include/getUserInput.hpp"

int main(int agrc, char *agrv[]) {
  auto [projectLanguage, projectName] = getUserInput(agrc, agrv);
  generateFromTemplate(projectLanguage, projectName);
  return 0;
}
