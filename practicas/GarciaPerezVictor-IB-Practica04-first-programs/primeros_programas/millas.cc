/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @millas.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 18 2024
  * @brief El programa pregunta con un input la longitud en milla e imprime la misma longitud en kilómetros.
  * @bug There are no known bugs
  */

#include <iostream>
int main(){
  float ml; //creamos una variable de tipo float
  std::cout << "¿Cuánto mide en millas? "; //preguntamos cuánto vale la longitud
  std::cin >> ml; //asignamos el valor del input
  std::cout << ml << "ml son " << ml*1.609 << "km" << std::endl; //imprimimos la longitud en kilómetros
  return 0;
}

