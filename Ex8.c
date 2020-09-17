#include <stdio.h>
#include <stdlib.h>

int tab[] = {1,5,9};

void modyfikuj(int *tab)
{
    *tab = 11;
    printf("%d\n",++tab);
} 
int main()
{
    modyfikuj(tab);
    printf("%d\n", tab[0]);
    return 0;
}