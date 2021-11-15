#include <iostream>
#include "lab6_1.hpp"
#include <cmath>

int main(){
    setlocale(LC_ALL, "ru");
    
    int side_a, side_b;
    std::cin >> side_a;
    std::cin >> side_b;
    std::cout << perimeter_and_square_of_rectangle(int side_a, int side_b) << std::endl;
    
}
