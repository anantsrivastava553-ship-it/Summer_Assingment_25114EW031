// Write a program to Frequency of an element.
#include <stdio.h>

int main() {
    int arr[50], n, num, i, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element whose frequency is to be found: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            count++;
        }
    }

    printf("Frequency of %d = %d", num, count);

    return 0;
}