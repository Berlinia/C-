#include <iostream>
using namespace std;

//bool checkEven(int num);        // function prototype
int main()

{

  int num;


  cout << "Enter the value x: ";       // input value of x
  cin >> num;                          // set num to inserted value
  cout << ( num % 2 == 0 ? "even" : "odd") << '\n';
  cout << ( num/2 + num/2 == num ? "even" : "odd") << '\n';
  cout << (  ? "even" : "odd") << '\n';
}

















/*
bool checkEven(int num)   //function checking even/odd
{
  bool isEven;            //variable prototype

  if (num % 2 == 0)       //if loop determines isEven
    isEven = true;        //set value
  else
    isEven = false;       //set value

  return isEven;          //return true/false
}
*/
