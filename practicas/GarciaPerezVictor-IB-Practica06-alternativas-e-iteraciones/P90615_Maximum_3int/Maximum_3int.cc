/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @uppercase_lowercase.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 31 2024
  * @brief Print a line with the maximum of the three numbers.
  * @bug There are no known bugs
  */

#include <iostream>

int main(){
  int numero1{0}, numero2{0}, numero3{0}, max{0};
  std::cin >> numero1 >> numero2 >> numero3;
  if (numero1 > numero2) {
    if (numero1 > numero3) {
      max = numero1;
    } else {
      max = numero3;
    }
  } 
  else {
    if (numero2 > numero3) {
      max = numero2;
    } else {
      max = numero3;
    }
  }
  std::cout << max << std::endl;
  return 0;
}

