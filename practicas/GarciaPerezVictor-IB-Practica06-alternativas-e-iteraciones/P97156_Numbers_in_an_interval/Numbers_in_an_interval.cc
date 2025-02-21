/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @Add_one_second.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 31 2024
  * @brief Print a line with a,a+1,…,b−1,b. Separate the numbers with commas.
  * @bug There are no known bugs
  */

#include <iostream>

int main(){
  int numero1{0}, numero2{0};
  std::cin >> numero1 >> numero2;
  if (numero2 < numero1) {
    std::cout << "" << std::endl;
  } else {
    for (int i{numero1}; i < numero2; i++) {
      std::cout << i << ',';
    }
    std::cout << numero2 << std::endl;
  }
  return 0;
}