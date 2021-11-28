/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Conroy Ricketts
 */

#include <iostream>

using namespace std;

void computeResult(char op, int a, int b)
{
    if(op == '+')
    {
        cout << "\nThe sum of " << a << " and " << b << " is " << a + b << ".\n";
    }
    else if(op == '-')
    {
        cout << "\nThe difference of " << a << " and " << b << " is " << a - b << ".\n";
    }
    else if(op == '*')
    {
        cout << "\nThe product of " << a << " and " << b << " is " << a * b << ".\n";
    }
    else if(op == '/')
    {
        cout << "\nThe quotient of " << a << " and " << b << " is " << a / b << ".\n";
    }
}

int toInt(string num)
{
    for(int i = 0; i < num.length(); i++)
        num.at(i) = tolower(num.at(i));

    if(num == "one")
        return 1;
    if(num == "two")
        return 2;
    if(num == "three")
        return 3;
    if(num == "four")
        return 4;
    if(num == "five")
        return 5;
    if(num == "six")
        return 6;
    if(num == "seven")
        return 7;
    if(num == "eight")
        return 8;
    if(num == "nine")
        return 9;
    if(num == "zero")
        return 0;

    return stoi(num);
}