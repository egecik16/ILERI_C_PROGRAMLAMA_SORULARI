#include<stdio.h>
int main()
{
    char birim;

    double derece;


    printf("lutfen derece giriniz\n");

    scanf("%lf",&derece);
    birimduzeltme:

    printf("lutfen birim giriniz (f=fahrenheit, c=celsius)\n");
    scanf(" %c",&birim);
    if(birim=='f')

    {
        double celsiusdeger=(derece-32)*5/9;
        printf("derecenin celsiusa degeri:%5.0f \n",celsiusdeger);
    }

    else
        if(birim=='c')
           {
            double fahrenheitdeger=(derece*5/9)+32;
            printf("derecenin fahrenheit degeri:%5.0f\n",fahrenheitdeger);
            }
    else
        if(birim!='c'||'f')
       {
           printf("lutfen duzgunce birim yaziniz gotunuzu oklava ile yogurmak zorunda kalirim\n");
            goto birimduzeltme;}

            return 0;
}
