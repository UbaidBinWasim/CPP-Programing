#include <iostream>
#include<math.h>
using namespace std;
int main()
    {
    int choice;
    do
    {
    	cout <<  "\t\t\t\t\t***Welcome To Ubaid's Calculator***" <<endl;
        cout << "Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modular Operation" << endl;
        cout << "6. Multiplication Table" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
	    {
        case 1: // For Addition
        double num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Result: " << num1 + num2 << endl;
        break;
            
        case 2: // For Subtraction
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Result: " << num1 - num2 << endl;
        break;
            
        case 3: // For Multiplication
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Result: " << num1 * num2 << endl;
        break;
            
        case 4: // For Division
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        if (num2 != 0)
	    {
        cout << "Result: " << num1 / num2 << endl;
        } 
		else 
		{
        cout << "Error: Division by zero!" << endl;
        }
        break;
            
        case 5: // For Modular Operation
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "Result: " << a % b << endl;
        break;
            
        case 6: // For Multiplication Table
        int n;
        cout << "Enter a number for the table: ";
        cin >> n;
        cout << "Multiplication Table for " << n << ":" << endl;
        for (int i = 1; i <= 10; ++i)
		{
        cout << n << " * " << i << " = " << n * i << endl;
        }
        break;
            
        case 7: // For Exit
        cout << "Exiting program. Goodbye!" << endl;
        break;
            
        default:
        cout << "Invalid choice. Please try again." << endl;
        }
        } 
		while (choice != 7);
        return 0;
}
