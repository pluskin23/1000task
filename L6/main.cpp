#include <iostream>
#include "lab6_1.hpp"
#include <cmath>
#include "math.h"

int main(){
    setlocale(LC_ALL, "ru");
    
    int num_a;
    int num_b;
    std::cin >> num_a;
    std::cin >> num_b;
    std::cout << geometric_mean(num_a, num_b) << std::endl;
    
}
