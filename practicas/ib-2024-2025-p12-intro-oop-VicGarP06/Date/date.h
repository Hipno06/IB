/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @date.h
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date dic 13, 2024
  * @brief Una clase que permita representar y gestionar fechas.
  * @bug There are no known bugs
*/

#ifndef FECHA_H
#define FECHA_H

#include <iostream>
#include <string>

class Fecha {
private:
    int dia;
    int mes;
    int anio;

    bool esBisiesto(int anio) const;
    bool esFechaValida(int dia, int mes, int anio) const;

public:
    Fecha(int d, int m, int a);

    void mostrar() const;
    int getDia() const;
    int getMes() const;
    int getAnio() const;

    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);
};

#endif 
