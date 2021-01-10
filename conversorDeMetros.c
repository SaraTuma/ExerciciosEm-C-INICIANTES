#include <stdio.h>

int main() {
    float m, dm, cm, mm, dam, hm, km;

    printf("-----------------------------------------\n");
    printf("\t\tCONVERSAR DE DISTÂNCIA\n");
    printf("-----------------------------------------\n");
    printf("Digite a sua distância em metros e tera o correspondente em: decímetros, centímetros e milímetros\n");

    printf("Metros: ");
    scanf("%f", &m);


    dam = m / 10;
    hm = dam / 10;
    km = hm / 10;

    dm = m * 10;
    cm = dm * 10;
    mm = cm * 10;

    printf("Tabela\n");
    printf("-----------------------------------------\n");
    printf("%.2f m ---> %.2f km\n", m, km);
    printf("%.2f m ---> %.2f hm\n", m, hm);
    printf("%.2f m ---> %.2f dam\n", m, dam);
    printf("%.2f m ---> %.2f dm\n", m, dm);
    printf("%.2f m ---> %.2f cm\n", m, cm);
    printf("%.2f m ---> %.2f mm\n", m, mm);
    printf("-----------------------------------------\n");
}