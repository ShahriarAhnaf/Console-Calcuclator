// consoleCalculator.cpp : This file contains the "main" function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

#define PI 3.141592

using namespace std;

int main()
{
    double num1 = 0;
    string operation = "\0";
    double num2 = 0;
    double result = 0;
    bool needSecond = true;

    cout << "Console calculator v1.0 \n";
    cout << "Operations available : +, -, *, /, ^ \n";
    cout << "functions available(radian input): cos, sin, tan, arc cos, arc sin, arc tan \n";
  
    //first number and operation
    cout << "enter first number:";
    cin >> num1 ;
    cout << "enter operation:";
    cin >> operation ;

    //logic check for need of second number
    if (operation == "cos" ||
        operation == "sin" ||
        operation == "tan" ||
        operation == "acos" ||
        operation == "asin" ||
        operation == "atan" )
    {
        needSecond = false;
    }
    else// second number
    {
        cout << "enter second number:";
        cin >> num2;
    }

    if (operation == "*")
    {
        result = num1 * num2;
    }
    else if (operation == "+")
    {
        result = num1 + num2;
    }
    else if (operation == "-")
    {
        result = num1 - num2;
    }
    else if (operation == "/")
    {
        result = num1 / num2;
    }
    else if (operation == "^")
    {
        result = pow(num1, num2);
    }

    //function operations that dont need second number
    else if (operation == "cos")
    {
        result = cos(num1);
    }
    else if (operation == "sin")
    {
        result = sin(num1);
    }
    else if (operation == "tan")
    {
        result = tan(num1);
    }
    else if (operation == "acos")
    {
        result = acos(num1);
    }
    else if (operation == "asin")
    {
        result = asin(num1);
    }
    else if (operation == "atan")
    {
        result = atan(num1);
    }


    //final output
    if (needSecond)
    {
        cout << num1 << operation << num2 << " = " << result;
    }
    else
    {
        cout << operation << num1 << " = " << result;
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file