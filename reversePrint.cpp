/*********************************************************************
** Program name: reversePrint.cpp
** Author: Alexandra Carper
** Date: 02/07/2018
** Description: This implementation file defines the recursive
 *              reversePrint function, which takes a string as an
 *              argument and prints string in reverse.
*********************************************************************/

#include <iostream>
#include <string>
#include "reversePrint.hpp"

using std::cout;
using std::endl;
using std::string;


void reversePrint(string str)
{
    int length = str.length();
    if(length == 0)
    {
        cout << "(newline)";
    }
    else
    {
        cout << str.at(length - 1);
        return reversePrint(str.substr(0, length - 1));
    }
}