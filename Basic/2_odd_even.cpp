#include <iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter Number To Check Odd/Even \t";
    cin>>num;

    if(num %2 == 0){
        cout<<num<<" Is An Even Number.";
    }
    else{
        cout<<num<<" Is An Odd Number.";
    }

    return 0;
}