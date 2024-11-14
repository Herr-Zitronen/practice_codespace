#include <iostream>

// Function to print the array elements
void print_array(int (&array)[5]) {
    for (int element : array) {
        std::cout << element << '\t';
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Insertion sort\n";
    int array[5]{8, 2, 3, 4, 0};
    int key{};
    size_t j{};
    
    for (size_t i = 1; i < 5; i++) {
        key = array[i];
        j = i;
        while (j > 0 && array[j - 1] > key) {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = key;
    }
    
    print_array(array);
    return 0;
}
