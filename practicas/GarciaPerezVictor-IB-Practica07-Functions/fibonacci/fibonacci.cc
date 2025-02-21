/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @fibonacci.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 5 2024
  * @brief un programa que imprima los N primeros términos de la Serie de Fibonacci.
  * @bug There are no known bugs
*/

#include <iostream>

int Fibonacci(int numero) {
  int resultado{0}, resultadoprev{0}, resultadoprev2{0};
  for (int i{0}; i < numero; i++) {
    if (i < 2) {
      resultado = i;
    } else {
      resultado = (resultadoprev + resultadoprev2);
    }
    if (i != numero) {
      std::cout << resultado << ' ';
    } else {
      std::cout << resultado << std::endl;
    }
    resultadoprev2 = resultadoprev;
    resultadoprev = resultado;
  }
  return 0;
}

int main() {
  int numero{0};
  std::cin >> numero;
  Fibonacci(numero);
}
