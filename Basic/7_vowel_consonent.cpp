#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter English Letter To Check Upper/Lower Case \t\t";
    cin >> c;

    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            cout << c << " Is An Vowel";
        }
        else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            cout << c << " Is An Vowel";
        }
        else
        {
            cout << c << " Is A Consonent";
        }
    }
    else
    {
        cout << "Please Enter English Charaters Only";
    }

    return 0;
}