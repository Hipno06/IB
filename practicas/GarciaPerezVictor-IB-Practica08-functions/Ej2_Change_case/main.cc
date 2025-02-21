#include <iostream>
#include <string>
#include "change_case.h"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Ingrese una cadena sin espacios" << std::endl;
    return 1;
  }
  std::string cadena_usuario = argv[1];
  Mayusc_minusc(cadena_usuario);
  return 0;
}