#include <stdio.h>

int main() {
    int array[5]; 
    int i;
    printf("hay nhap 5 phan tu:\n");
    for (i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]); 
    }
    printf("Cac phan tu trong mang la:\n");
    for (i = 0; i < 5; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, array[i]);
    }
    return 0;
}

