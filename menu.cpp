/*********************************************************************
** Program name: menu.cpp
** Author: Alexandra Carper
** Date: 02/07/2018
** Description: This implementation file defines the menu function,
 *              which prints the menu and then returns the user's
 *              choice to the main function.
*********************************************************************/

#include <iostream>
#include "menu.hpp"

using std::cin;
using std::cout;
using std::endl;

int menu()
{
    int choice;

    cout << "Which function would you like to use?" << endl;
    cout << "1. Print a string in reverse.\n";
    cout << "2. Calculate the sum of integers.\n";
    cout << "3. Calculate the triangular number of an integer.\n";
    cout << "4. Quit program.\n";

    bool validInput = false;

    while(!validInput)
    {
        cin >> choice;
        if(cin.fail())
        {
            cout << "Error! Please choose '1', '2', or '3'!" << endl;
            cin.clear();
            cin.ignore();
        }
        else if(choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            cout << "Error! Please choose '1', '2', or '3'!" << endl;
            cin.clear();
            cin.ignore();
        }
        else
        {
            validInput = true;
            return choice;
        }
    }
}