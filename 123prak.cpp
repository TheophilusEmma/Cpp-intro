#include <iostream>
int main()
{
    int num1=0;
    int num2=0;
    int num3=0;
    int sum=0;

    std::cout<<"Enter the first integer:";
    std::cin>>num1;

    std::cout<<"Enter the second integer:";
    std::cin>>num2;

    std::cout<<"Enter the third integer:";
    std::cin>>num3;

    sum=num1+num2+num3;

    std::cout<<"Sum is:\n " << sum <<std::endl;
}

