#include <iostream>
#include "lab6_1.hpp"
#include <cmath>
#include "math.h"

int main(){
    setlocale(LC_ALL, "ru");
    
    double diameter;
    double p = 3.14;
    std::cin >> diameter;
    std::cout << length(diameter, p) << std::endl;
    
}
