

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>

//task 1
int perimeter_square_count(int side_a = 2) {
    return side_a * 4;
}

//task 2
int square_of_square_cout(int side_a = 3) {
    return pow(side_a, 2);
}
//
//task3.1
int perimeter_of_rectangle_count(int side_a, int side_b) {
    return 2 * (side_a + side_b);
}
//
//task3.2
int square_of_rectangle_count(int side_a, int side_b) {
    return side_a * side_b;
}

//task 3
void perimeter_and_square_of_rectangle(int side_a, int side_b) {
    std::cout << square_of_rectangle_count(side_a, side_b) << std::endl <<  perimeter_of_rectangle_count(side_a, side_b) << std::endl;
}
//
//task 4
int length(double diameter){
    return diameter * M_PI;
}
//
//task 5.1
int cube_volume(int edge_length) {
    return pow(edge_length, 3);
}

//task 5.2
int surface_area(int edge_length) {
    return 6 * pow(edge_length, 2);
}

////task 5
int  cube_volume_and_surface_area (int edge_length) {
    std::cout << cube_volume(edge_length) << std::endl << surface_area(edge_length) << std::endl;
    return 0;
}

//task 6.1
int volume_of_rectangular_parallelepiped(int edge_length_a, int edge_length_b, int edge_length_c) {
    return edge_length_a* edge_length_b * edge_length_c;
}

//task 6.2
int surface_area(int edge_length_a, int edge_length_b, int edge_length_c) {
    if (edge_length_a <= 0 || edge_length_b  <= 0 || edge_length_c <= 0){
        std::cout << "some of length less or equal zero";
        return 1;
    }
    return 2 * (edge_length_a * edge_length_b + edge_length_b * edge_length_c + edge_length_a * edge_length_c);
}

//task 6
int vol_of_rect_parall_and_surf_area(int edge_length_a, int edge_length_b, int edge_length_c) {
    
    std::cout << volume_of_rectangular_parallelepiped(edge_length_a, edge_length_b, edge_length_c) << std::endl << surface_area(edge_length_a, edge_length_b, edge_length_c) << std::endl;
    
    return 0;
}

//task 7.1
int length_of_circle(double radius) {
    return 2 * M_PI * radius;
}
//task 7.2
int square_of_circle(double radius) {
    return M_PI * pow(radius, 2);
}

//task 7
void length_and_square_of_circle (double radius) {
    std::cout << length_of_circle(radius) << std::endl << square_of_circle(radius) << std::endl;
}

//task 8
int average(int num_a, int num_b) {
    return (num_a + num_b) / 2;
}

//task 9
int geometric_mean(int num_a, int num_b) {
    return sqrt(num_a * num_b);
}

//task 10.1
int sum_of_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        std::cout << "numbers must be != 0";
    }
    return num_a + num_b;
}

//task 10.2
int diff_of_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        std::cout << "numbers must be != 0";
    }
    return num_a - num_b;
}

//task 10.3
int prod_sq_of_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        std::cout << "numbers must be != 0";
    }
    return pow(num_a, 2) * pow(num_b, 2);
}

//task 10
int quot_sq_of_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        std::cout << "numbers must be != 0";
    }
    return pow(num_a, 2) / pow(num_b, 2);
}

//task 10
int sum_diff_prod_quot_of_nonzero_numbers(int num_a, int num_b) {
    std::cout << sum_of_nonzero_numbers(num_a, num_b) << std::endl << diff_of_nonzero_numbers(num_a, num_b) << std::endl << prod_sq_of_nonzero_numbers(num_a, num_b) << std::endl << quot_sq_of_nonzero_numbers(num_a, num_b);
    return 0;
}

////task 11.sum
//int sum_of_module_notnull_numders(int a, int b) {
//    if (a == 0 && b == 0) {
//        std::cout << "a and b must != 0";
//    }
//    return fabs(a) + fabs(b);
//}
//
////task 11.diff
//int diff_of_module_notnull_numbers(int a, int b) {
//    if (a == 0 && b == 0) {
//        std::cout << "a and b must != 0";
//    }
//    return fabs(a) - fabs(b);
//}
//
////task 11.prod
//int prod_of_module_notnull_numbers(int a, int b) {
//    if (a == 0 && b == 0) {
//        std::cout << "a and b must != 0";
//    }
//    return fabs(a) * fabs(b);
//}
//
////task 11.quot
//int quot_of_module_notnull_numbers(int a, int b) {
//    if (a == 0 && b == 0) {
//        std::cout << "a and b must != 0";
//    }
//    return fabs(a) / fabs(b);
//}
//
//
////task 11
//void sum_diif_prod_qout_of_module_notnull(int a, int b) {
//    std::cout << sum_of_module_notnull_numders(a, b) << diff_of_module_notnull_numbers(a, b) << prod_of_module_notnull_numbers(a, b) << quot_of_module_notnull_numbers(a, b);
//}
//
////task 12.1
//int hypotenuse_of_triangle(int a, int b) {
//    return sqrt(pow(a, 2) + pow(b, 2));
//}
//
////task 12.2
//int perimeter_of_right_triangle(int a, int b, int hypotenuse_of_triangle) {
//    return a + b + hypotenuse_of_triangle;
//}
//
////task 12
//void hypotenuse_and_perimeter_of_right_triangle(int a, int b, int c) {
//    std::cout << hypotenuse_of_triangle(a, b) << perimeter_of_right_triangle(a, b, c);
//}
//
////task 13.1
//int square_of_circle1(int r1, int r2) {
//    double p = 3.14;
//    if (r2 > r1) {
//        std::cout << "R1 must be > R2";
//    }
//    return p * pow(r1, 2);
//}
//
////task 13.2
//int square_of_circle2(int r1, int r2) {
//    double p = 3.14;
//    if (r2 > r1) {
//        std::cout << "R1 must be > R2";
//    }
//    return p * pow(r2, 2);
//}
//
////task 13.3
//int square_of_circle3(int square_of_circle1, int square_of_circle2) {
//    return square_of_circle1 - square_of_circle2;
//}
//
////task 13
//void square_of_circles(int r1, int r2) {
//    std::cout << square_of_circle1(r1, r2) << square_of_circle2(r1, r2) << square_of_circle3(r1, r2);
//}
//
////task 14.1
//int radius_of_circle(int l) {
//    double p = 3.14;
//    return l / (2 * p);
//}
//
////task 14.2
//int square_of_limited_circle(int l) {
//    double p = 3.14;
//    int r = radius_of_circle(l);
//    return p * pow(r, 2);
//}
//
////task 14
//void radius_and_square_of_circle(int l) {
//    std::cout << radius_of_circle(l) << square_of_limited_circle(l);
//}
//
////task 15.1
//int diameter_of_limiter_circle(double s) {
//    double p = 3.14;
//    return sqrt(s / p * 4);
//}
//
////task 15.2
//int length_of_limiter_circle(double s) {
//    double p = 3.14;
//    int d = diameter_of_limiter_circle(s);
//    return p * d;
//}
//
//// task 15
//void diameter_and_length_of_limiter_circle(double s) {
//    std::cout << diameter_of_limiter_circle(s) << length_of_limiter_circle(s);
//}
//
////task 16
//int twodots(int x1, int x2) {
//    return fabs(x2 - x1);
//}
//
////task 17
//int lenOtr(int a, int b, int c) {
//    int ac = a + c;
//    int bc = b + c;
//    return ac = bc;
//}
//
////task 18
//int lengthOtr(int a, int b, int c) {
//    if (a < c < b) {
//        std::cout << "C must be between A and C";
//    }
//    int ac = a + c;
//    int bc = b + c;
//    return ac + bc;
//}
//
////task 19.1
//
//int perimeter_of_point_rectangle(int x1, int x2, int y1, int y2) {
//    if (x1 > x2 && y1 > y2) {
//        std::cout << "x2 and y2 must be > x1 and y2";
//    }
//    int xy1 = x1 + y1;
//    int xy2 = x2 + y2;
//    double d = xy2 - xy1;
//    double a = sqrt(d) / 2;
//    double p = a * 4;
//    return p;
//}
//
////task 19.2
//int square_of_point_rectalnge(int x1, int x2, int y1, int y2) {
//    if (x1 > x2 && y1 > y2) {
//        std::cout << "x2 and y2 must be > x1 and y2";
//    }
//    int xy1 = x1 + y1;
//    int xy2 = x2 + y2;
//    double d = xy2 - xy1;
//    double a = sqrt(d) / 2;
//    return pow(a, 2);
//}
//
//
////task 19
//void rectPoint(int x1, int x2, int y1, int y2) {
//    std::cout << perimeter_of_point_rectangle(x1, x2, y1, y2) << square_of_point_rectalnge(x1, x2, y1, y2);
//}
//
////task 20
//int pointLength(int x1, int x2, int y1, int y2) {
//    if (x1 > x2 && y1 > y2) {
//        std::cout << "x2 and y2 must be > x1 and y1";
//    }
//    double xy1 = x1 + y1;
//    double xy2 = x2 + y2;
//    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//}
//
////task 21.1
//int perimeter_of_point_triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
//    if (x1 > x2 && y1 > y2 && x1 > x3 && y1 > y3) {
//        std::cout << "x2 and y2 and x3 and y3 must be > x1 and y1";
//    }
//    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//    double b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
//    double c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
//    return a + b + c;
//}
//
////task 21.2
//int square_of_point_triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
//    if (x1 > x2 && y1 > y2 && x1 > x3 && y1 > y3) {
//        std::cout << "x2 and y2 and x3 and y3 must be > x1 and y1";
//    }
//    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//    double b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
//    double c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
//    double half_perimeter = (a + b + c) / 2;
//    return sqrt(half_perimeter * (half_perimeter - a) * (half_perimeter - b) * (half_perimeter - c));
//}
//
////task 21
//int pointTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
//    std::cout << perimeter_of_point_triangle(x1, y1, x2, y2, x3, y3) << square_of_point_triangle(x1, y1, x2, y2, x3, y3);
//    return 0;
//}
//
//
////task 22
//int swipe(int A, int B) {
//    int t = A;
//    A = B;
//    B = t;
//    std::cout << "A = ", A, "B = ", B;
//    return A, B;
//}
//
////task 23
//int swipe2(int A, int B, int C) {
//    int t = C;
//    C = B;
//    B = A;
//    A = t;
//    std::cout << "A = ", A, "B = ", B, "C = ", C;
//    return A, B, C;
//}
//
////task 24
//int swipe3(int A, int B, int C) {
//    int t = B;
//    C = A;
//    B = C;
//    A = t;
//    std::cout << "A = ", A, "B = ", B, "C = ", C;
//    return A, B, C;
//}
//
////task 25
//int whatFunction1(int x) {
//    int y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
//    return 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
//}
//
////task 26
//int whatFunktion2(int x) {
//    int y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
//    return 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
//}
//
////task 27.1
//int degree_of_a_in_2(int a) {
//    int a_in_2 = a * a;
//    return a_in_2;
//}
//
////task 27.2
//int degree_of_a_in_4(int a) {
//    int a_int_4 = degree_of_a_in_2(a) * degree_of_a_in_2(a);
//    return a_int_4;
//}
//
////task 27.3
//int degree_of_a_in_8(int a) {
//    int a_in_8 = degree_of_a_in_4(a) * degree_of_a_in_4(a);
//    return a_in_8;
//}
//
////task 27
//int degreeOfA(int A) {
//    std::cout << degree_of_a_in_2(a) << degree_of_a_in_4(a) << degree_of_a_in_8(a);
//    return 0;
//}
//
////task 28.1
//int degree_of_a_in_3(int a) {
//    int a_in_3 = degree_of_a_in_2(a) * a;
//    return a_in_3;
//}
//
////task 28.2
//int degree_of_a_in_5(int a) {
//    int a_in_5 = degree_of_a_in_3(a) * degree_of_a_in_2(a);
//    return a_in_5;
//}
//
////task 28.3
//int degree_of_a_in_10(int a) {
//    int a_in_10 = degree_of_a_in_5(a) * degree_of_a_in_5(a);
//    return a_in_10;
//}
//
////task 28.4
//int degree_of_a_in_15(int a) {
//    int a_in_15 = degree_of_a_in_5(a) * degree_of_a_in_10(a);
//    return a_in_15;
//}
//
////task 28
//int degreeOfA2(int A) {
//    std::cout << degree_of_a_in_2(a) << degree_of_a_in_3(a) << degree_of_a_in_5(a) << degree_of_a_in_10(a) << degree_of_a_in_15(a);
//    return 0;
//}
//
////task 29
//int degreesToRadians(double a) {
//    double p = 3.14;
//    if (a < 0 || a > 360) {
//        std::cout << "a must be > 0 and < 360";
//    }
//    double rad = ((a * 180) / p) / a;
//    return rad;
//}
//
////task 30
//int radiansToDegrees(double a) {
//    double p = 3.14;
//    if (a < 0 || a > 2 * p) {
//        std::cout << "a must be > 0 and < 2 pi";
//    }
//    double rad = (a * 180) / p;
//    double aRad = rad * a;
//    return aRad;
//}
//
////task 31
//int fahrenheit_to_celsius_converter(double t) {
//    return (t - 32) * 5 / 9;
//}
//
////task 32
//int celsius_to_fahrenheit_converter(double t) {
//    return (t + 32) / 5 / 9;
//}
//
////task 33
//int candies_count(int a, int y, int x) {
//    return 0;
//}
