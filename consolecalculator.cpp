#include <iostream>
#include <cmath>

// Namespaces for cout/cin
using std::cout;
using std::cin;

int main() {

    int function;
    double x;
    double y;
    double result;

    cout << "Welcome to CPP Calculator! \n\n";

    cout << "What function would you like to do? \n";
    cout << "1. Addition \n";
    cout << "2. Subtraction \n";
    cout << "3. Multiplication \n";
    cout << "4. Division \n";
    cout << "5. Power \n";
    cout << "6. Square Root \n";
    cin >> function; // Gets the user's request

    // if/else checking if the function is a valid value
    if (function > 6) {
        // Invalid number
        cout << "Please pick a valid function!";
        return 0;

    } else if (function < 6) {
        // All functions other than Square Root
        cout << "What is your first number? ";
        cin >> x;

        cout << "What is your second number? ";
        cin >> y;

    } else {
        // Square Root
        cout << "What is your number? ";
        cin >> x;
    }

    // Switch checking the type of function and evaluating accordingly
    switch(function) {
        case 1:
            result = x + y;
            break;
        case 2:
            result = x - y;
            break;
        case 3:
            result = x * y;
            break;
        case 4:
            // If else preventing /0 error
            if (y == 0) {
                std::cout << "You can't divide by 0!";
                return 0;
            } else {
                result = x / y;
                break;
            }
        case 5:
            result = pow(x, y);
            break;
        case 6:
            result = sqrt(x);
            break;
        default:
            // Realistically shouldn't reach here, but placed as redundancy
            cout << "Please pick a function between 1-6!";
            return 0;
    }

    cout << "Your result is " << result << "."; // Outputting the result

}