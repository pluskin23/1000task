#include <iostream>
#include "lab6_1.hpp"
#include <cmath>
#include "math.h"

int main(){
    setlocale(LC_ALL, "ru");
    
    int edge_length_a;
    int edge_length_b;
    int edge_length_c;
    std::cin >> edge_length_a;
    std::cin >> edge_length_b;
    std::cin >> edge_length_c;
    std::cout << volume_of_rectangular_parallelepiped_and_surface_area(edge_length_a, edge_length_b, edge_length_c) << std::endl;
    
}
