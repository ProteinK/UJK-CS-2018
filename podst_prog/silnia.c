#include <stdio.h>

int main() {
    int n, silnia, i;
    silnia = 1;

    printf("Podaj n: ");
    scanf("%d", &n);

    /* petla od 2 do n */
    for(i = 2; i <= n; i++) {
        /* mnozymy silnie przez liczby od 2 do podanego n
           np. gdy n = 4
           s   i
           1 * 2 = 2
           2 * 3 = 6
           6 * 4 = 24
        */
        silnia *= i;  /* to samo co silnia = silnia * i */
    }

    printf("Silnia: %d\n", silnia);

    return 0;
}
