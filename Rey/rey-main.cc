#include "rey.h"

int main(int argc, char* argv[]) {
  // Usage
  if ((argc - 1) % 3 != 0) {
    std::cerr << "Error: Número de argumentos inválidos\n";
    std::cerr << "Usage: " << argv[0] << " <nombre> <comienzo> <fin>...\n";
  }
  size_t i{1}; 
  std::vector<Rey> reyes;

  // Guardar reyes en vector
  while (i <= (argc - 1)) {
    std::string nombre{argv[i]};
    int comienzo{std::atoi(argv[i + 1])}, fin{std::atoi(argv[i + 2])};
    if (comienzo <= fin) {
      Rey rey(nombre, comienzo, fin);
      reyes.emplace_back(rey);
    } else {
      std::cout << nombre
                << " no puede finalizar su reinado antes de comenzarlo\n";
    }
    i += 3;
  }
  std::cout << "\n";  // Separar los reyes no válidos introducidos
  // Ordenar reyes e imprimir
  OrdenarReyesEnVector(reyes);

  return 0;
}