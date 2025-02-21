#include "triangle_area.h"
#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
  if (argc != 4) {
    return 1;
  }

  double a = std::atof(argv[1]);
  double b = std::atof(argv[2]);
  double c = std::atof(argv[3]);

  if (!TrianguloValido(a, b, c)) {
    std::cerr << "No es un triángulo válido." << std::endl;
     return 1;
  }

  double area = Area(a, b, c);
  std::cout << area << std::endl;

  return 0;
}