#include<stdio.h>
int main()
{
    double sayi1;
    double sayi2;

    printf("lutfen sirasiyla 2 sayi giriniz");
    scanf("%lf %lf",&sayi1,&sayi2);

    double geometrikortalama=sqrt(sayi1*sayi2);

    printf("geometrik ortalamalari:%f",geometrikortalama);

    return 0;
}
