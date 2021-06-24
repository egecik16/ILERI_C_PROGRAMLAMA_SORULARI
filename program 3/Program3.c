#include<stdio.h>
int main()

{
    double k1; //ilk kenar
    double k2; //ikinci kenar

    printf("sirasiyla ilk ve ikinci kenarýn kenar uzunluklarýný giriniz");
    scanf("%lf %lf",&k1,&k2);
    double hipotenus=sqrt(k1*k1+k2*k2);
    printf("hipotenus:%.20g",hipotenus);
    return 0;



}
