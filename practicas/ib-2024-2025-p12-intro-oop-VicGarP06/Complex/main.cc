/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @main.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date dic 13, 2024
  * @brief Una clase que permita representar y operar con números complejos.
  * @bug There are no known bugs
*/

#include "Complex.h"

int main() {
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado;

  // Suma de números complejos
  resultado = complejo1 + complejo2;
  std::cout << "Suma: " << resultado << std::endl;

  // Resta de números complejos
  resultado = complejo1 - complejo2;
  std::cout << "Resta: " << resultado << std::endl;

  return 0;
}
