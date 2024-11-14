#include <iostream>

// Program to find the MCM in common of two numbers 🧐
// update: The program doesn't work, but the result is, actually, correct for other thing. *snif*
// Break while studying this more at deep 🫡

bool validate_number(int num){
    if (num<=0){
        std::cout << "Invalid\n";
        // ask if they want the positive version of the number and converte it.
        return false;
    }else{
        return true;
    }
}

int giv_number(){
    int num{};
    std::cout << "Enter a positive integer number: ";
    std::cin >> num;
    if (validate_number(num)){
        std::cout << "1st number: " << num << std::endl;
        return num;
    }else{
        return -1;
    }

}
   

void get_factors(int num1, int num2){ // get all factor and evaluate, then find the intersection of both sets and obtein the MCM
    int prime_num{2};
    int final_num{1};
    while(prime_num<100){
        if (num1 % prime_num == 0 && num2 % prime_num ==0){
            while (num1 % prime_num == 0 && num2 % prime_num ==0){
                num1 = num1 / prime_num;
                num2 = num2 / prime_num;
                final_num=final_num * prime_num;
            }
        }else{
            prime_num += 1;
        }
        
    }

    std::cout << "the MCM is: " << final_num;

}

int main(){
    int num1{giv_number()};
    int num2{giv_number()};


    std::cout << num1 << "  " << num2 << std::endl;
    if (num1 == -1 || num2 == -1){
        std::cout << "Invalid, finishing program";
    }else{
        get_factors(num1, num2); // iterate but in the iteration use just prime numbers till 1000. 
    }
}

// prime numbers (no 0, 1) 2, 3, 5, 7, 11, 13, 17, 23...
