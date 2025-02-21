#include "triangle_area.h"
#include <cmath>

bool TrianguloValido(double a, double b, double c) {
  return (a + b > c) && (a + c > b) && (b + c > a);
}

double Area(double a, double b, double c) {
  double s = (a + b + c) / 2.0;
  return std::sqrt(s * (s - a) * (s - b) * (s - c));
}
