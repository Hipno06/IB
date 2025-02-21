/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @areayperimetro.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 25 2024
  * @brief El programa recibe una letra mayúscula y devuelve esa letra en minúscula.
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>
int main(){
  char mayusc; //creamos una variable de tipo char
  std::cout << "Introduzca una letra mayúscula "; //pedimos que se introduzca una letra mayúscula
  std::cin >> mayusc; //asignamos el valor del input
  std::cout << static_cast<char>(static_cast<int>(mayusc)+32) << std::endl; //imprimimos el área y el perímetro del cuadrado dado su lado
  return 0;
}

