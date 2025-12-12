/// Insertion sort

#include <stdio.h>

int main() {
    int arr[5] = {12, 5, 7, 3, 10};
    int n = 5;

    // Insertion Sort starts from index 1 because a single element (index 0) is already "sorted"
    for (int i = 1; i < n; i++) {

        int temp = arr[i];   // The element we want to insert in the correct position
        int j = i - 1;      // Start comparing with the previous element

        /*
            Move elements of arr[0..i-1] that are greater than key
            to one position ahead of their current position.
            
            This loop creates space for the key by shifting bigger elements to the right.
        */
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j]; // Shift element to the right
            j--;                 // Move to the previous element
        }

        // Insert key at the correct position (j + 1)
        arr[j + 1] = temp;
    }

    // Printing the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
