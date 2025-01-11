#include "rey.h"

int Rey::duracion() {
  int duracion;
  duracion = fin_ - comienzo_;
  return duracion;
}

void ReyEnVector(const Rey& rey) {
  std::vector<Rey> reyes;
  reyes.emplace_back(rey);
  std::sort(reyes.begin(), reyes.end());
  for (Rey rey : reyes) {
    std::cout << rey;
  }
}