#include <iostream>
// Program to find the MCM in common of two numbers 🧐
// update: The program doesn't work, but the result is, actually, correct for other thing. *snif*
// Break while studying this more at deep🫡
// Starting again.

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
        std::cout << "input: " << num << std::endl;
        return num;
    }else{
        return -1;
    }

}
   

void get_factors(int num1, int num2){ //get MCM add "Conversion de abs. 2 if-statements at least"
    int countnum{2};
    int final_num{1};
    bool verificate;
    while(num1){ // While doesnt work with condition: ((num1 != 1) && (num2 != 1)) Why?
        verificate=false;
        if (num1 % countnum == 0){
            num1 /= countnum;
            verificate = true;
        }
        if(num2 % countnum == 0){
            num2 /= countnum;
            verificate = true;
        }
        if (verificate == true){
            final_num *= countnum;
        }else{
            ++countnum;
        }if (num1 == 1 && num2 == 1){
            break;
        }
    }

    std::cout << "the MCM is: " << final_num << std::endl;

    std::cout << "Actual state of both inputs: " << num1 << '\t' << num2 << '\n';
}

int main(){
    int num1{giv_number()};
    int num2{giv_number()};


    // std::cout << num1 << "  " << num2 << std::endl;
    // if (num1 == -1 || num2 == -1){
    //     std::cout << "Invalid, finishing program";
    // }else{
    //     get_factors(num1, num2); // iterate but in the iteration use just prime numbers till 1000. 
    // }

    if (validate_number(num1) == false || validate_number(num2) == false){
        std::cout << "As invalid, finishing program";
    }else{
        get_factors(num1, num2);
    }
}

// prime numbers (no 0, 1) 2, 3, 5, 7, 11, 13, 17, 23...
