//1.Write a Program in C to traverse a linear array.
#include <stdio.h>

int main() {
    int arr[100], n, i;

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Traversing the array (display elements)
    printf("\nTraversed Array Elements:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

/*Output:

Enter the number of elements in the array: 5
Enter 5 elements:
Element [0]: 10
Element [1]: 20
Element [2]: 30
Element [3]: 40
Element [4]: 50

Traversed Array Elements:
arr[0] = 10
arr[1] = 20
arr[2] = 30
arr[3] = 40
arr[4] = 50
*/
