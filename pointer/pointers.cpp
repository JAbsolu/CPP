#include <iostream>
#include <string>
using namespace std;


void pointers(int a){
  (a)++;
  int num = 1;
  int *numPointer = &num;
  cout << "\nThis is the pointer for the number: " << a << " " << &a;
  cout <<  "\nThis is the pointer for the number: " << num << " " << numPointer << endl << endl; 
}

void printPointer(string str) {
  char firstChar = str[0];
  char *fCPointer = &firstChar;
  string *stringPointer = &str;

  cout <<  "The string is: " << str << endl;
  cout << "The first character in the string is: " << firstChar << endl;
  cout << "The first character's pointer is: " << fCPointer << endl;
  cout << "The string's pointer is: " << stringPointer << endl << endl;
}

int main() {
  int a = 10;
  pointers(a);
  printPointer("John");
}

