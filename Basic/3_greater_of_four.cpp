#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, num4;
    cout << "Checking Greater Of 4 Number....\n\n";

    cout << "Enter Number 1 \t\t";
    cin >> num1;

    cout << "Enter Number 2 \t\t";
    cin >> num2;

    cout << "Enter Number 3 \t\t";
    cin >> num3;

    cout << "Enter Number 4 \t\t";
    cin >> num4;

    /*
    if num1 is greater than all, then following code will be executed.
     */
    if ((num1 > num2) && (num1 > num3) && (num1 > num4))
    {
        cout << num1 << " Is Greater Than " << num2 << " , " << num3 << " & " << num4;
    }
    // If num1 is not greater than all, that means all numbers are greater than num1, so we don't need to check condition to num1.
    else if ((num2 > num3) && (num2 > num4))
    {
        cout << num2 << " Is greater Than " << num1 << " , " << num3 << " & " << num4;
    }
    // If num2 is not greater than all, that means all numbers are greater than num2, so we don't need to check condition to num2 also.
    else if (num3 > num4)
    {
        cout << num3 << " Is Greater Than " << num1 << " , " << num2 << " & " << num4;
    }
    else
    {
        cout << num4 << " Is Greater Than " << num1 << " , " << num2 << " & " << num3;
    }

    return 0;
}