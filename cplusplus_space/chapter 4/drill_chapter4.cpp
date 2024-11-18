#include <iostream>

int main(){
    // variables
    int num1{};
    int num2{};
    std::string ch; //use it later.


    while (true){
        std::cout << "Enter the numbers: \n";
        if (std::cin >> num1 >> num2){
            std::cout << "The numbers were: " << num1 << ", " << num2 << std::endl;
        }else{
            std::cin.clear();
            std::cin >> ch;
            if (ch == "|"){
                std::cout << "Finishing the program...";
                break;
            }else{
                std::cout << "Invalid.\n";
            }
        }
        // neovim.
        
    }
    
}
