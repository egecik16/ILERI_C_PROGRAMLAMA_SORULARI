#include<stdio.h>
int main()
{

    double sayi;
     short int pozitiftoplam=0;
     short int  negatiftoplam=0;
    int sayisayisi=0;


        baslangic:


    printf("lutfen sayi giriniz");
    scanf("%lf",&sayi);

    if(sayi>0){

        pozitiftoplam+=sayi;
        sayisayisi++;
            }

    else
        if(sayi<0){

        negatiftoplam+=sayi;
        sayisayisi++;}

        else
            sayisayisi++;

            if(sayisayisi==10)
        goto bitis;


        goto baslangic;

         bitis:
             printf("pozitif sayilarin toplami %hd	\n negatif sayilarin toplami %hd",pozitiftoplam,negatiftoplam);









    return 0;
}
