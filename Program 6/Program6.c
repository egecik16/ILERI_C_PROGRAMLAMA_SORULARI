#include<stdio.h>
int main()

{
    double kupkenar;
    double p=3;
    printf("lutfen kubun bir kenar uzunlugunu giriniz");
    scanf("%lf",&kupkenar);
    double kubunhacmi=kupkenar*kupkenar*kupkenar;
    double kurehacim=(4*p*kupkenar*kupkenar*kupkenar)/3;
    double oran=kurehacim/kubunhacmi;
    printf("oran:%5.0f",oran);
    return 0;

}
