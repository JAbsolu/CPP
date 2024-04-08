#include <iostream>
#include <string>
using namespace std;


void pointers(int a){
  (a)++;
  int num = 1;
  int *numPointer = &num;
  cout << "This is the pointer for the number: " << a << " " << &a << "\nThis is the pointer for the number: " << num << " " << numPointer << endl;
}

int main() {
  int a = 10;
  pointers(a);
}

