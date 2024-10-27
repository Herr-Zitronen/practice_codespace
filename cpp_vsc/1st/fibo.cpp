#include <iostream>

int main(){
    int a=0;
    int b=1;

    std::cout << a << ", ";
    for (size_t i = 0; i < 10; i++)
    {
        if (i<9)
        {
            int c=a;
            a=a+b;
            std::cout << a << ", ";
            b=c; 
        }  
        else
        {
            a=a+b;
            std::cout << a << ".";
        }

        
    }
    std::cout << "HELOOOOO";
}
