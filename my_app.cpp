#include <iostream>
#include "my_app.h"

using namespace std;

int main()
{
    char operation;
    string num1, num2;

    cout << "\nEnter an operator!\n";

    cin >> operation;
    
    cout << "\nEnter a single-didgit number!\n";

    cin >> num1;
    
    cout << "\nEnter another single-didgit number!\n";

    cin >> num2;

    computeResult(operation, toInt(num1), toInt(num2));

    return 0;
}