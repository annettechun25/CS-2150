//Annette Chun
//amc4sq
//xToN.cpp
//1/19/15

#include <iostream>
using namespace std;

int xton (int a, int b){
  if (b == 0) 
    return 1;
  return a*xton(a,b-1);
}

int main( ) {
  int x, n, z;
  cout << "Enter a value for x: " << endl;
  cin >> x;
  cout << "Enter a value for n: " << endl;
  cin >> n;
  z = xton (x, n);
  cout << x << "^" << n << " = " << z << endl;
  return 0;
}
