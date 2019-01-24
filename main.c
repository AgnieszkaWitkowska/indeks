/*sortowanie bąbelkowe
 * Agnieszka Witkowska SSINF 2018*/




#include <stdio.h>

int tab[8] = {7, 6, 5, 3, 2, 4, 1, 0}, i = 0, j = 0, t;

int main() {

    printf("Tablica przed posortowaniem:\n");
    for (i = 0; i < 8; i++) printf("%d  ", tab[i]);


    for (j; j < 8; j++) {
        for (i = 0; i < 8; i++) {
            if (tab[i] > tab[i + 1]) {
                t = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = t;
            }
        }
    }
    printf("\nTablica po posortowaniu: \n");
    for (i = 0; i < 8; i++) printf("%d ", tab[i]);
    return 0;
}
