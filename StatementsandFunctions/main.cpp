
#include<iostream>

int addNUmbers( int firstParam, int secondParam) {
     int result  = firstParam + secondParam;
     return result;
}


int main()
{
    int first_number {3};
    int second_number {7};

    std::cout << "The First Number is " << first_number << std::endl;
    std::cout << "The Second Number is " << second_number << std::endl;

    int sum  = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl;

    sum = addNUmbers(25,7);
    std::cout << "Sum : " << sum << std::endl;

    std::cout << "Sum : " << addNUmbers(3,42) << std::endl;

    return 0;
}