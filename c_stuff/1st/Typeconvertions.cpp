#include<iostream>

int main()
{
    int corrects=8;
    int questions=10;
    double score = (double)corrects/questions*100;

    std::cout << score << "%";
    return 0;
}