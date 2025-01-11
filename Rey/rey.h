#ifndef REY_H
#define REY_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

class Rey {
  public:
    Rey() {
      nombre_ = "";
      comienzo_ = 0;
      fin_ = 0;
    }
    Rey(const std::string& nombre, const int& comienzo, const int& fin) {
      nombre_ = nombre;
      comienzo_ = comienzo;
      fin_ = fin;
    }
    ~Rey() {}
    std::string get_nombre() {
      return nombre_;
    }
    int get_comienzo() {
      return comienzo_;
    }
    int get_fin() {
      return fin_;
    }
    void set_nombre(const std::string& nombre) {
      nombre_ = nombre;
    }
    void set_comienzo(const int& comienzo) {
      comienzo_ = comienzo;
    }
    void set_fin(const int& fin) {
      fin_ = fin;
    }
    int duracion();
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
    std::string nombre_;
    int comienzo_;
    int fin_;
};

void ReyEnVector(const Rey& rey);

#endif
