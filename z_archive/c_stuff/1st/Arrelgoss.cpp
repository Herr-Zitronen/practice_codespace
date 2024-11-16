#include <iostream>

int main(){
    int arreglos[5]{10, 30, 50, 30, 0};

    for (int i{}; i<5;i++){
        std::cout << arreglos[i] << "   i:" << i<< "\n";
    }
}
