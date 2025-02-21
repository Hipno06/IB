/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @saludoyedad.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 18 2024
  * @brief El programa pregunta con un input el nombre del usuario y su edad, luego imprime un saludo personalizado en el que le dice al usuario su nombre y su edad. 
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>
int main(){
  std::string nombre; //creamos una variable de tipo string
  int edad; //creamos otra variable de tipo string
  std::cout << "¿Tu nombre? "; //preguntamos al usuario su nombre
  std::cin >> nombre; //asignamos la respuesta a la variable definida anteriormente
  std::cout << "¿Tu edad? "; //preguntamos al usuario su edad
  std::cin >> edad; //asignamos la respuesta a la variable definida anteriormente
  std::cout << "Hola, eres " << nombre << " y tienes " << edad << " años." << std::endl; //saludamos al usuario usando el nombre y la edad que ha introducido
  return 0;
}

