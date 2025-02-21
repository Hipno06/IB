/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @circle.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date dic 13, 2024
  * @brief Una clase que permita representar círculos utilizando como atributos el
centro, el radio y el color del círculo.
  * @bug There are no known bugs
*/

#include "circle.h"

// Constructor defined
Circle::Circle(double radius, Color color, double x, double y) : centre_(x, y), color_(color), radius_(radius) {}

// Getters defined
double Circle::getRadius() const {
  return radius_;
}

std::pair<double, double> Circle::getCentre() const {
  return centre_;
}

Color Circle::getColor() const {
  return color_;
}

// Setters defined
void Circle::setRadius(double radius) {
  radius_ = radius;
}

void Circle::setCentre(double x, double y) {
  centre_ = std::pair<double, double>(x, y);
}

void Circle::setColor(Color color) {
  color_ = color;
}

// Methods defined
double Circle::area() {
  return std::pow(radius_, 2) * 3.141592;
}

double Circle::perimeter() {
  return 2 * 3.141592 * radius_;
}

bool Circle::isInside() {
  return;
}

void Circle::print() {
  std::cout << "Centre: " << centre_ << "\n";
  std::cout << "Radius: " << radius_ << "\n";
  std::cout << "Area: " << std::pow(radius_, 2) * 3.141592 << "\n";
  std::cout << "Perimeter: " << 2 * 3.141592 * radius_ << "\n";
  std::cout << "Color: " << color_;
  std::cout << "Is inside?: ";
}
