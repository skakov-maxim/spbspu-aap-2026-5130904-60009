#include <iostream>
#include <limits>

int sign(int n)
{
  return (n > 0) - (n < 0);
}

int main()
{
  unsigned int cnt = 0;
  int n;
  std::cin >> n;
  int flag = sign(n);
  while (std::cin) {
    std::cin >> n;
    if (std::cin.eof()) {
      std::cerr << "Error" << '\n';
      return 1;
    }
    if (n == 0) {
      std::cout << cnt << '\n';
      return 0;
    }
    if (sign(n) != flag) {
      ++cnt;
      flag = sign(n);
    }
  }
}
