#include <iostream>
#include <string>
#include <cmath> //cmath os the library for c++, math.h is for c.

int main()
{
    std::string name;
    int age;

    std::cout << "enter your full name: ";
    // std::cin >> name;

    std::getline(std::cin, name);

    std::cout << "enter your age: ";
    std::cin >> age;
    //  std::getline(std::cin >> std::ws, name);
    // this will erase all new lines before getline (because getline asumme a new line in cin>>)

    std::cout << "hello " << name << '\n';
    std::cout << "you are " << age << " years old" << '\n';

    double x=3;

    x=pow(x, 2);

    std::cout << "here is the x number: " << x;
}  