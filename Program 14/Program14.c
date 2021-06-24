#include<stdio.h>
int main()

{
    double a,b,c,d,x;
     double islem;
    printf("LUTFEN SIRASIYLA a,b,c,d,x DEGERLERINI GIRINIZ\n");
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&x);



    if(x>0)
        {islem=a*x*x*x+b*x-c;
        printf("x buyuktur 0 islemi icin fonksiyonun cevabi:%5.0f",islem);}

    else


        if(x<0)
        {islem=a*x*x*x*x+b*x*x+c*x+d;
    printf("x kucuktur 0 islemi icin fonksiyonun cevabi:%5.0f",islem);}

        else

           {
             islem=d;
            printf("x 0'a esit islemi icin fonksiyonun cevabi%5.0f",d);


           }

        return 0;




}
