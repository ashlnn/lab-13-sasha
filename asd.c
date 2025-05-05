#include <stdio.h>
#include <conio.h>

double product(int n) {
    if (n == 1)
        return 1.0 / 2.0;
    else
        return ((double)n / (n + 1)) * product(n - 1);
}

int main() {
    int N;
    double p;
    printf("Enter N: ");
    scanf("%d", &N);

    p = product(N);

    printf("Product p = %.10f\n", p);
    getch();
    return 0;
}
