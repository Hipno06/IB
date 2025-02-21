/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @segundos.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date Oct 25 2024
  * @bug There are no known bugs
  */

#include <iostream>
int main(){
  int year{0}, days{0}, hours{0}, minutes{0}, seconds{0};
  std::cin >> year >> days >> hours >> minutes >> seconds;
  year = year*365*24*3600;
  days = days*24*3600;
  hours = hours*3600;
  minutes = minutes*60;
  std::cout << (year + days + hours + minutes + seconds);
  return 0;
}
