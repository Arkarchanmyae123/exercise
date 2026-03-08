#include "difference_of_squares.h"
unsigned int sum_of_squares(unsigned int number)
{
    unsigned int i = 1;
    unsigned int sum = 0;
    while (i <= number)
    {
        sum = sum + (i * i);
        i++;
    }
    return (sum);
}

unsigned int square_of_sum(unsigned int number)
{
    unsigned int i  = 1;
    unsigned int sum = 0;
    while (i <= number)
    {
        sum = sum + i;
        i++;
    }
    return (sum * sum);
}

unsigned int difference_of_squares(unsigned int number)
{
     return (square_of_sum(number) - sum_of_squares(number));  
}