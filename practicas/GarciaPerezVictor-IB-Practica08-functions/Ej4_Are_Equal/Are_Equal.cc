/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @Are_Equal.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Nov 15 2024
  * @brief Desarrolle a continuación una función cuya definición
  * sea: bool AreEqual(const double number1, const double number2,
  * const double epsilon = 1e-7); que devuelva true o false dependiendo
  * de si los números que se le pasan como parámetro son
  * aproximadamente iguales o no.
  * @bug There are no known bugs
  */

#include <cmath>
#include "Are_Equal.h"

bool AreEqual(const double numero_1, const double numero_2, const double epsilon) {
  return std::abs(numero_1 - numero_2) < epsilon;
}