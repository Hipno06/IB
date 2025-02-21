/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @jubilacion.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 18 2024
  * @brief El programa pregunta con un input la edad del usuario e imprime el número de años restantes para que pueda jubilarse.
  * @bug There are no known bugs
  */

#include <iostream>
int main(){
  int edad; //creamos una variable de tipo int
  std::cout << "¿Cuántos años tienes? "; //preguntamos cuánto vale el lado
  std::cin >> edad; //asignamos el valor del input
  if (edad>=65){
    std::cout << "Ya te puedes jubilar." << std::endl; //en caso de tener 65 o más años, imprimimos que ya se puede jubilar 
  }
  else{
    std::cout << "Te quedan " << 65-edad << " años para jubilarte." << std::endl; //en caso de tener menos de 65 años, imprimimos los años que le quedan oara poder jubilarse
    }
  return 0;
}

