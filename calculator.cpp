// Libraries
#include <iostream>
#include <cmath>
#include <string> 
#include "documentation.h"
using namespace std;

// Main Function
int main() {

    // Welcome and Variables
    cout << "Welcome to the Advanced Calculator" << endl;
    char op;
    bool running = true;

    // Flow Loop
    while (running) {
        // Operator Input
        cout << "\nEnter the operator(+, -, *, /, or 'm' for more, 'q' to quit, 'd' for codenames): " << "\n";
        cin >> op;

        // Quit Program
        if (op == 'q'){
            break;
        }
        // Code Names (documentation)
        if (op == 'd'){
            showDocumentation(); // Function from Header File
            goto main_menu;
        }
        // More Options
        if (op == 'm') {
            string secretOP;
            cout << "('sqrt', 'cbrt', 'abs', 'pow', 'round', 'hypot')" << "\n"; // More Math Functions
            cin >> secretOP;

            // Square Root
            if (secretOP == "sqrt") {
                char choice;
                do {
                    double square; 
                    cout << "Enter the number: "; 
                    cin >> square;
                    cout << "The Square root is: " << sqrt(square) << "\n";
                    cout << "Do you want to go again? (y/n/b (back)): ";
                    cin >> choice;
                    if (choice == 'b'){
                        goto main_menu;
                    }
                    if (choice == 'n'){
                        return 0;
                    }
                } while (choice == 'y');
            }
            // Cube Root
            else if (secretOP == "cbrt"){
                char choice;
                do {
                    double cube;
                    cout << "Enter the number: "; 
                    cin >> cube;
                    cout << "The Cube root is: " << cbrt(cube) << "\n";
                    cout << "Would you like to go again? (y/n): ";
                    cin >> choice;
                    cout << "Do you want to go again? (y/n/b (back)): ";
                    cin >> choice;
                    if (choice == 'b'){
                        goto main_menu;
                    }
                    if (choice == 'n'){
                        return 0;
                    }
                } while (choice == 'y');
            }
            // Absolute Value
            else if (secretOP == "abs"){
                char choice;
                do {
                    double absolute;
                    cout << "Enter the number: "; 
                    cin >> absolute;
                    cout << "The Absolute Value is: " << abs(absolute) << "\n";
                    cout << "Do you want to go again? (y/n/b (back)): ";
                    cin >> choice;
                    if (choice == 'b'){
                        goto main_menu;
                    }
                    if (choice == 'n'){
                        return 0;
                    }
                } while (choice == 'y');
                    
            }
            // Round
            else if (secretOP == "round"){
                char choice;
                do {
                    double numberX;
                    cout << "Enter the number: "; 
                    cin >> numberX;
                    cout << numberX << " rounded to the nearest integer is: " << round(numberX) << "\n";
                    cout << "Do you want to go again? (y/n/b (back)): ";
                    cin >> choice;
                    if (choice == 'b'){
                        goto main_menu;
                    }
                    if (choice == 'n'){
                        return 0;
                    }
                } while (choice == 'y');
            }
            // Hypotenuse
            else if (secretOP == "hypot"){
                char choice;
                do {
                    double x;
                    double y;
                    cout << "Enter the first side: "; 
                    cin >> x;
                    cout << "Enter the second side: ";
                    cin >> y;
                    cout << "The Hypotenuse is: " << hypot(x, y) << "\n";
                    cout << "Do you want to go again? (y/n/b (back)): ";
                    cin >> choice;
                    if (choice == 'b'){
                        goto main_menu;
                    }
                    if (choice == 'n'){
                        return 0;
                    }
                } while (choice == 'y');
            }
            else{
                cout << "Error! Operator is not correct. Please Restart Program";
            }
        } 
        else {
            // Basic Calculator 
            int num1, num2;
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;

            if (op == '+'){
                cout << "Result: " << num1 + num2 << endl;
            } 
            else if (op == '-'){
                cout << "Result: " << num1 - num2 << endl;
            } 
            else if (op == '*'){
                cout << "Result: " << num1 * num2 << endl;
            } 
            else if (op == '/') {
                if(num2 != 0){
                    cout << "Result: " << num1 / num2 << endl;
                } 
                else {
                    cout << "Error: Division by zero!" << endl;
                }
            }
            else cout << "Invalid Operator!" << endl;
        }

        main_menu:; // Label
    }

    return 0; // End of Program
}