#include <iostream>
#include "externo.cpp"

extern "C" int funcionC();

int main() {
  funcionC();
  return 0;
}