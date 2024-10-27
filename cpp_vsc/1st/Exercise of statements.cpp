#include <iostream>

int main(){
    float a{};
    int z{3};
    
    for (int i{0}; i<=z ; i++){
        std::cout << a << "\n";
        std::cout << "hello, enter a integer: ";
        // std::cin >> a;
        // int b{a};
        if (std::cin >> a){
           
            std::cout << "It aint an int: \n";
            std::cout << "no int";

        }else{
            std::cout << "It was an int: " << a << "\n";
        }
    }
    
    // std::cout << a;

   
   
    


    return 0;
}