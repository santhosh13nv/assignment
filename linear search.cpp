#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index of the key if found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int n, key;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    int index = linearSearch(arr, n, key);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

