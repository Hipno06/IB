/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @Complex.h
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date dic 13, 2024
  * @brief Una clase que permita representar y operar con números complejos.
  * @bug There are no known bugs
*/

#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>

class Complejo {
private:
  double real_;
  double imaginario_;

public:
  Complejo(double real = 0, double imaginario = 0) : real_(real), imaginario_(imaginario) {}

  Complejo operator+(const Complejo& other) const;
  Complejo operator-(const Complejo& other) const;

  friend std::ostream& operator<<(std::ostream& os, const Complejo& complex);
  friend std::istream& operator>>(std::istream& is, Complejo& complex);

  // Methods
  double getReal() const;
  double getImaginario() const;
};

#endif
