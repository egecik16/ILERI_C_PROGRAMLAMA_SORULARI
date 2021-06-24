#include<stdio.h>
int main()
{
    double yapilansatistanpara;
    int bolum;
    double saatlikucret=7;
    double calisilangun;
    double calisilansaat;
    double fazlaliksaat;

    baslangic:
printf("hangi bolumde calisiyorsunuz (1,2,3,4)\n");
scanf("%d",&bolum);

      switch(bolum)
      {
      case 1:

          printf("kac paralik satis yapiyorsunuz\n");
          scanf("%lf",&yapilansatistanpara);
        double aylikgelir=500+(yapilansatistanpara*13/100);
        printf("bu ayki kazanciniz:%5.0f\n",aylikgelir);
        break;

        case 2:


        printf("kac paralik satis yapiyorsunuz\n");
        scanf("%lf",&yapilansatistanpara);
        double aylikpara=yapilansatistanpara*22/100;
        printf("bu ayki kazanciniz:%5.0f\n",aylikpara);
        break;

        case 3:

            duzeltme:

            printf("bir gunde kac saat calisiyorsunuz\n");
            scanf("%lf",&calisilansaat);
            if(calisilansaat>24){
                printf("lutfen gecerli bir saat dilimi giriniz\n");
                goto duzeltme;}
                duzeltme1:
                printf("lutfen kac gun calistiginizi giriniz\n");
                scanf("%lf",&calisilangun);
                if(calisilangun>31)
                {
                    printf("lutfen gecerli bir gun dilimi giriniz");
                    goto duzeltme1;
                }
                double aylikucret=saatlikucret*calisilangun*calisilansaat;
                printf("aylik geliriniz:%5.0f",aylikucret);
                break;

        case 4:


            duzeltme5:

            printf("bir gunde kac saat calisiyorsunuz\n");
            scanf("%lf",&calisilansaat);
            if(calisilansaat>24){
                printf("lutfen gecerli bir saat dilimi giriniz\n");
                goto duzeltme5;}
                duzeltme3:
                printf("lutfen kac gun calistiginizi giriniz\n");
                scanf("%lf",&calisilangun);
                if(calisilangun>31)
                {
                    printf("lutfen gecerli bir gun dilimi giriniz\n");
                    goto duzeltme3;
                }
                if(calisilangun*calisilansaat>40)
{


                    double fazlaliksaat=calisilangun*calisilansaat-40;
                    double fazlalikpara=fazlaliksaat*3;
                    double maas=calisilangun*calisilansaat*saatlikucret;
                     fazlalikpara+=maas;
                printf("alik geliriniz:%5.0f",maas);}
                break;
        default:

            printf("lutfen gecerli bolum giriniz\n");
            goto baslangic;




            }

             return 0;
      }





