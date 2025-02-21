/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @main.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date dic 13, 2024
  * @brief Una clase que permita representar y gestionar fechas.
  * @bug There are no known bugs
*/

#include "date.h"
#include <iostream>

int main() {
    try {
        Fecha fecha1(29, 2, 2020);  // Año bisiesto
        Fecha fecha2(31, 4, 2021);  // Fecha inválida

        fecha1.mostrar();
        fecha2.mostrar();
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    Fecha fecha3(15, 8, 2021);
    fecha3.mostrar();

    // Leer fecha del usuario
    int d, m, a;
    std::cout << "Introduce una fecha (dd mm aaaa): ";
    std::cin >> d >> m >> a;

    try {
        Fecha fechaUsuario(d, m, a);
        fechaUsuario.mostrar();
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
