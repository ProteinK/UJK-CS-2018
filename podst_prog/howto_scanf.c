#include <stdio.h>

int main() {
    int n;
    float a;

    printf("Podaj n: ");
    /* scanf uzywamy do zapisania wartosci podanej przez uzytkownika do danej zmiennej
       uwaga: W przeciwienstwie do printf, tutaj zmienna podajemy ze znakiem &
       oznaczenia zmiennych sa analogiczne do tych uzywanych w printf (z wyjatkami ktore nas teraz nie obchodza)
    */
    scanf("%d", &n);
    printf("n = %d\n", n);

    printf("Podaj a: ");
    scanf("%f", &a);
    printf("a = %f\n", a);

    return 0;
}
