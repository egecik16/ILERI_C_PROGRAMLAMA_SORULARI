#include<stdio.h>
int main()
{
    double uyumasuresi;
    double yas;

    printf("yasinizi ve uyuma surenizi giriniz");
    scanf("%lf %lf",&yas,&uyumasuresi);
    double toplamuyuma=yas*365*uyumasuresi;
    double oran=(100*toplamuyuma)/(365*yas*24);
    printf("toplam uyuma sureniz %.20g saat\n",toplamuyuma);
    printf("hayatinizin yuzde %5.0f kadarini uykuda gecirdiniz",oran);
    return 0;
}
