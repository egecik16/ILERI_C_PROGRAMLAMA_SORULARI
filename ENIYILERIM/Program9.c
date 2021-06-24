#include<stdio.h>
int main()
{

  double sayi;
  double sayisayisi;

   int negatif=0;
   int pozitif=0;
   int sifir=0;


 baslangic:

        printf("lutfen 1 adet sayi girniz\n");
        scanf("%lf",&sayi);






        if(sayi>0){
            pozitif++;
             sayisayisi++;
             }

            else if (sayi<0)

            {negatif++;
            sayisayisi++;}

            else
            {
                sifir++;
                sayisayisi++;
            }


            if(sayisayisi==10)
            goto bitis;



            goto baslangic;
        bitis:

        printf("\n=========================\npozitif sayi sayisi %d \n=========================\nnegatif sayi sayisi %d \n=========================\nsifir sayisi %d\n========================= ",pozitif, negatif, sifir);

            return 0;



}
