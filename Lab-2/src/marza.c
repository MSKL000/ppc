#include <stdio.h>
int main(){
    float sellingPrice, purchanseNet, marginPercent;
    printf("podaj cene zakupu netto: ");
    scanf("%f", &purchanseNet);
    printf("podaj marze (%): ");
    scanf("%f", &marginPercent);
    sellingPrice = purchanseNet * (1 + (marginPercent/100));
    printf("cena z marza: %.2fzl", sellingPrice);
    return 0;
}