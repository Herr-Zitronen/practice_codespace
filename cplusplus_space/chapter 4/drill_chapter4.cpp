#include <iostream>

int main(){
    // variables
    int num1{};
    int num2{};
    char ch{}; //use it later.


    while (true){
        
        std::cout << "Give a number: ";
        std::cin >> num1;
        std::cout << "Give another: ";
        std::cin >> num2;
        std::cout << "The numbers were: " << num1 << num2 << std::endl;
        
    }
    
}