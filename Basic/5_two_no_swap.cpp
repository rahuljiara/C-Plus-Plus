#include <iostream>
using namespace std;
int main()
{
    int num1 = 10, num2 = 15, num3;

    cout << "Number's Before Swaping :-";
    cout << "\nNumber 1 = " << num1;
    cout << "\nNumber 2 = " << num2<<"\n\n";

    num3 = num1;
    num1 = num2;
    num2 = num3;

    cout << "Number's After Swaped :-"; 
    cout << "\nNumber 1 = " << num1;
    cout << "\nNumber 2 = " << num2;

    return 0;
}