#ifndef REY_H
#define REY_H

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class Rey {
 public:
  // Constructor por defecto
  Rey() {}
  // Constructor por parámetros
  Rey(const std::string& nombre, const int& comienzo, const int& fin) {
    nombre_ = nombre;
    comienzo_ = comienzo;
    fin_ = fin;
  }
  // Destructor
  ~Rey() {}
  // Getters
  std::string get_nombre() { return nombre_; }
  int get_comienzo() { return comienzo_; }
  int get_fin() { return fin_; }
  // Setters
  void set_nombre(const std::string& nombre) { nombre_ = nombre; }
  void set_comienzo(const int& comienzo) { comienzo_ = comienzo; }
  void set_fin(const int& fin) { fin_ = fin; }
  // Métodos
  int duracion();
  // Sobrecarga de operadores
  bool operator<(const Rey& other) {
    bool resultado;
    resultado = (comienzo_ < other.comienzo_);
    return resultado;
  }

  friend std::ostream& operator<<(std::ostream& os, Rey& other) {
    os << other.nombre_ << " " << other.comienzo_ << " " << other.fin_ << "\n";
    return os;
  }

  friend std::istream& operator>>(std::istream& is, Rey& other) {
    std::cout << "Nombre: ";
    is >> other.nombre_;
    std::cout << "Comienzo: ";
    is >> other.comienzo_;
    std::cout << "Fin: ";
    is >> other.fin_;

    return is;
  }

 private:
  // Atributos
  std::string nombre_ = "";
  int comienzo_ = 0;
  int fin_ = 0;
};

void ReyEnVector(const Rey& rey);

#endif
