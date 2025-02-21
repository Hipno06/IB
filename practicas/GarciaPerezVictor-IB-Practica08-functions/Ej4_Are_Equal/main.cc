#include "Are_Equal.h"
#include <iostream>

int main(int argc, char* argv[]) {
  if (argc != 3) {
      return 1;
  }
  double numero1 = std::atof(argv[1]);
  double numero2 = std::atof(argv[2]);
  std::cout << std::boolalpha;
  std::cout << "Numero 1: " << numero1 << std::endl;
  std::cout << "Numero 2: " << numero2 << std::endl;
  std::cout << "Igualdad: " << AreEqual(numero1, numero2) << std::endl;
  return 0;
} 