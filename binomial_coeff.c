// C implementation to find
// Binomial Coefficient using recursion

#include <stdio.h>

// Returns value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k) {
    // k can not be grater then k so we return 0 here
    if (k > n)
        return 0;

    // base condition when k and n are equal or k = 0
    if (k == 0 || k == n)
        return 1;

    // Recursive add the value
    return binomialCoeff(n - 1, k - 1)
           + binomialCoeff(n - 1, k);
}

int main() {
    int n = 5, k = 2;
    printf("%d", binomialCoeff(n, k));
    return 0;
}