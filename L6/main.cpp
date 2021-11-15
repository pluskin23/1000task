#include <iostream>
#include "lab6_1.hpp"

int main(){
    setlocale(LC_ALL, "ru");
    
    int side_a;
    
    std::cin >> side_a;
    
    std::cout << square_cout(side_a) << std::endl;
    
}
