#include<stdio.h>
int main()
{
    double ortyurume;
    double yas;

    printf("sirasiyla bir gunde ortalama yurudugunuz mesafe(km) ve yasinizi giriniz");
    scanf("%lf %lf",&ortyurume,&yas);
    double toplamyurume=yas*365*ortyurume;
    double oran=toplamyurume/40000;
    printf("\t\t\nbugune kadar toplam %.20g km yol aldiniz \n\t",toplamyurume);
    printf("dunyanin yuzde %f kati kadar yurudunuz",oran);
    return 0;
}
