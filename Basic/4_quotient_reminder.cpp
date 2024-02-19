#include <iostream>
using namespace std;
int main()
{
    int dividend, divisor, quotient, remainder;

    cout << "Enter Divident \t\t";
    cin >> dividend;

    cout << "Enter Divisor \t\t";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << dividend << " / " << divisor << " :-\n";

    cout << "\n Quotient = " << quotient;
    cout << "\n Reminder = " << remainder;
    return 0;
}