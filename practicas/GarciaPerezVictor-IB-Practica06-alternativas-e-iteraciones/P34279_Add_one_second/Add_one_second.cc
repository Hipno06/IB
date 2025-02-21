/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @Add_one_second.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 31 2024
  * @brief Print the new clock time defined by h, m and s plus one second in the format “HH:MM:SS”.
  * @bug There are no known bugs
  */

#include <iostream>

int main(){
  int horas{0}, minutos{0}, segundos{0};
  std::cin >> horas >> minutos >> segundos;
  segundos += 1;
  if (segundos == 60) {
    segundos = 0;
    minutos += 1;
  }
  if (minutos == 60) {
    minutos = 0;
    horas += 1;  
  }
  if (horas == 24) {
    horas = 0;
  } 
  if (horas < 24 && minutos < 60 && segundos < 60) {
    if (horas < 10) {
      std::cout << '0' << horas << ":";
    } else {
      std::cout << horas << ":";    
    }
    if (minutos < 10) {
      std::cout << '0' << minutos << ":";
    } else {
      std::cout << minutos << ":";
    }
    if (segundos < 10) {
      std::cout << '0' << segundos << std::endl;
    } else {
      std::cout << segundos << std::endl;
    }
  }
  return 0;
}

