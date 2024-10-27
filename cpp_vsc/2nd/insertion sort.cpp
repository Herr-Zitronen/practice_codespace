#include <iostream>

void print_array(int (&array)[5]){
    for(int element : array){
        std::cout << element << '\t';
    }
}

int main(){
    std::cout << "Insertion sort\n";

    int array[5]{8, 2, 3, 4, 0};

    int key{};
    size_t j{};
    for (size_t i = 1; i<5; i++){
        key=array[i];
        j=i-1;
        while (j>0 && array[j] > key){
            array[j+1] = array[j];
            j = j-1;
            array[j+1] = key;
        } 
    }

    print_array(array);


}