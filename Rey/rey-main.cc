#include "rey.h"

int main(int argc, Rey argv[]) {
  for (size_t i{1}; i <= (argc - 1); i++) {
    ReyEnVector(argv[i]);
  }

  return 0;
}