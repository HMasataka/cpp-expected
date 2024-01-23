#include <expected>
#include <iomanip>
#include <iostream>
#include <string>

// 整数除算
std::expected<int, std::string> idiv(int a, int b) {
  if (b == 0) {
    return std::unexpected{"divide by zero"};
  }
  if (a % b != 0) {
    return std::unexpected{"out of domain"};
  }
  return a / b;
}

void dump_result(const std::expected<int, std::string> &v) {
  if (v) {
    std::cout << *v << std::endl;
  } else {
    std::cout << std::quoted(v.error()) << std::endl;
  }
}

int main() {
  dump_result(idiv(10, 2));
  dump_result(idiv(10, 3));
  dump_result(idiv(10, 0));
}
