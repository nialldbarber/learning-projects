#include <iostream>
#include <string>
#include <sstream>

// float divide(int first, int second) {}
// int mulitply(int first, int second) {}
// int add(int first, int second) {}
// int subtract(int first, int second) {}

// using std::string;
using namespace std;

int main() {
  std::cout << "Enter a sum: ";

  string input;
  getline(cin, input);

  string operators[] = {"+", "-", "*", "/"};

  // search for operator in string
  // if not in string, returns number greater than string length
  // can also use std::string::npos
  for(auto op : operators) {
    std::size_t found = input.find(op);

    if(found != std::string::npos) {
      std::cout << op << ": " << input.find(op) << std::endl;
      // split string at operator
      // get first and second numbers
      auto start = 0;
      auto end = found;
      std::cout << input.substr(start, end - start) << std::endl;
      std::cout << input.substr(end + found.length(), input.length()) << std::endl;
    }
  }

  return 0;
}