/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @diviyresto.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 25 2024
  * @brief El programa.
  * @bug There are no known bugs
  */

#include <iostream>
int main(){
  int numero1{0}, numero2{0};
  std::cin >> numero1 >> numero2;
  if (numero2 <= 0) {
    std::cout << "Error";
  } else {
    std::cout << numero1/numero2 << " " << numero1%numero2;
  }
  return 0;
}
