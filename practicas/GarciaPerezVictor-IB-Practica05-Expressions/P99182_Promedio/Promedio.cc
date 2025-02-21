/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @Promedio.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 25 2024
  * @brief El programa recibe dos números enteros entre -1000 y 1000 e imprime
  * el promedio de estos.
  * @bug There are no known bugs
  */

#include <iostream>
int main(){
  float numero1{0}, numero2{0}, resultado{0.0};
  std::cin >> numero1 >> numero2;
if (((numero1 < -1000) || (numero2 < (-1000))) || ((numero1 > 1000) || (numero2
> 1000))) {
    std::cout << "Los números no pueden ser ni menores que -1000 ni mayores que"
" 1000";
  } else {
    resultado = (numero1 + numero2) / 2;
  }
  std::cout << resultado << std::endl;
}
