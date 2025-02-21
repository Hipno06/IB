#include <iostream>
#include <cmath>

void Max4(int a, int b, int c, int d){
  int max{0};
  if ((a >= b) && (a >= c) && (a >= d)) {
    max = a;
  } else if ((b >= a) && (b >= c) && (b >= d)) {
    max = b;
  } else if ((c >= a) && (c >= b) && (c >= d)) {
    max = c;
  } else if ((d >= a) && (d >= b) && (d >= c)) {
    max = d;
  }
  std::cout << max << std::endl;
}

int main() {
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  Max4(a, b, c, d);
}
