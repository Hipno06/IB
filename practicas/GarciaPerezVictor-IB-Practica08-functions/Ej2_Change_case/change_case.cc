/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @function-example.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Nov 15 2024
  * @brief toma como entrada una cadena de caracteres sin
  * espacios e imprime como salida la misma cadena convirtiendo
  * los caracteres que sean letras mayúsculas por minúsculas y 
  * viceversa. Los caracteres que no sean letras mayúsculas ni
  * minúsculas deberán permanecer inalterados.
  * @bug There are no known bugs
  */

#include "change_case.h"

void Mayusc_minusc(const std::string& texto) {
  std::string cadena = texto;
  for (char& letra : cadena) {
    if (std::isupper(letra)) {
      letra = std::tolower(letra);
    } else if (std::islower(letra)) {
      letra = std::toupper(letra);
    }
  }
  std::cout << cadena << std::endl;;
}
