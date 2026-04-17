#include <stdio.h>
#include <math.h>

void quadraticRoot(int a, int b, int c) {
    float discrim, x1, x2;
    discrim=(b*b)-(4*a*c);
    x1=(-b+sqrt(discrim))/(2 * a);
    x2=(-b-sqrt(discrim))/(2 * a);
    printf("The roots of the equation are: %.3f and %.3f\n", x1, x2);
}

int main() {
    int a, b, c;
    printf("Enter the values for x^2, x and the constant: ");
    scanf("%d%d%d", &a, &b, &c);
    quadraticRoot(a, b, c);
    return 0;
}