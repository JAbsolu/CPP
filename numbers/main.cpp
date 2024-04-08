#include <iostream>
using namespace std;

void add(int a, int b) 
{
  cout << a + b;
}

void multiply(int a, int b) 
{
  cout << a * b;
}

void subtract(int a, int b) 
{
  cout << a - b;
}

void divide(double a, double b) 
{
  cout << a / b;
}

int main(){
  add(4, 6);
  multiply(4,5);
  subtract(10,3);
  divide(5.00, 2.45);
}