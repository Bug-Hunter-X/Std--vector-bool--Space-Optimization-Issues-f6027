#include <iostream>
#include <vector>

int main() {
  // Use std::vector<char> for better element access
  std::vector<char> vec;
  vec.push_back(1); // true
  vec.push_back(0); // false
  bool b = vec[0];
  bool c = vec[1];
  std::cout << "b: " << b << ", c: " << c << std::endl;
  return 0;
} 