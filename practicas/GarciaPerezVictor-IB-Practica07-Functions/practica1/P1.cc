/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @P1.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 31 2024
  * @brief 
  * @bug There are no known bugs
  */

#include <iostream> 

int suma_digitos(int numero) {
int suma{0};
  while (numero != 0) {
    suma += (numero % 10);
    numero /= 10;
  }
  return suma;
}
  
int main() {
  int numero{0};
  std::cin >> numero;
  std::cout << suma_digitos(numero) << std::endl;
}

