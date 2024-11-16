#include <iostream>
// void is like a procedure
// procedure can be converted in a function changing void and add a return value.

int some(int a){
    a = a * 2;

    return a;
}

int main(){
    std::cout << "-----Welcome, this is the function tests program-----\n\n";
    int x;
    int b;

    std::cout << "how many times execute?: ";
    std::cin >> x;

    for (int i=1; i <= x; i++){
        std::cout << "Enter b:  ";
        std::cin >> b;

        b = some(b);
        std::cout << "The final value is: " << b << '\n';

        
    }


}