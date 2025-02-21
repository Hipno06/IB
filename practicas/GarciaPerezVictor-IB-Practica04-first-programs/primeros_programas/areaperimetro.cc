/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @areayperimetro.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 18 2024
  * @brief El programa pregunta con un input la longitud del lado del cuadrado e imprime el área y el perímetro de este.
  * @bug There are no known bugs
  */

#include <iostream>
int main(){
  int lado; //creamos una variable de tipo int
  std::cout << "¿Cuánto mide el lado del cuadrado? "; //preguntamos cuánto vale el lado
  std::cin >> lado; //asignamos el valor del input
  std::cout << "El área del cuadrado es de " << lado*lado << " y su perímetro es " << 4*lado << std::endl; //imprimimos el área y el perímetro del cuadrado dado su lado
  return 0;
}

