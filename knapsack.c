#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int max(int a, int b)
{
    if (a>b) return a;
    return b;
}

int knapsack(int w, int weights[], int val[], int n)
{
    //base case
    if (n == 0 || w ==0)
    {
        return 0;
    }
    if (weights[n-1] > w)
    {
        return knapsack(w, weights, val, n-1);
    }
    else
    {
        return max(val[n-1] + knapsack(w-weights[n-1], weights, val, n-1), knapsack(w, weights,val,n-1));
    }
}

int main()
{
    int val[] = {3, 4, 5, 6 };
    int weights[] = {2, 3, 4, 5 };
    int w = 8, n = 4;

    printf(
        "Maximum value that can be put in knapsack: %d\n",
        knapsack(w, weights, val, n));

    return 0;
}