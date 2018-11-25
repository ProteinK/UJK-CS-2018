#include <stdio.h>

int main() {
    /* int (integer) pozwala na przechowywanie liczb calkowitych (1, 2, 100, -5) */
    int a = 5;
    /* float (floating-point number) pozwala na przechowywanie liczb rzeczywistych do 6 miejsc po przecinku */
    /* uwaga: piszemy 3.14 a nie 3,14 */
    float pi = 3.14;
    /* char (character) przechowuje jeden znak */
    char litera = 'g';

    /* printf uzywamy do wypisawania czegos do standardowego wyjscia (np. terminala) */

    /* mozemy po prostu wypisac jakikolwiek tekst */
    printf("Jakis tekst");
    /* \n dziala tak samo jak nacisniecie klawisza enter (przechodzimy do nowej linii)
       \t daje nam to samo co nacisniecie klawisza tab (pewien odstep)
    */
    printf("\n");
    /* mozemy rowniez wypisywac zmienne razem z tekstem 
       Uzywamy specjalnego znacznika za ktory podstawiana jest zmienna ktora podajemy po przecinku
       za %d podstawiany jest int, za %f float, a za %c char
    */
    printf("a = %d \n", a);
    printf("pi = %f \n", pi);
    /* mozemy rowniez podac ile liczb po przecinku chcemy w przypadku float 
       %f.2 - 2 liczby po przecinku, %f.3 - 3 itd
    */
    printf("pi = %.2f \n", pi);
    printf("litera = %c \n", litera);

    return 0;
}
