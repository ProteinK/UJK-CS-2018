#include <stdio.h>

int main() {
    /* int (integer) pozwala na przechowywanie liczb calkowitych (1, 2, 100, -5) */
    int a = 5;
    /* float (floating-point number) pozwala na przechowywanie liczb rzeczywistych do 6 miejsc po przecinku */
    /* uwaga: piszemy 3.14 a nie 3,14 */
    float pi = 3.14;
    /* char (character) przechowuje jeden znak */
    char litera = 'g';

    printf("a = %d; ", a);
    printf("pi = %f", pi);
    printf("\n");
    printf("pi = %.2f \n", pi);
    printf("litera = %c\n", litera);

    return 0;
}
