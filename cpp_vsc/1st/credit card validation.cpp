#include <iostream>


void verificate(std::string code, std::string pass){
    if (code == pass){
        std::cout << "Valid";
    }else{
        std::cout << "NO VALID";
        std::cout << "Let's try"; 
    }
}

int main(){
    std::cout << "Program for validate credit card number\n";
    std::string input;
    std::string code = "12345";
    std::cout << "enter your 5 digit code: ";

    std::cin >> input;
    verificate(code, input);



}
