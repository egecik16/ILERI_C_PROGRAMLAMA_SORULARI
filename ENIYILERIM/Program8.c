#include <stdio.h>

void ask_question(double *var, double min, double max, char *question, char *fail_text)
{
    printf("%s\n", question);
    scanf("%lf", var);
    while (*var > max && *var < min)
    {
        printf("%s\n", fail_text);
        scanf("%lf", var);
    }
}

int main()
{

    double saatlikucret = 7;
    double calisilangunsayisi;
    double gundecalisilansaat;
    double aylikkazanc;

    ask_question(&gundecalisilansaat, 1, 24, "kac saat calisiyorsunuz?", "lutfen gecerli bir saat dilimi giriniz");
    ask_question(&calisilangunsayisi, 1, 31, "ayda kac gun calisiyorsunuz", "lutfen gecerli gun sayisi giriniz");

    aylikkazanc = saatlikucret * gundecalisilansaat * calisilangunsayisi;
    double limits[] = {500, 700, 1000, 1500};
    int n = sizeof(limits) / sizeof(limits[0]);
    double rates[] = {0,
                      .05,
                      .07,
                      .1,
                      .13};

    int i = 0;
    for (; i < n; i++)
    {
        if (aylikkazanc < limits[i])
        {
            double verilenvergi = aylikkazanc * rates[i];
            printf("aylik verilen vergi parasi %.20g tl\n", verilenvergi);
            break;
        }
    }

    printf("aylik %.20g tl kazaniyorsunuz", aylikkazanc);
    return 0;
}
