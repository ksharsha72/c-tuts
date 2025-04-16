#include<iostream>
#include<string>

int main()
{
    /*
        std::cout << "Hello c++20" << std::endl;

        int age{21};
        std::cout << "Age : " << age << std::endl;

        std::cerr << "Error Message: Something is wrong" << std::endl;
        std::clog << "Log Message: Something happened" << std::endl;
    */

    /*
        int age1;
        std::string name;

        std::cout << " Please enter your name and age : " << std::endl;

        // std::cin >> name;
        // std::cin >> age1;

        std::cin >> name >> age1;

        std::cout << "Hello " << name << " you are " << age1 << "years old!" << std::endl;
    */

    std::string fullname;
    int age3;

    std::cout << " please type in your fullname and age " << std::endl;

    std::getline(std::cin, fullname);

    std::cin >> age3;

    
    std::cout << "Hello " << fullname << " you are " << age3 << "years old!" << std::endl;

    return 0;
}