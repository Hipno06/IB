#include <iostream>

void print(int s, char c, int n) {
  for(int i{s}; i > 0; i--) {
    std::cout << " ";
  }
  for(int j{n}; j > 0; j--) {
    std::cout << c;
  }
  std::cout << std::endl;
}

int main() {
  int s, n;
  char c;
  std::cin >> s >> c >> n;
  print(s, c, n);
} 
