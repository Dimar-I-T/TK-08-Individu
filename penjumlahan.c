#include <stdio.h>

int main(){
    float a, b;
    printf("Masukkan angka pertama: ");
    scanf("%f", &a);
    printf("Masukkan angka kedua: ");
    scanf("%f", &b);
    printf("%.1f + %.1f = %.1f", a, b, a + b);
}