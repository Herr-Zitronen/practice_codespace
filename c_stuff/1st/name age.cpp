#include <iostream>

int main(){
    std::cout << "Enter first name and age\n";
    std::string first_name;
    double age;
    std::cin >> first_name;
    std::cin >> age;
    age = age * 12;
    std::cout << "Hello, " << first_name << " (months: "<<age<<")";
}