#include <string>
#include <iostream>
using namespace std;

void reverseString(string str) {
  string reversedString = "";
  for (int i = str.size() - 1; i > 0; i -= 1 ) {
    reversedString += str[i];
  }
  std:: cout << "\nReversed String: " << reversedString << "\n\n";
}

bool palindrome(string str) {
  string reversedString = "";
  str[0] = tolower(str[0]);

  for (int i = str.size() - 1; i >= 0; i--){
    reversedString += str[i];
  }

  if (reversedString == str) {
    std:: cout <<  reversedString  << "\tTrue\n\n";
    return true;
  }

  std:: cout << reversedString  << "\tFalse\n\n";
  return false;
}

int main() {
  reverseString("Parabola");
  palindrome("Parabola");
  palindrome("Mom");
}