#include<stdio.h>
int main()
{
    float p=3;
    float yaricap;
    float yukseklik;




    printf("lutfen yaricap giriniz");
    scanf("%f",&yaricap);
    printf("lutfen yukseklik giriniz");
    scanf("%f",&yukseklik);
    double hacim=yaricap*yaricap*p*yukseklik;
    printf("silindirin hacmi:%lf",hacim);



    return 0;
}
