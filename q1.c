#include <stdio.h>
#define SIZE 100

void create(int arr[], int *n) {
    printf("Enter number of elements: ");
    scanf("%d", n);
    printf("Enter elements:\n");
    for (int i = 0; i < *n; i++)
        scanf("%d", &arr[i]);
}

void display(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insert(int arr[], int *n) {
    int pos, val;
    printf("Enter position (0-%d): ", *n);
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &val);
    for (int i = *n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    (*n)++;
    printf("Element inserted.\n");
}

void delete(int arr[], int *n) {
    int pos;
    if (*n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Enter position to delete (0-%d): ", *n - 1);
    scanf("%d", &pos);
    for (int i = pos; i < *n - 1; i++)
        arr[i] = arr[i + 1];
    (*n)--;
    printf("Element deleted.\n");
}

void linearSearch(int arr[], int n) {
    int key, found = 0;
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Element not found.\n");
}

int main() {
    int arr[SIZE], n = 0, choice;
    do {
        printf("\n----- MENU -----\n");
        printf("1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: create(arr, &n); break;
            case 2: display(arr, n); break;
            case 3: insert(arr, &n); break;
            case 4: delete(arr, &n); break;
            case 5: linearSearch(arr, n); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 6);
    return 0;
}
