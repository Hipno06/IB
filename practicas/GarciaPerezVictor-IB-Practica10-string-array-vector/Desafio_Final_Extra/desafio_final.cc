/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @desafio_final.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date nov 29, 2024
  * @brief Utilizando strings, arrays o vectores, implementa un programa que tome dos
polinomios representados como vectores de coeficientes y calcule su suma.
  * @bug There are no known bugs
*/

#include "desafio_final.h"

void DesafioFinal(const std::vector<int>& polinomio1, const std::vector<int>& polinomio2) {
  std::vector<int> result;

  for (size_t i{0}; i < polinomio1.size(); i++) {
    result.emplace_back(polinomio1[i] + polinomio2[i]);
  }

  size_t ultimo_coeficiente{result.size() - 2}, termino_indep{result.size() - 1};

  for (size_t j{0}; j < result.size(); j++) {
    if (j == termino_indep) {
      std::cout << result[j] << std::endl;
    } else if (j == ultimo_coeficiente) {
      std::cout << result[j] << "x + ";
    } else {
      std::cout << result[j] << "x^" << j << " ";
    }
/*
    switch (j) {
      case termino_indep:
        std::cout << result[j] << std::endl;
        break;
      case ultimo_coeficiente:
        std::cout << result[j] << "x + ";
        break;
      default:
        std::cout << result[j] << "x^" << j << " ";
        break;
    }
*/
  }
}
