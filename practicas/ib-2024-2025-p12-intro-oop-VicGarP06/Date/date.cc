/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @date.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date dic 13, 2024
  * @brief Una clase que permita representar y gestionar fechas.
  * @bug There are no known bugs
*/

#include "date.h"
#include <iostream>
#include <stdexcept>

Fecha::Fecha(int d, int m, int a) {
    if (!esFechaValida(d, m, a)) {
        throw std::invalid_argument("Fecha no válida");
    }
    dia = d;
    mes = m;
    anio = a;
}

bool Fecha::esBisiesto(int anio) const {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

bool Fecha::esFechaValida(int d, int m, int a) const {
    if (m < 1 || m > 12) return false;
    if (d < 1 || d > 31) return false;
    if (m == 2) {
        if (esBisiesto(a)) {
            return d <= 29;
        } else {
            return d <= 28;
        }
    }
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        return d <= 30;
    }
    return true;
}

void Fecha::mostrar() const {
    std::cout << dia << "/" << mes << "/" << anio << std::endl;
}

int Fecha::getDia() const { return dia; }
int Fecha::getMes() const { return mes; }
int Fecha::getAnio() const { return anio; }

void Fecha::setDia(int d) {
    if (esFechaValida(d, mes, anio)) {
        dia = d;
    } else {
        throw std::invalid_argument("Día no válido");
    }
}

void Fecha::setMes(int m) {
    if (esFechaValida(dia, m, anio)) {
        mes = m;
    } else {
        throw std::invalid_argument("Mes no válido");
    }
}

void Fecha::setAnio(int a) {
    if (esFechaValida(dia, mes, a)) {
        anio = a;
    } else {
        throw std::invalid_argument("Año no válido");
    }
}
