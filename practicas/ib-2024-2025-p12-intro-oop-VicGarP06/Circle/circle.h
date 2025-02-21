/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @circle.h
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date dic 13, 2024
  * @brief Una clase que permita representar círculos utilizando como atributos el
centro, el radio y el color del círculo.
  * @bug There are no known bugs
*/

#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "../Point2D/src/Point2D.h"

enum Color {
  blue,
  red,
  yellow,
  green,
  orange,
  violet
}

class Circle {
  public:
    // Constructor
    Circle(double radius, Color color, double x, double y);

    // Getters
    double getRadius();
    std::pair<double, double> getCentre();
    Color getColor();

    // Setters
    void setRadius(double radius);
    void setCentre(double x, double y);
    void setColor(Color color);

  private:
    Color color_{blue};
    double radius_{0.0};
    std::pair<double, double> centre_{0, 0};

    // Methods
    double area();
    double perimeter();
    bool isInside(const Point2D&);
    void print() const;
}

#endif
