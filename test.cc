#include <iostream>                       //necessary to perform code operations

int main()                                //starting point
{
std::cout << "^\\s+Encryption key:(\\w+)"        << '\n' <<
               "^\\s+Quality=(\\d+)"               << '\n' <<
               "^\\s+E?SSID:\"([[:print:]]+)\""    << '\n' <<
               "^\\s+ssid=\"([[:print:]]+)\""      << '\n';
               

}
