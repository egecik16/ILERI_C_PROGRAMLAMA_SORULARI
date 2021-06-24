#include<stdio.h>
int main()
{
    double saatlikkazanc;
    double calismasaati;
    double biraydacalisilangun;
    printf("sirasiyla saatlik ucreti, kac saat calistigini ve bir ayda kac gun calistiginizi yaziniz");
    scanf("%lf %lf %lf",&saatlikkazanc,&calismasaati,&biraydacalisilangun);
    double aylikkazanc=saatlikkazanc*calismasaati*biraydacalisilangun;
    printf("aylik kazanc=%5.0f",aylikkazanc);
    return 0;
}
