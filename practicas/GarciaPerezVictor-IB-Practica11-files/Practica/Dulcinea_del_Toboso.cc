/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @Dulcinea_del_Toboso.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date dic 05, 2024
  * @brief El programa cambia cada línea donde se dice Dulcinea del Toboso
  * @bug There are no known bugs
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

void DelToboso(std::ifstream& file) {
  std::ofstream edited("DulcineaDelToboso.txt");
  if (!edited) {
    std::cerr << "Error creating the edited file\n";
    return;
  }

}
