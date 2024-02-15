#include <stdio.h>

int main() {
    int a;
    printf("Enter a four-digit number: ");
    scanf("%d", &a);

    int digits[4];
    int org = a;

    // Store the digits in the array
    for (int i = 0; i < 4; i++) {
        int k = a % 10;
        a /= 10;
        digits[i] = k;
    }

    printf("All possible numbers:\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i != j) {
                for (int k = 0; k < 4; k++) {
                    if (k != i && k != j) {
                        for (int l = 0; l < 4; l++) {
                            if (l != i && l != j && l != k) {
                                printf("%d%d%d%d\n", digits[i], digits[j], digits[k], digits[l]);
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}




