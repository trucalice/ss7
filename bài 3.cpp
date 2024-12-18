#include <stdio.h>

int main() {
    int arr[5] = {4,6,7,8,9}; 
    int hasEven = 0; 
    printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { 
            printf("%d ", arr[i]);
            hasEven = 1; 
        }
    }
    if (!hasEven) {
        printf("Mang khong chua so chan.\n");
    } else {
        printf("\n");
    }

    return 0;
}


