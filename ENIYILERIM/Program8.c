#include<stdio.h>
int main()
{


    double saatlikucret;
    double calisilangunsayisi;
    double gundecalisilansaat;
    double aylikkazanc;


saatcalisma:

     printf("kac saat calisiyorsunuz?\n");
     scanf("%lf",&gundecalisilansaat);
     if(gundecalisilansaat>24){
        printf("lutfen gecerli bir saat dilimi giriniz\n");
        goto saatcalisma;}
     printf("saat basina kac para aliyorsunuz?\n");
     scanf("%lf",&saatlikucret);
     aylikcalisma:
     printf("ayda kac gun calisiyorsunuz ?\n");
     scanf("%lf",&calisilangunsayisi);
      if(calisilangunsayisi>31)
        {
            printf("lutfen gecerli gun sayisi giriniz\n");
            goto aylikcalisma;
        }

    aylikkazanc=saatlikucret*gundecalisilansaat*calisilangunsayisi;

     if(aylikkazanc<500)

        {
     double verilenvergi=0;
        printf("aylik verilen vergi parasi %.20g tl\n",verilenvergi);
        }
     else
        if(aylikkazanc>500&&aylikkazanc<700){
        double verilenvergi=aylikkazanc*1/5;
     printf("aylik verilen vergi parasi:%.20g tl\n",verilenvergi);}
     else
        if(aylikkazanc>700&&aylikkazanc<1000){
        double verilenvergi=aylikkazanc*7/100;
        printf("aylik verilen vergi parasi :%.20g tl\n",verilenvergi);}
     else
        if(aylikkazanc>1000&&aylikkazanc<1500){
        double verilenvergi=aylikkazanc/10;
        printf("verilen vergi parasi :%.20g tl",verilenvergi);}
     else
        if(aylikkazanc>1500){

        double verilenvergi=aylikkazanc*13/100;
     printf("aylik verilen vergi parasi %5.0f tl\n",verilenvergi);
}
printf("aylik %.20g tl kazaniyorsunuz",aylikkazanc);
     return 0;
}
