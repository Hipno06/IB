/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @Complex.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date dic 13, 2024
  * @brief Una clase que permita representar y operar con números complejos.
  * @bug There are no known bugs
*/

#include "Complex.h"

// Implementación de operadores sobrecargados
Complejo Complejo::operator+(const Complejo& other) const {
  return Complejo(real_ + other.real_, imaginario_ + other.imaginario_);
}

Complejo Complejo::operator-(const Complejo& other) const {
  return Complejo(real_ - other.real_, imaginario_ - other.imaginario_);
}

// Implementación de operadores de inserción y extracción
std::ostream& operator<<(std::ostream& os, const Complejo& c) {
  os << complex.real_ << " + " << complex.imaginario_ << "i";
  return os;
}

std::istream& operator>>(std::istream& is, Complejo& c) {
  is >> complex.real_ >> complex.imaginario_;
  return is;
}

// Métodos para obtener las partes real e imaginaria
double Complejo::getReal() const {
  return real_;
}

double Complejo::getImaginario() const {
  return imaginario_;
}

