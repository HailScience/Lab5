/*********************************************************************
** Program name: triangle.cpp
** Author: Alexandra Carper
** Date: 02/07/2018
** Description: This implementation file defines the triangle
 *              function, which is called recursively until it
 *              reaches its base case 'N <= 0'. The function should
 *              calculate the triangular number of the integer
 *              input by the user.
*********************************************************************/

#include <iostream>
#include "triangle.hpp"

int triangle(int N)
{
    if(N <= 0)
    {
        return 0;
    }
    else
    {
        return N + triangle(N - 1);
    }
}