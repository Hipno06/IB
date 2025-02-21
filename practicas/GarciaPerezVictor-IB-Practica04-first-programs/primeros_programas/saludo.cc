/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @saludo.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 18 2024
  * @brief El programa pregunta con un input el nombre del usuario e imprime un saludo personalizado (usando el nombre que insertó el usuario). 
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>
int main(){
  std::string nombre; //creamos una variable de tipo string
  std::cout << "¿Tu nombre? "; //preguntamos al usuario su nombre
  std::cin >> nombre; //asignamos la respuesta a la variable definida anteriormente
  std::cout << "Muy buenas, " << nombre << ", eres un gran programador." << std::endl; //saludamos al usuario usando el nombre que ha introducido
  return 0;
}
