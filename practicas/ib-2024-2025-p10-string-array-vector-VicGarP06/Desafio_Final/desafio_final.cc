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

void DesafioFinal() {
    std::vector<int> polinomio1, polinomio2, resultado;

    for (size_t i{0}; i < 3; i++) {
        polinomio1.emplace_back(stoi(argv[i]));
    }

    for (size_t j{3}; j < 6; j++) {
        polinomio2.emplace_back(stoi(argv[j]));
    }

    for (size_t k{0}; k < 3; k++) {
        resultado[k] = polinomio1[k] + polinomio2[k];
    }

    std::cout << "[" << resultado[0] << ", "  << resultado[1] << ", " << resultado[2] << "]\n";
}
