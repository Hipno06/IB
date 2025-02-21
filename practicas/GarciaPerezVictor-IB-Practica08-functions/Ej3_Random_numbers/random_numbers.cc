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

#include <ctime>
#include <cstdlib>
#include "random_numbers.h"

void Random_number(int min, int max) {
  int random_num{0};
  std::srand(std::time(0));
  random_num = std::rand() % (max - min + 1) + min;
  std::cout << random_num << std::endl;;
}
