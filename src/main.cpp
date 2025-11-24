#include "Trit.hpp"
#include <iostream>

int main() 
{
    auto xpp = intToTrit(-5);
    for (auto element : xpp) 
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    return 0;
}