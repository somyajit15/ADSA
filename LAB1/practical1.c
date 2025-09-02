#include <stdio.h>
#include <math.h>

double fun1(int n) {
     return n * log2(n); 
    }
double fun2(int n) {
     return 12 * sqrt(n); 
    }
double fun3(int n) {
     return 1.0 / n; 
    }
double fun4(int n) {
     return pow(n, log2(n)); 
    }
double fun5(int n) {
     return (100 * n * n + 6 * n); 
    }
double fun6(int n) {
     return pow(n, 0.51); 
    }
double fun7(int n) {
     return (n * n - 324); 
    }
double fun8(int n) {
     return 50 * pow(n, 0.5); 
    }
double fun9(int n) {
     return log2(n); 
    }
double fun10(int n) {
     return (double)(2 * n * n * n); 
    }
double fun11(int n) {
     return pow(3, n); 
    }
double fun12(int n) {
     return pow(2, 2 * n); 
    }

int main() {
    int n = 1000; // test for large n
    printf("Comparing functions for n = %d\n", n);

    printf("n log n          = %.2f\n", fun1(n));
    printf("12 sqrt(n)       = %.2f\n", fun2(n));
    printf("1/n              = %.10f\n", fun3(n));
    printf("n^(log2 n)       = %.2f\n", fun4(n));
    printf("100n^2+6n        = %.2f\n", fun5(n));
    printf("n^0.51           = %.2f\n", fun6(n));
    printf("n^2-324          = %.2f\n", fun7(n));
    printf("50n^0.5          = %.2f\n", fun8(n));
    printf("log2 n           = %.2f\n", fun9(n));
    printf("2n^3             = %.2f\n", fun10(n));
    printf("3^n              = %.2e\n", fun11(n));
    printf("2^(2n)           = %.2e\n", fun12(n));

    return 0;
}