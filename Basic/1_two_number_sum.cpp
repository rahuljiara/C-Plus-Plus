#include <iostream>
int main(){
    int num1,num2;

    std::cout<<"Enter 1st Number";
    std::cin>>num1;

    std::cout<<"Enter 2nd Number";
    std::cin>>num2;

    int sum = num1+num2;

    std::cout<<num1<<"+"<<num2<<" = "<<sum;

    return 0;
}