#include <stdio.h>
#include <math.h> // Required for sqrt function

int main() {
    // Variables for equations
    double u, a, t, v;      // For V = u + at
    double s;               // For S = ut + 1/2 * a
    double b, c, T;         // For T = 2 * a + sqrt(b) + 9 * c

    // Input for the first equation: V = u + at
    printf("Enter the initial velocity (u): ");
    scanf("%lf", &u);
    printf("Enter the acceleration (a): ");
    scanf("%lf", &a);
    printf("Enter the time (t): ");
    scanf("%lf", &t);

    // Calculate V
    v = u + a * t;
    printf("The value of V = u + at is: %.2lf\n", v);

    // Input for the second equation: S = ut + 1/2 * a
    printf("Enter the displacement time (t) for S: ");
    scanf("%lf", &t);

    // Calculate S
    s = u * t + 0.5 * a * t * t;
    printf("The value of S = ut + 1/2 * at^2 is: %.2lf\n", s);

    // Input for the third equation: T = 2 * a + sqrt(b) + 9 * c
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);

    // Calculate T
    T = 2 * a + sqrt(b) + 9 * c;
    printf("The value of T = 2 * a + sqrt(b) + 9 * c is: %.2lf\n", T);

    return 0;
}
