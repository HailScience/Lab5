/*********************************************************************
** Program name: sum.cpp
** Author: Alexandra Carper
** Date: 02/07/2018
** Description: This implementation file defines the recursive sum
 *              function, which takes a pointer to an array and the
 *              array size as arguments and returns the sum of the
 *              integers in the array.
*********************************************************************/
#include <iostream>
#include "sum.hpp"

int sum(int *array, int size)
{
    if(size == 0)
    {
        return 0;
    }
    else
    {
        return sum(array, size - 1) + array[size - 1];
    }
}