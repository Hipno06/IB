/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @random_numbers.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Nov 15 2024
  * @brief toma como entrada dos números naturales n y m tales que 
  * n < m y genere un número aleatorio real r en el intervalo [n, m].
  * @bug There are no known bugs
  */

#include <iostream>
#include <cstdlib>
#include "random_numbers.h"

int main(int argc, char* argv[]) {
  if (argc != 3) {
    return 1;
  }
  double min = std::atof(argv[1]);
  double max = std::atof(argv[2]);
  Random_number(min, max);
  return 0;
}
