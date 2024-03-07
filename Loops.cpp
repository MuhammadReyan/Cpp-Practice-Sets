Loops Practice Sets


Question: Write a C++ program to print numbers from 1 to 10 using a for loop.

#include <iostream>
using namespace std;

int main() {
    cout << "Using a for loop to print numbers from 1 to 10:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

Question: Write a C++ program to calculate the factorial of a number using a while loop.

#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1;
    cout << "Enter a number: ";
    cin >> num;
    
    int i = 1;
    while (i <= num) {
        factorial *= i;
        i++;
    }
    
    cout << "Factorial of " << num << " is: " << factorial << endl;
    return 0;
}


Question: Write a C++ program to find the sum of all odd numbers between 1 and 50 using a do-while loop.

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int num = 1;
    
    do {
        if (num % 2 != 0) {
            sum += num;
        }
        num++;
    } while (num <= 50);
    
    cout << "Sum of all odd numbers between 1 and 50 is: " << sum << endl;
    return 0;
}
