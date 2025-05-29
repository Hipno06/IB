#include "rey.h"

int Rey::duracion() { return (fin_ - comienzo_); }

void OrdenarReyesEnVector(std::vector<Rey> reyes) {
  std::sort(reyes.begin(), reyes.end());
  for (Rey rey : reyes) {
    std::cout << rey;
  }
}