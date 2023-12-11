#include <stdio.h>
#include <math.h>    
int main()
{
    float a,t,sisi1,sisi2,sisi3,luas,keliling;
    
    //mengambil input panjang alas dan tinggi segitiga dari pengguna
    printf("Masukan panjang alas segitiga(dalam cm):");
    scanf("%f",a); 
    printf("masukan tinggi segitiga(dalam cm):");
    scanf("%f,t");
    
    //menghitung panjang sisi menggunakan teorema pyhtagoras
    sisi1 =sqrt((a*a)+(t*t));
    sisi2 =a;
    sisi3 =t;
    
    //menghitung luas segitiga
    luas =0.5*a*t;
    
    //menghitung keliling segitiga
    keliling =sisi1 + sisi2 + sisi3;
    
    //menampilkan hasil perhitungan
    printf("\nLuas segitiga:%.2fcm^2\n",luas);
    printf("\nKeliling segitiga:%.2fcm^2\n",keliling); 
    
    return 0;
}
    
    
