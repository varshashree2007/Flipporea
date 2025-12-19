#include <stdio.h>
#include <stdlib.h>

int main() {
    int cards[4] = {1, 2, 1, 2};
    int open[4] = {0, 0, 0, 0};
    int a, b, i, matched = 0;

    while (matched < 2) {
        system("cls");

        printf("Flip the Cards Game\n\n");

        for (i = 0; i < 4; i++) {
            if (open[i] == 1)
                printf("%d ", cards[i]);
            else
                printf("* ");
        }

        printf("\n\nEnter first position (1-4): ");
        scanf("%d", &a);
        printf("Enter second position (1-4): ");
        scanf("%d", &b);

        a--; b--;

        if (cards[a] == cards[b] && a != b) {
            open[a] = 1;
            open[b] = 1;
            matched++;
            printf("Matched!\n");
        } else {
            printf("Not matched!\n");
        }

        system("pause");
    }

    system("cls");
    printf("Congratulations! You won the game.\n");

    return 0;
}
