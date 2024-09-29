#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        sum += num;
    }

    printf("Sum = %d\n", sum);

    return 0;
}