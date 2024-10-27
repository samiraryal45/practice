#include <stdio.h>

typedef struct {
    double real;
    double imag;
} Complex;

void displayComplex(Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    Complex c1 = {3.0, 4.0};  // Initialize a complex number
    displayComplex(c1);       // Display the complex number

    return 0;
}

