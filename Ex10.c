#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Struktura
    {
        short liczbaShort; // 16 bitów = 2 bajty
        int liczbaInt; // 32 bity = 4 bajty
    }mojaStruktura;

    mojaStruktura.liczbaShort =12345;
    mojaStruktura.liczbaInt = 1234567;

    printf("Rozmiar Struktury: %d\n", sizeof(mojaStruktura));
    printf("Short: %d\n",mojaStruktura.liczbaShort);
    printf("Int: %d\n\n",mojaStruktura.liczbaInt);

union Unia
{
    short liczbaShort[2]; // 16 bitów = 2 bajty
    int liczbaInt; // 32 bity = 4 bajty
}mojaUnia;

    mojaUnia.liczbaShort[0] = 12345;
   // mojaUnia.liczbaInt = 1234567; 

    printf("Rozmiar Unii: %d\n", sizeof(mojaUnia));
    printf("Short: %d\n",mojaUnia.liczbaShort[1]);
    printf("Int: %d\n",mojaUnia.liczbaInt);


    return 0;
}