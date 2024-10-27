#include <iostream>

int main(){
    std::cout << "Enter your First name and last\n";
    std::string F_name;
    std::string L_name;

    std::cin >> F_name>> L_name;

    if (F_name < L_name)
    {
        std::cout << "Your name is first alphabetically\n";

    }else if (L_name < F_name)
    {
        std::cout << "Your name is second alphabetically\n";
    }
    
    
}