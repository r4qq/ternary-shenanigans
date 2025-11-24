#include "Trit.hpp"

#include <algorithm>
#include <vector>

void reverseTrit(std::vector<Trit>& trit)
{
    for (auto& element : trit) 
    {
        switch (element) 
        {
            case Trit::Plus : element = Trit::Minus; break;
            case Trit::Minus: element = Trit::Plus;  break;
            case Trit::Zero : break;
        }
    }
}

std::vector<Trit> intToTrit(int n)
{
    std::vector<Trit> output;

    if (n == 0) 
    {
        output.push_back(Trit::Zero);
        return output;
    }
    
    int x = std::abs(n);
    while (x != 0) 
    {
        int rem = x % 3;
        if(rem == 0) 
        {
            output.push_back(Trit::Zero);
        }
        else if(rem == 1) 
        {
            output.push_back(Trit::Plus);
        }
        else if (rem == 2) 
        {
            output.push_back(Trit::Minus);
            x += 1;
        }
        x /= 3;
    }

    std::reverse(output.begin(), output.end());

    if (n < 0) 
    {
        reverseTrit(output);
    }

    return output;
}



