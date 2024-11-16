#include <iostream>
#include <string>
#include <limits>
#include <cstdlib> // Para std::atoi
// #include <ctime> //test.
#include <chrono> // nanosecods and seconds
#include <thread> //sleep_for

// empty returns true or false if the string is empty or not. Good!
int main(){
    
    std::string a = "h ello ";

   if (a.empty()){
    std::cout << "HI";

   }else{
    std::cout << "OH"<< "\n";
    std::cout << "0:  " << a[0] << "\n";
    std::cout << "0:  " << a[1]<< "\n";
    std::cout << "0:  " << a[2]<< "\n";
    std::cout << "0:  " << a[3]<< "\n";
    std::cout << "0:  " << a[4]<< "\n";
   }
    // if (a[] ==  a.empty()){ //DONT DO THIS!! INSTEAD USE LEGHT() AND SIZE().
    //     std::cout << "VACIO";
    // }else{
    //     std::cout << "No vacio";
    // }
    std::cout << "---\n";
    std::cout << a.size() << "\n";
    for (size_t i=0; i<a.size(); i++){ //Great! i{0} to i{a.size} is OK.
        if (a[i] == ' '){ // ' ' is space: special character.
            std::cout << "space in " << i << "\n";
        }
    }
    std::cout << "--------------------\n";
    // std::time_t aka;
    std::cout << std::time(nullptr) << "\n";
    for (size_t i{0}; i<10;i++){
        std::cout << ":";
        std::this_thread::sleep_for(std::chrono::nanoseconds(100000000)); //cool.

    }


}
