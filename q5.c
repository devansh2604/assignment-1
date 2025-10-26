#include <stdio.h>
int main() {
    int a[10][10], r, c, i, j, sumRow, sumCol;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++) {
        sumRow = 0;
        for (j = 0; j < c; j++)
            sumRow += a[i][j];
        printf("Sum of row %d = %d\n", i + 1, sumRow);
    }

    for (j = 0; j < c; j++) {
        sumCol = 0;
        for (i = 0; i < r; i++)
            sumCol += a[i][j];
        printf("Sum of column %d = %d\n", j + 1, sumCol);
    }
    return 0;
}
