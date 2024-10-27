#include <iostream>
#include <cmath>

/*
    NOTES:
    - rewrite case 4(function) with for statement and add other option for the uppercase
    letters and Digits. 😎
    - 09.10, how fix this Wnarrowing ?
    - 09.11, Fix done. Pointers solve it, and using this kind of syntax:    int* <<variable>> = new int[<<array_size>>];
*/

// func:
void Array_search(){
    
    std::cout << "This is the array search\n";
    int element{}; //For input
    std::cout << "Enter the size of the array: ";
    std::cin >> element; // If user input 3, the list will be 0, 1, 2.
    
    // Size of is great for arrays in compiled. Dynamic arrays for after compile array (undefined) 🧐

    int* List = new int[element];
    std::cout << "Enter the List's values\n";
    int values{};
    for (size_t i{0}; i<element; ++i){ // no ejecuta en 3, naturalmente.
        std::cin >> values;
        List [i]={values};
    }

    int counter = element;
    // int size {sizeof(List)/sizeof(int)};
    int size = element * sizeof(int);

    std::cout << "Element to search: ";
    std::cin >> element;

    bool find;
    // "expression must have a constant value" how can i transform a variable in a constant.
//    int index_ar[size]={}; // If i don't give a size, it's 0 in memory, but has values!! memory doesn't recognize it. MUST HAVE A SIZE! 🫡
    int* index_ar = new int[size];

    // The size seems to be defined when the array is initialized 🐻.
    // index_ar has the same size than the original array (List), it seems the most efficient way for now.
    size_t j{0};   
    for (size_t i{0}; i<counter; i++){
        if (List[i] == element){
            index_ar[j] = i;
            j+=1;
            find = true;
        }   
    }
    //std::cout << index_ar[0] << "  -  " << index_ar[1] << "\n";
    // el valor de sizeof(index_ar) is 0!! Why?
    
//    std::cout << "size of index ar: " << sizeof(index_ar) << "  And of int: " << sizeof(int)<< "\n"; // this is useless, size will be THE SIZE OF THE POINTER. 
    std::cout <<"value of j: " << j << "\n";
    if (!find){
        std::cout << "Value not found";
    }else{
        if (j>1){
            std::cout << "Value " << element << " found in positions ";
            for (size_t i{0}; i<j; i++) {
                if (i!= j-1){
                std::cout << index_ar[i]+1 << ", ";
                }else{
                std::cout << index_ar[i]+1 << ". "; // cuz why not.
                }
            }
        }else{
            std::cout << "Value " << element << " found in position " << index_ar[0]<< ".\n";
        }
    }

}
void example_book(){
    int i{90};
    std::cout << "\t no array but book e.g. btw \t\n"; // \t is the tab character! 😊
    while (i<100){
        std::cout << i << '\t' << (i*i) << '\n';
        i++;
    }
}
void try_this01(){

    int i{};
    std::cout << "Try this program \n";
    while (i<=30){
        std::cout << "Char " << char('a' + i) << '\t' << "Int: " << int('a')+i <<'\n';
        i++;
    }
    
}
void Foreach_loop(){ // Range for loop 🫡
    //It is a control flow (loop) that transver items in a collection of data til the end.
    int input;
    std::cout << "Size of the array: ";
    std::cin >> input;
    const int size = {input};
    
    int* arr = new int[size];
    bool tabbool{true};

    for (size_t i{0}; i<size;++i){
        std::cout << "Enter a value of the array: ";
        std::cin >> arr[i];
    }

    int secondarr[5]{};


    for (size_t i{0}; i<10;++i){
        std::cout << arr[i] << " ";
        if (i <= 5){
            secondarr[i] = arr[i];
        }else if (i==9){
            std::cout << '\n';
        }
    }   


    std::cout << "---------\n" << "First 5 elements\n";
    for (int num : secondarr){
        if (tabbool == 1){
            std::cout << "The number is: " << num << "\t";

        }else{
            std::cout << "The number is: " << num << "\n";

        }
        tabbool=!tabbool;
    }
    // IT DOESN'T WORK WITH INT. MUST BE A CLASS (LIKE STD::STRING).
    // std::cout << "Loop with .empty, no empty spaces when size<5\n";

    // for (int i = 0; !secondarr[i].empty(); i++)
    // {
    //     std::cout << secondarr[i] << '\t';
    // }
    

    delete arr;

}
void matrix_out(){
    std::cout << "*** Matrix out ***\n";

    int matrix[2][2]{1, 2, 3, 5};

    std::cout << matrix[0][0] << '\n';
    std::cout << matrix[0][1] << '\n';
    std::cout << matrix[1][0] << '\n';
    std::cout << matrix[1][1] << '\n';

}


//main:

int main(){
    char sw;

//    std::string a[]{}; // when is null, it size is 0. each element in the string value an exact wight. string: 32 bytes.
    std::string foo[] = {"a", "b", "c"};
    std::cout << "0 for exit\n";


   while (std::cin >> sw)
   {
        switch (sw)
        {
        case '0': break;
        case '1':
            
            std::cout << foo <<"\n";
            // foo has the memory address.

            std::cout << foo[0]<< "\n";
//            std::cout << sizeof(a) << "\n";
            std::cout << "Operation: std::cout << 5./2 << \n";
            std::cout << 5./2 << "\n"; // if the operation has a double, it applie floating-point operators.
            break;
        
        case '2': Array_search();
            break;
        case '3': example_book();
            break;
        case '4': try_this01();
            break;
        case '5': Foreach_loop();
            break;
        case '6': matrix_out();
            break;
        default:
            
            std::cout << "no option\n"; 
            break;


        }
        break;
   }
}
// cool