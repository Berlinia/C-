#include <iostream>                       //necessary to perform code operations


char const RSLusage[] =                   //creates a RSL with the required string
R"L(
^\s+Encryption key: (\w+)
^\s+Quality=(\d+)
^\s+E?SSID:\"([[:print:]]+)"
^\s+ssid=\"([[:print:]]+)"
)L";

int main()                                //starting point
{
  std::cout << RSLusage;

}
