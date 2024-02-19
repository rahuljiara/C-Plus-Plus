#include <iostream>
using namespace std;
int main()
{
char c;
cout<<"Enter English Letter To Check Upper/Lower Case \t\t";
cin>>c;

if(c >='A' && c <='Z'){
    cout<<c<<" Is In Upper Case";
}
else if(c >='a' && c<='z'){
    cout<<c<<" Is In Lower case";
}
else{
    cout<<"Please Enter English Letter Not Numbers & Special Character";
}

    return 0;
}