#include <stdio.h>
#include <stdlib.h>
struct czlowiek
{
  char *imie;
  int wiek;
  float wzrost;
}adam, jakub, dawid;
int main()
{
    struct czlowiek jan;
    
    jan.imie ="Jan";
    jan.wiek = 15;
    jan.wzrost = 1.79;

    printf("%s wiek: %d wzrost: %.2f\n",jan.imie, jan.wiek, jan.wzrost);

    adam.imie ="Adam";
    adam.wiek = 16;
    adam.wzrost = 1.89;

    printf("%s wiek: %d wzrost: %.2f\n",adam.imie, adam.wiek, adam.wzrost);
    jakub.imie ="Jakub";
    jakub.wiek = 19;
    jakub.wzrost = 1.9;

    printf("%s wiek: %d wzrost: %.2f\n",jakub.imie, jakub.wiek, jakub.wzrost);
    dawid.imie ="Dawid";
    dawid.wiek = 21;
    dawid.wzrost = 1.81;

    printf("%s wiek: %d wzrost: %.2f\n",dawid.imie, dawid.wiek, dawid.wzrost);
    
    return 0;
}