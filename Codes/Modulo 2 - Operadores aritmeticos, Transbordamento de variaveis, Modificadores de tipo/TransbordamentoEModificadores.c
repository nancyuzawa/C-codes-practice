#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int overflow1 = 2147483647;
    int overflow2 = overflow1 + 1;
    int underflow1 = -2147483648;
    int underflow2 = underflow1 - 1;

    unsigned int positivo = 2147483647;
    unsigned int unsigned1 = positivo + 1000000002;
    signed int numero = 32767;
    signed int numero2 = numero - 65535;
    long int maxLong = 2147483647;
    long int minLong = maxLong - 4294967294;
    short int maxShort = 32767;
    short int minShort = maxShort - 65534;

    printf("\tCaso de \"overflow\":\n  Maior número de inteiros que pode ser alocado: %d",overflow1);
    printf("\n  Erro gerado ao últrapassar o limite: %d",overflow2);

    printf("\n\n\tCaso de \"underflow\":\n  Menor número de inteiros que pode ser alocado: %d",underflow1);
    printf("\n  Erro gerado ao últrapassar o limite: %d",underflow2);
;
    printf("\n\n\n\tModificadores de tipo:");
    printf("\n  Unsigned (+): %u",unsigned1);
    printf("\n  Signed (+/-): máx: %i  min: %i", numero, numero2);
    printf("\n  Long (+/-): máx: %i  min: %i", maxLong, minLong);
    printf("\n  Short (+/-): máx: %i  mín: %i\n\n", maxShort, minShort);
    return 0;
}
