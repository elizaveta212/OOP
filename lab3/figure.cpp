#include "figure.hpp"


bool Figure::operator == (const Figure& other) const
{
    return dots == other.dots;
}

// Figure::~Figure()
// {
//     dots.clear();
//     dots.shrink_to_fit();
// }
