/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @binary-to-decimal.cc.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 5 2024
  * @brief un programa que convierta números binarios en decimal.
  * @bug There are no known bugs
*/

#include <iostream>
#include <cmath>

void BintoDec(int numero) {
  int resultado{0}, exponente{0};
  while (numero != 0) {
    if ((numero % 10) != 0 && (numero % 10) != 1) {
      break;
    } else if (numero % 10 == 1) {
      resultado += std::pow(2, exponente);
    }
    exponente++;
    numero /= 10;
  }  
  if ((numero % 10) != 0 && (numero % 10) != 1) {
    std::cout << "Wrong Input" << std::endl;
  } else {
    std::cout << resultado << std::endl;
  }
}

int main() {
  int numero{0};
  std::cin >> numero;
  BintoDec(numero);
  return 0;
}
