#include <stdio.h>
#include <math.h>

int main()
{
    float sisiAlas,sisiTinggi,sisiMiring;
    
    printf("Masukan panjang sisi alas segitiga(cm):");
    scanf("%f",&sisiAlas);
    
    
    printf("Masukan panjang sisi tinggi segitiga(cm):");
    scanf("%f",&sisiTinggi);
    
    sisiMiring=sqrt(pow(sisiAlas,2)+ pow(sisiTinggi,2));
    
    printf("Panjang sisi miring segitiga adalah:%.2fcm\n",sisiMiring);
    
    return 0;
    
}
    
