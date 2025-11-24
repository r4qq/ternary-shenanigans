#pragma once

#include <iostream>
#include <vector>

enum class Trit : signed char 
{
    Minus = -1,
    Zero = 0,
    Plus = 1
};  

inline std::ostream& operator<<(std::ostream& os, Trit trit) 
{
    return os << (trit == Trit::Minus ? "-1" : trit == Trit::Zero ? "0" : "+1");
}

std::vector<Trit> intToTrit(int n);
