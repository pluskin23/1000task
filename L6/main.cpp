#include <iostream>
#include "lab6_1.hpp"
#include <cmath>
#include "math.h"

int main(){
    setlocale(LC_ALL, "ru");
    
    int radius;
    std::cin >> radius;
    std::cout << length_and_square_of_circle(radius) << std::endl;
    
}
