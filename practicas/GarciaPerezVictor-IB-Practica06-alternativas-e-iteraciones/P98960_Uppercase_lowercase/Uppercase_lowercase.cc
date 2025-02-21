/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @uppercase_lowercase.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 31 2024
  * @brief Print a line with the given letter in lowercase if it was uppercase, or in uppercase if it was lowercase.
  * @bug There are no known bugs
  */

#include <iostream>

int main(){
  char letra;
  std::cin >> letra;
  if (letra <= 90) {
  std::cout << static_cast<char>(letra+32) << std::endl;
  } else { 
  std::cout << static_cast<char>(letra-32) << std::endl;
  return 0;
  }
}
