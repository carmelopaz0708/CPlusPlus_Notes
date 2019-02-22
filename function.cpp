/*
  function.cpp
  Functions segments blocks of code in your program. It allows the user to isolate specific tasks to specific areas around the program.   That way, the program is easier to debug. Plus, it looks nice.
*/

#include<iostream>

// Function prototypes. Required when creating new functions. Syntax is 'funcType funcName(dataType ...)'
double sum(double, double);
double dif(double, double);
double mul(double, double);
double quo(double, double);
void disp(double, double, double, double, double, double);

int main() {
    double val1, val2, sum_val, dif_val, mul_val, quo_val;
    std::cout << "Enter first variable: ";
    std::cin >> val1;
    std::cout << "Enter second variable: ";
    std::cin >> val2;
    std::cout << std::endl;
    
    sum_val = sum(val1, val2);
    dif_val = dif(val1, val2);
    mul_val = mul(val1, val2);
    quo_val = quo(val1, val2);
    
    disp(val1, val2, sum_val, dif_val, mul_val, quo_val);
}

double sum(double add1, double add2) {
    double x = add1 + add2;
    return x;
}

double dif(double dif1, double dif2) {
    double x = dif1 - dif2;
    return x;
}

double mul(double mul1, double mul2) {
    double x = mul1 * mul2;
    return x;
}

double quo(double quo1, double quo2) {
    double x = quo1 / quo2;
    return x;
}

void disp(double val1, double val2, double sum_val, double dif_val, double mul_val, double quo_val) {
    std::cout << val1 << " + " << val2 << " = " << sum_val << std::endl;
    std::cout << val1 << " - " << val2 << " = " << dif_val << std::endl;
    std::cout << val1 << " * " << val2 << " = " << mul_val << std::endl;
    std::cout << val1 << " / " << val2 << " = " << quo_val << std::endl;
    std::cout << std::endl;
}
