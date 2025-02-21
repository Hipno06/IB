/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @P2.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 31 2024
  * @brief 
  * @bug There are no known bugs
  */

#include <iostream>

void sumatorios(int n){
  int sumatorio{0};
  if (n <= 0) {
    break;
  } else {
    for (int i{n}; i >= 0; i--) {
      for (int j{0}; j <= i; j++) {
        sumatorio += j;
      }
    }
  }
  std::cout << sumatorio << std::endl;
}

int main(){

  return 0;
}

