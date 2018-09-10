#include <iostream>
bool checkEven(int num);        // function prototype


int main()        // Start of programme
{
  int num;        //variable prototypes
  bool isEven;

  std::cout << "Enter the value x: ";       // input value of x
  std::cin >> num;                          // set num to inserted value
  isEven = checkEven(num);                  // check if x is even

  while (isEven == true) {                  // loops untill num is odd
    num = num/2;                            // do the division
    isEven = checkEven(num);                // check if remainder is even
  }

  if(num == 1)                              //depending on num print statement
    std::cout << "The value x is an exact power of two." << '\n';
  else
    std::cout << "The value x is not an exact power of two." << '\n';

}


bool checkEven(int num)   //function checking even/odd
{
  bool isEven;            //variable prototype

  if (num % 2 == 0)       //if loop determines isEven
    isEven = true;        //set value
  else
    isEven = false;       //set value

  return isEven;          // return true/false
}
