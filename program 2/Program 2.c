#include<stdio.h>
int main()
{

     double sayi1;
     double sayi2;
     double sayi3;
     double sayi4;
     double sayi5;
     double sayi6;
     double sayi7;
     double sayi8;
     double sayi9;
     double sayi10;

    printf("lutfen bastan sonra kadar tum notlari giriniz\n");
    scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf",&sayi1,&sayi2,&sayi3,&sayi4,&sayi5,&sayi6,&sayi7,&sayi8,&sayi9,&sayi10);
    double toplam=sayi1+sayi2+sayi3+sayi4+sayi5+sayi6+sayi7+sayi8+sayi9+sayi10;
    double ortalama=toplam/10;
    printf("\n\nortalama:%.20g",ortalama);






    return 0;
}
