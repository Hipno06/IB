/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @Dulcinea.cc
  * @author Víctor García Pérez alu0101743387@ull.edu.es
  * @date dic 05, 2024
  * @brief El programa cuenta cada vez que se dice Dulcinea
  * @bug There are no known bugs
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

void Dulcinea(std::ifstream& file) {
  int counter{0};
  std::string word;
  while (file >> word) {
    if (word == "Dulcinea") {
      counter++;
    }
  }
  std::cout << "Recuento de la palabra Dulcinea en el texto: " << counter << "\n";
}

int main(int argc, char* argv[]) {

  if (argc != 2) {
    std::cerr << "Error\n";
    std::cerr << "Usage: " << argv[0] << " <file>\n";
    return 1;
  }

  std::ifstream file(argv[1]);
  Dulcinea(file);

  return 0;
}
