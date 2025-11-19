#pragma once

#include <vector>

enum class Trit : signed char 
{
    Minus = -1,
    Zero = 0,
    Plus = 1
};

std::vector<Trit> intToTrit(int n);