#include <iostream>
#include <vector>

int main(){
    std::cout << "Pointers works \n";
    // create a pointer 
    int x{5};
    int *p_integer = &x;

    std::cout << "Variable: " << x << "\n";
    std::cout << "Pointer: " << p_integer << "\n";

    std::cout << "Reference of the Pointer: " << &p_integer << "\n";
    std::cout << "Reference of variable: " << &x << '\n';

    x = *p_integer+10;
    std::cout << x << '\n';
    std::cout << "Reference of the Pointer: " << &p_integer << "\n";
    std::cout << "Reference of variable: " << &x << '\n';
    std::cout << "Pointer of the pointer: " << *p_integer;
}