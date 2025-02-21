/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @main.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date nov 29, 2024
  * @brief Utilizando strings, arrays o vectores, implementa un programa que tome dos
polinomios representados como vectores de coeficientes y calcule su suma.
  * @bug There are no known bugs
*/

#include "desafio_final.h"


int main(int argc, char* argv[]) {
if (argc != 7) {
    std::cerr << "Error\n";
    return 1;
}
    DesafioFinal();
    return 0;
}
