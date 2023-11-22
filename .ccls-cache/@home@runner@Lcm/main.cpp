#include <iostream>

int max(int a, int b) {
  if (a > b) {
    return a;
  }
  else {
    return b;
  }
  }

  int lcm(int a, int b) {
  int lcm = max(a, b);
  while (lcm % a != 0 || lcm % b != 0) {
    lcm++;
  }
    return lcm;
  }

int main() {
  int a,b;
  std::cout << "Number 1 = ";
  std::cin >> a;
  std::cout << "Number 2 = ";
  std::cin >> b;
  std::cout << "The LCM of " << a << " and " << b << " is " << lcm(a,b) << std::endl;
  
}