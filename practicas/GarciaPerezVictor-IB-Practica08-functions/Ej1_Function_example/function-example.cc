/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @function-example.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Nov 10 2024
  * @brief realiza el cálculo de la siguiente función matemática de tres
  * variables: g(x,y,t) = √(2t-4)/(x²-y²)
  * @bug There are no known bugs
  */

#include <iostream>
#include <cmath>

void Funcion_g(double x, double y, double t) {
  double solucion{0};
  if (t < 2) {
    std::cerr << "Math Error" << std::endl;
    std::cerr << "La raíz negativa no pertenece al conjunto real." << std::endl;
  } else if (std::abs(x) == std::abs(y)) {
    std::cerr << "Math Error" << std::endl;
    std::cerr << "No es posible dividir entre 0." <<std::endl;
  } else {
    solucion += std::sqrt(2*t-4);
    solucion /= std::pow(x, 2) - std::pow(y, 2);
    std::cout << solucion << std::endl;
  }
}

int main(){
  double variable_x, variable_y, variable_t;
  std::cout << "Introduzca las variables x, y, t respectivamente: ";
  std::cin >> variable_x >> variable_y >> variable_t;
  Funcion_g(variable_x, variable_y, variable_t);
  return 0;
}
