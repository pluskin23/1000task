

#include <stdio.h>
#include <iostream>
#include <cmath>

//task 1
int perimeter_count(int side_a) {
    return side_a * 4;
}

//task 2
int square_cout(int side_a) {
    return pow(side_a, 2);
}
//
////task3.1
//int perimeter(int a, int b) {
//    return 2 * (a + b);
//}
//
////task3.2
//int square(int a, int b) {
//    return a * b;
//}
//
////task 3
//void perimeterSquare(int a, int b) {
//    std::cout << square(a, b) << perimeter(a, b);
//}
//
////task 4
//int diameter(double d) {
//    double p = 3.14;
//    return  d * p;
//}
//
////task 5.1
//int v_of_cube(int a) {
//    return pow(a, 3);
//}
//
////task 5.2
//int square_of_cube(int a) {
//    return 6 * pow(a, 2);
//}
//
////task 5
//void lengthQub(int a) {
//    std::cout << v_of_cube(a) << square_of_cube(a);
//}
//
////task 6.1
//int v_of_parallelepiped(int a, int b, int c) {
//    return a * b * c;
//}
//
////task 6.2
//int square_of_parallelepiped(int a, int b, int c) {
//    return 2 * (a * b + b * c + a * c);
//}
//
////task 6
//int parallelepiped(int a, int b, int c) {
//    std::cout << v_of_parallelepiped(a, b, c) << "\t" << square_of_parallelepiped(a, b, c);
//    return 0;
//}
//
////task 7.1
//int length_of_circle(double R) {
//    double p = 3.14;
//    return 2 * p * R;
//}
//
////task 7.2
//int square_of_circle(double R) {
//    double p = 3.14;
//    return p * pow(R, 2);
//}
//
////task 7
//void lengthCirc(double R) {
//    std::cout << length_of_circle(R) << square_of_circle(R);
//}
//
////task 8
//int average(int a, int b) {
//    return (a + b) / 2;
//}
//
////task 9
//int geometricalAvg(int a, int b) {
//    return sqrt(a * b);
//}
//
////task 10.sum
//int sum_of_nonnull_numbers(int a, int b) {
//    if (a == 0 || b == 0) {
//        std::cout << "a and b must be != 0";
//    }
//    return a + b;
//}
//
////task 10.diff
//int diff_of_notnull_numbers(int a, int b) {
//    if (a == 0 && b == 0) {
//        std::cout << "a and b must != 0";
//    }
//    return a - b;
//}
//
////task 10.prod
//int prod_of_notnull_numbers(int a, int b) {
//    if (a == 0 && b == 0) {
//        std::cout << "a and b must != 0";
//    }
//    return a * b;
//}
//
////task 10.quot
//int quot_of_notnull_numbers(int a, int b) {
//    if (a == 0 && b == 0) {
//        std::cout << "a and b must != 0";
//    }
//    return a / b;
//}
//
////task 10
//void sum_diff_prod_qout_of_notnull(int a, int b) {
//    std::cout << sum_of_nonnull_numbers(a, b) << diff_of_notnull_numbers(a, b) << prod_of_notnull_numbers(a, b) << quot_of_notnull_numbers(a, b);
//}
//
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
//int perimeter_of_right_triangle(int a, int b,int hypotenuse_of_triangle) {
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
//    return y;
//}
//
////task 26
//int whatFunktion2(int x) {
//    int y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
//    return y;
//}
//
////task 27
//int degreeOfA(int A) {
//    int a = A * A;
//    int a1 = a * a;
//    int a2 = a1 * a1;
//    std::cout << a << "/t" << a1 << "/t" << a2;
//    return a, a1, a2;
//}
//
////task 28
//int degreeOfA2(int A) {
//    int a = A * A;
//    int a1 = a * A;
//    int a2 = a1 * a;
//    int a3 = a2 * a2;
//    int a4 = a3 * a2;
//    std::cout << a << "/t" << a1 << "/t" << a2 << "/t" << a3 << "/t" << a4;
//    return a, a1, a2, a3, a4;
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
//#endif /* util_h */
//
//
//#endif /* lab6_1_hpp */
