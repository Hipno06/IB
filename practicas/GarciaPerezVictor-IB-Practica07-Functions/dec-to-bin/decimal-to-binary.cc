/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @decimal-to-binary.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 5 2024
  * @brief un programa que convierta números de decimal a binario.
  * @bug There are no known bugs
*/

#include <iostream>
#include <cmath>

void DectoBin(int numero) {
  int resultado{0}, exponente{0};
  while (numero != 0) {
    if (numero % 2 != 0) {
      resultado += std::pow(10, exponente);
    }
    exponente++;
    numero /= 2;
  }  
  std::cout << resultado << std::endl;
}

int main() {
  int numero{0};
  std::cin >> numero;
  DectoBin(numero);
  return 0;
}
