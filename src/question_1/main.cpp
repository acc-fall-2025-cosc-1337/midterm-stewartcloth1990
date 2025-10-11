#include "question1.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    int num;
    int get_fib_number;
    int choice;
    char again = 'y';

    cout << "Fibonacci Sequence" << "\n" << "1 - Get a Fibonacci Number" << "\n" << "2 - Exit the program." << endl;
    cin >> choice;

    if (choice == 1)
    {
        do
        {
            cout << "Please enter a number between 1 and 15: " << endl;
            cin >> num;

            if (num >= 1 && num <= 15)
            {
            get_fib_number = get_fib_sequence(num);

            cout << "The Fibonacci number is " << get_fib_number << endl;

            cout << "Would you like to try another number (Y/N): " << endl;
            cin >> again;
            }

            else
            {
                cout << "Invalid number. Please enter a number between 1 and 15." << endl;
            }

        } while (again == 'y' || again == 'Y');
    }

    else if (choice == 2)
    {
		cout << "Exiting program..." << endl;
	}

    else
	{
		cout << "Invalid choice. Please select 1 or 2." << endl;
	}
    
    return 0;
}