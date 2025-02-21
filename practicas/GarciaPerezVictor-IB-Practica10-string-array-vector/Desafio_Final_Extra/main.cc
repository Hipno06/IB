/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @main.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date nov 29, 2024
  * @brief Utilizando strings, arrays o vectores, implementa un programa que tome dos
polinomios representados como vectores de coeficientes y calcule su suma.
  * @bug There are no known bugs
*/
#include "desafio_final.h"

int main(int argc, char* argv[]) {
  if ((argc - 1) % 2 != 0) {
    std::cerr << "Error\n";
    std::cerr << "Usage: " << argv[0] << " <p1> <p2> ... <pn> <q1> <q2> ... <qn>" << std::endl;
    std::cerr << "* Polynomials must have equal length\n";
    std::cerr << "** First polynomial will have the first half of arguments as coefficients"
              << " while the Second polynomial will have the second half.\n";
    return 1; }

    std::vector<int> polinomio1, polinomio2;
    size_t mitad_argumentos{(argc - 1)/2};

/*
    for (size_t i{1}; i <= mitad_argumentos; i++) {
      polinomio1.emplace_back(std::stoi(argv[i]));
    }
    for (size_t j{mitad_argumentos}; j <= argc; j++) {
      polinomio2.emplace_back(std::stoi(argv[j]));
    }
*/

  try {
    for (size_t i = 1; i <= mitad_argumentos; i++) {
      if (!isdigit(std::stoi(argv[i]))) {
        throw std::invalid_argument("Argumento no válido");
      }
      polinomio1.emplace_back(std::stoi(argv[i]));
    }
    for (size_t j = mitad_argumentos + 1; j < argc; j++) {
      if (!isdigit(std::stoi(argv[j]))) {
        throw std::invalid_argument("Argumento no válido");
      }
      polinomio2.emplace_back(std::stoi(argv[j]));
    }
  } catch (const std::invalid_argument& e) {
    std::cerr << "Error: " << e.what() << ". Asegúrate de que todos los argumentos son números enteros." << std::endl;
    return 1;
  } catch (const std::exception& e) {
    std::cerr << "Error inesperado: " << e.what() << std::endl;
    return 1;
  }

  DesafioFinal(polinomio1, polinomio2);
}
