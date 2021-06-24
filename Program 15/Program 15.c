#include<stdio.h>
int main()
{
    double toefl;
    double kpds;
    double les;
    char *disiplinsucu;
    double notortalamasi;
    double mulakatpuan;

    printf("lutfen mulakat puaninizi giriniz");
    scanf("%lf",&mulakatpuan);

    printf("lutfen not ortalamanizi giriniz");
    scanf("%lf",&notortalamasi);

    printf("lutfen TOEFL notunuzu giriniz");
    scanf("%lf",&toefl);

    printf("lutfen KPDS notunuzu giriniz");
    scanf("%lf",&kpds);

    printf("lutfen LES notunuzu giriniz");
    scanf("%lf",&les);
    duzeltme:

    printf("lutfen disiplin sucunuz olup olmadiginizi giriniz (v=var,y=yok)\n");
    scanf("%s",&disiplinsucu);

    if(disiplinsucu=!'y'||'v'){
            printf("lutfen v(var) veya y(yok) ifadelerinden birini giriniz");
        goto duzeltme;
    }


    if((les>70||notortalamasi>=3)&&(mulakatpuan>=60) &&(kpds>=70||toefl>=220))

        printf("A universitesine giris yapabilirsiniz\n");

        else

        printf("A universitesine giris yapamazsiniz\n");

    if((les>=50||notortalamasi>=2.5) && (mulakatpuan>=70) && (kpds>=60||toefl>=180&&disiplinsucu=='y'))
        printf("B universitesine girebilirsiniz\n");
    else
        printf("B universitesine yarrak girersiniz\n");

    if((les>=40 || notortalamasi>=2.2 ) && (mulakatpuan>=80) && (kpds>=85||toefl>=250))
        printf("C universitesine giris yapabilirsiniz\n");
    else
        printf("C universitesine yarrak giris yaparsiniz");
    return 0;






}
