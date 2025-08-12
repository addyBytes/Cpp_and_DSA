#include <iostream>
using namespace std;

int main(){
  int a =5;
  int b= 6;
  //with temp variable
  int temp = 0;
  temp = a;
  a=b;
  b=temp;

  cout << "a: "<<a <<"b: "<<b;

  // without temp variable

  int c =7;
  int d = 8 ;

  c = c+d;
  d = c-d;
  c = c-d;
 cout << "c: "<<c <<"d: "<<d;
  
  return 0;
}