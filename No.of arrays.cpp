#include <stdio.h>

int main() {
    int arr[1000];  // assuming maximum 1000 elements
    int count = 0, element;
    printf("Enter elements (enter -1 to stop):\n");
    while (1) {
        scanf("%d", &element);
        if (element == -1) break;
        arr[count++] = element;
    }
    printf("Number of elements entered = %d\n", count);
    return 0;
}
