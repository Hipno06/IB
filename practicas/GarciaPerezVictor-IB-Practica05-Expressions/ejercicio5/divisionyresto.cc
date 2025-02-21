/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @divisionyresto.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 18 2024
  * @brief El programa pregunta con un input dos números al usuario, devuelve la
  * división y el resto de esta.
  * @bug There are no known bugs
  */

#include <iostream>
int main(){
  int numero1{0}, numero2{0}; //creamos dos variables de tipo int
  std::cin >> numero1 >> numero2; //asignamos el valor del input
  if (numero2 == 0) {
    std::cout << "No se puede dividir entre 0 trivialmente.";
  } else if (numero2 < 0) {
    std::cout << "Solo se aceptan números naturales.";
  } else {
    std::cout << (numero1 / numero2) << " " << (numero1 % numero2) << std::endl;
  }
  return 0;
}

