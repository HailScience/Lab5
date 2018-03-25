/*********************************************************************
** Program name: main.cpp
** Author: Alexandra Carper
** Date: 02/07/2018
** Description: The main function calls the menu function to print
 *              the menu, returns the user's choice, calls the
 *              corresponding function, and prints the menu again.
 *              If the user chooses to quit, the program terminates.
*********************************************************************/

#include <iostream>
#include <string>
#include "menu.hpp"
#include "reversePrint.hpp"
#include "sum.hpp"
#include "triangle.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
    int choice = 0;

    choice = menu();

    while(choice != 4)
    {
        if(choice == 1)
        {
            cin.clear();
            cin.ignore();
            string str;
            cout << "Please enter the text you would like to reverse: " << endl;
            getline(cin, str);
            str += '\n';
            reversePrint(str);
            cout << endl;
            choice = menu();
        }
        else if(choice == 2)
        {
            cin.clear();
            cin.ignore();
            int size;
            cout << "Please enter the number of integers you want to sum (must be between 1 and 10)." << endl;

            bool validNumber = false;
            while(!validNumber)
            {
                cin >> size;
                if(cin.fail())
                {
                    cout << "Error! Please enter an integer!" << endl;
                    cin.clear();
                    cin.ignore();
                }
                else if(size > 10 || size < 0)
                {
                    cout << "Error! Please enter an integer between '1' and '10'!" << endl;
                    cin.clear();
                    cin.ignore();
                }
                else
                {
                    int *array;
                    array = new int[size];
                    cout << "Enter " << size << " integers: " << endl;
                    int number;
                    for(int i = 0; i < size; i++)
                    {
                        bool validNumber2 = false;
                        while(!validNumber2)
                        {
                            cin >> number;
                            if(cin.fail())
                            {
                                cout << "Error! Please enter an integer!" << endl;
                                cin.clear();
                                cin.ignore();
                            }
                            else
                            {
                                array[i] = number;
                                validNumber2 = true;
                            }
                        }
                    }
                    int result = sum(array, size);
                    cout << "Sum: " << result << endl;
                    cout << endl;
                    validNumber = true;
                    delete[] array;
                    choice = menu();
                }
            }
        }
        else if(choice == 3)
        {
            cin.clear();
            cin.ignore();
            cout << "Please enter an integer: " << endl;
            int N;
            bool validNumber3 = false;
            while(!validNumber3)
            {
                cin >> N;
                if(cin.fail())
                {
                    cout << "Error! Please enter an integer!" << endl;
                    cin.clear();
                    cin.ignore();
                }
                else
                {
                    int tri = triangle(N);
                    cout << "Triangular Number: " << tri << endl;
                    cout << endl;
                    validNumber3 = true;
                }
            }
            choice = menu();
        }
    }
    if(choice == 4)
    {
        cout << "Goodbye!" << endl;
    }
}