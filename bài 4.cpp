#include <stdio.h>
#include <stdlib.h> // Thu vi?n cho hàm malloc và free

int main() {
    int n; // S? ph?n t? c?a m?ng
    int *arr; // Con tr? d? luu m?ng d?ng

    // Yêu c?u ngu?i dùng nh?p s? ph?n t? c?a m?ng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    // C?p phát b? nh? d?ng cho m?ng
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) { // Ki?m tra c?p phát thành công
        printf("Khong du bo nho de cap phat!\n");
        return 1;
    }

    // Nh?p giá tr? cho t?ng ph?n t? c?a m?ng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In ra các ph?n t? trong m?ng
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, arr[i]);
    }

    // Gi?i phóng b? nh?
    free(arr);

    return 0;
}

