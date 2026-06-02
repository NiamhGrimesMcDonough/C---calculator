#include <bits/stdc++.h>
using namespace std;
// Made from a tutorial on geeksforgeeks.org, I added comments of my understanding of the code.
// Code is initialized
int main() {
    char op;
    double a, b, res;
    // Variables are declared

    cout << "Enter an operator (+, -, *, /): ";
    // cout takes an input and displays a message to the user
    cin >> op;
    // cin maps the input that's brought in to a variable
    cout << "Enter two numbers: ";
    cin >> a >> b;
    // Varaibles can be split

    // Swith performs different action on a variable depending on it's value
    switch (op) {
        case '+' :
            res = a + b;
            break;
        case '-' :
            res = a - b;
            break;
        case '*' :
            res = a * b;
            break;
        case '/' :
            res = a / b;
            break;
        default:
            cout << "Error! Operator is not correct";
            res = -DBL_MAX;
            // DBL_MAX is the maximum floating point number in C++ so minusing it leads to an incredibly small number
            // I'm unusre why it is used in this case as it seems any number would work.
    }

    if (res != -DBL_MAX) 
        cout << "Result: " << res;
    return 0;
    // If the program has a valid operator it will output the result.
   
}
    