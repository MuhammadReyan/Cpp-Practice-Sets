// ================================== If Else Statments Questions ===========================-=============
Question 1:
Write a C++ program to determine whether a given number is even or odd.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}


Question 2:
Write a C++ program to check if a person is eligible to vote based on their age (considering the legal voting age as 18).

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote yet." << endl;
    }

    return 0;
}


Question 3:
Write a C++ program to determine the largest among three numbers.

#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "The largest number is: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "The largest number is: " << num2 << endl;
    } else {
        cout << "The largest number is: " << num3 << endl;
    }

    return 0;
}


// ===================== Switch Statements in C+++ ======================================== //


Question 1:
Write a program to display the name of a month based on its number.


#include <iostream>
using namespace std;

int main() {
    int monthNumber;
    cout << "Enter month number (1-12): ";
    cin >> monthNumber;

    switch(monthNumber) {
        case 1:
            cout << "January";
            break;
        case 2:
            cout << "February";
            break;
        case 3:
            cout << "March";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "June";
            break;
        case 7:
            cout << "July";
            break;
        case 8:
            cout << "August";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "October";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "December";
            break;
        default:
            cout << "Invalid month number";
    }

    return 0;
}

Question 2:
Write a program to perform a basic arithmetic operation (+, -, *, /) on two numbers.


#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << "Result: " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Invalid operator";
    }

    return 0;
}

