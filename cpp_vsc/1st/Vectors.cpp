#include<iostream>
#include <vector>

int main(){
    std::cout << "Vectors \n";

     std::vector<std::string> philosopher = {"Kant", "Plato", "Hume", "Locke"};
    // std::string philosopher[] ={"Kant", "Plato", "Hume"}; // Vectors and arrays are diferent in memory.

    std::cout << "memory address of vector: " << &philosopher << "\n";
    std::cout << "Memory of first element: " << &philosopher[0] << "\n";
    std::cout << "Memory of second element: " << &philosopher[1] << "\n";
    std::cout << "Memory of third element: " << &philosopher[2] << "\n";

    philosopher.push_back("Impostor");
    
    for (std::string phil : philosopher){
        std::cout << phil << " ";
    }
    
    std::cout << "\n";
    std::cout << philosopher.size();

}