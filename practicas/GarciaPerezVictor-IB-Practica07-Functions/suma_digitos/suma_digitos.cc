/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @suma_digitos.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 5 2024
  * @brief un programa que lea un número natural e imprima como salida la suma de los dígitos del número en cuestión.
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
  std::cout << "The sum of the digits of " << numero << " is " << suma_digitos(numero) << "." << std::endl;
}
