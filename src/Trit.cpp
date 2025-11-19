#include "Trit.hpp"

#include <vector>

std::vector<Trit> intToTrit(int n)
{
    std::vector<Trit> output;
    int x = n;
    while (x != 0) 
    {
        int rem = x % 3;
        x /= 3;

        if(rem == 2) 
        {
            output.push_back(Trit::Minus);
            x += 1;
        }
        else if(rem == 1) 
        {
            output.push_back(Trit::Plus);
        }
        else if (rem == 0) 
        {
            output.push_back(Trit::Zero);
        }
    }
}