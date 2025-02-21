/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @leap-year.cc.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 5 2024
  * @brief un programa que indique si un año es o no bisiesto Un año bisiesto tiene 366 días. Después de la reforma gregoriana, los años bisiestos son aquellos múltiplos de cuatro que no terminan con dos ceros, y también los años que terminan con dos ceros tales que, después de eliminar estos dos ceros, son divisibles por cuatro. Así, 1800 y 1900, a pesar de ser múltiplos de cuatro, no fueron años bisiestos; por el contrario, 2000 fue un año bisiesto.
  * @bug There are no known bugs
*/

#include <iostream>
#include <cmath>

void Bisiesto(int year) {
  bool bisiesto{0};
  if (year % 10 == 0 && year % 100 == 0) {
    if ((year / 100) % 4 == 0) {
      bisiesto = 1;
    }
  } else if (year % 4 == 0) {
    bisiesto = 1;
  }
  if (bisiesto) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
}

int main() {
  int numero{0};
  std::cin >> numero;
  Bisiesto(numero);
  return 0;
}
