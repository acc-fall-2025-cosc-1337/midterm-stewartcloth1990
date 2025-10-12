#include "question2.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    std::string user_string;
    char again = 'y';

    do
    {

        cout << "Please enter a string: " << endl;
        cin >> user_string;

        bool is_palindrome_result = is_palindrome(user_string);

        if (is_palindrome_result == true)
        {
            cout << "True" << endl;
        }

        else
        {
            cout << "False" << endl;
        }

        cout << "Enter another string? (Y/N): " << endl;
        cin >> again;

    } while(again == 'y' || again == 'Y');

    return 0;
}