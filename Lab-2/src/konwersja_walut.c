#include <stdio.h>
int main(){
    float rate, amountPLN, amountUSD;

    printf("podaj kwote w PLN: ");
    scanf("%f", &amountPLN);

    printf("podaj konwersje USD/PLN: ");
    scanf("%f", &rate);

    amountUSD = amountPLN / rate;//oblicza kwote USD

    printf("Twoja kwota w USD: %.2f", amountUSD);
    return 0;
}
