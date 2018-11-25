#include <stdio.h>

int main() {
    int n, silnia, i;
    silnia = 1;

    printf("Podaj n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        silnia *= i;
    }

    printf("Silnia: %d\n", silnia);

    return 0;
}
