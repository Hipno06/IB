/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @areayperimetro.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 25 2024
  * @brief El programa imprime en pantalla la tabla de la verdad de los operadores lógicos de C++.
  * @bug There are no known bugs
  */

#include <iostream>

bool if_then(bool valor1, bool valor2) {
  bool resultado{0};
  if (valor1 == 1) {
    resultado = (valor2 == 1);
  }
  else {
    resultado = 1;
  }
  return resultado;
}

bool siysolosi(bool valor1, bool valor2) {
  bool resultado{0};
  if (valor1 == valor2) {
    resultado = 1;
  }
  else {
    resultado = 0;
  }
  return resultado;
}

int main(){
  bool A{0}, B{0}; //creamos dos variables de tipo bool
  bool ifA_thenB{0}, ifB_thenA{0}, sii{0};
  std::cout << "| A | B | A∧B | A∨B | A∆B | A=B | A→B | A←B | A↔B |" << std::endl;
  for (int i{0}; i<2; i++) {
    for (int j{0}; j<2; j++) {
      ifA_thenB = if_then(A, B);
      ifB_thenA = if_then(B, A);
      sii = siysolosi(A, B);
      std::cout << "| " << A << " ";
      std::cout << "| " << B << " ";
      std::cout << "|  " << (A && B) << "  "; 
      std::cout << "|  " << (A || B) << "  "; 
      std::cout << "|  " << (A != B) << "  "; 
      std::cout << "|  " << (!(A != B)) << "  "; 
      std::cout << "|  " << ifA_thenB << "  "; 
      std::cout << "|  " << ifB_thenA << "  "; 
      std::cout << "|  " << sii << "  |" << std::endl;
      B = !B;
    }
    A = !A;
  }
  return 0;
}

