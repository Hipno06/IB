/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @multiplicacion.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 18 2024
  * @brief El programa pregunta con dos inputs al usuario los números que quiere multiplicar e imprime el valor de su producto.
  * @bug There are no known bugs
  */

#include <iostream>
int main(){
  int num1,num2; //creamos dos variables de tipo int
  std::cout << "¿Qué número quieres multiplicar? "; //preguntamos al usuario cuál es el primer número
  std::cin >> num1; //asignamos el valor del input
  std::cout << "¿Qué número quieres multiplicar? "; //preguntamos al usuario cuál es el segundo número
  std::cin >> num2; //asignamos el valor del input
  std::cout << num1 << "·" << num2 << " = " << num1*num2 << std::endl; //imprimimos el producto de los números
  return 0;
}

