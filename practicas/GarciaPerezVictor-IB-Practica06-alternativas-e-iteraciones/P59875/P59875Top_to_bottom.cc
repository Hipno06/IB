/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @Top_to_bottom.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 31 2024
  * @brief Print all integer numbers between x and y (or between y and x), in decreasing order.
  * @bug There are no known bugs
  */

#include <iostream>

int main(){
  int numero1{0}, numero2{0};
  std::cin >> numero1 >> numero2;
  if (numero1 > numero2) {
    for (int i{numero1}; i >= numero2; i--) {
      std::cout << i << std::endl;
    }
  } else {
    for (int i{numero2}; i >= numero1; i--) {
       std::cout << i << std::endl;
  }
  return 0;
 }
}
