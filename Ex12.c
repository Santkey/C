#include <stdio.h>
#include <stdlib.h>

long silnia (int x)
{
    long wynik = 1; 
    while(x > 1)
    {
        wynik *= x;
        x--;
    }
    return wynik;
}

long silniaRekurencja (int x)
{
    if(x == 1)
    {
        return 1;
    }
    else
    {
        return x * silniaRekurencja(x - 1);
    }
    
}

int main()
{
    const int LICZBA = 15;
    printf("Wynik : %d\n", silnia(LICZBA));
    printf("Wynik : %d\n", silniaRekurencja(LICZBA));
    return 0;
}