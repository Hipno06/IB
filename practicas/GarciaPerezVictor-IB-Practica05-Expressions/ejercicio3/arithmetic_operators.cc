/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @arithmetic_operators.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 25 2024
  * @brief El programa pide al usuario dos números y devuelve esos números operados usando los operadores aritméticos y de comparación.
  * @bug There are no known bugs
  */

#include <iostream>
int main(){
  int numero1{0}, numero2{0}; // creamos dos variables de tipo int
  std::cout << "Inserte dos números: "; // pedimos al usuario que ingrese dos números
  std::cin >> numero1 >> numero2; // asignamos el valor de los números a las variables 
  // operadores aritméticos
  std::cout << numero1 << " + " << numero2 << " = " << numero1 + numero2 << std::endl;
  std::cout << numero1 << " - " << numero2 << " = " << numero1 - numero2 << std::endl;
  std::cout << numero1 << " * " << numero2 << " = " << numero1 * numero2 << std::endl;
  std::cout << numero1 << " / " << numero2 << " = " << numero1 / numero2 << std::endl;
  std::cout << numero1 << " % " << numero2 << " = " << numero1 % numero2 << std::endl;
  // operadores de comparación
  std::cout << numero1 << " < " << numero2 << " = " << (numero1 < numero2) << std::endl;
  std::cout << numero1 << " > " << numero2 << " = " << (numero1 > numero2) << std::endl;
  std::cout << numero1 << " <= " << numero2 << " = " << (numero1 <= numero2) << std::endl;
  std::cout << numero1 << " >= " << numero2 << " = " << (numero1 >= numero2) << std::endl;
  std::cout << numero1 << " == " << numero2 << " = " << (numero1 == numero2) << std::endl;
  std::cout << numero1 << " != " << numero2 << " = " << (numero1 != numero2) << std::endl;
  return 0;
}

