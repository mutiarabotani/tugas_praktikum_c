#include <stdio.h>

int main()
{
    int suhuCelcius;
    float suhuFahrenheit,suhuReamur;
    
    printf("Masukan suhu dalam celcius:");
    scanf("%d",&suhuCelcius);
    
    suhuFahrenheit=(suhuCelcius * 9/5)+32;
    suhuReamur=suhuCelcius * 4/5;
    
    printf("Suhu dalam Fahrenheit:%.2f\n",suhuFahrenheit);
    printf("Suhu dalam Reamur:%.2f\n",suhuReamur);
    
    return 0;
    
}
    
