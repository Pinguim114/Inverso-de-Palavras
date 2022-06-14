#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[61], auxstring[61];
    int i, j, n; //variaveis para auxilio

    printf("Digite uma palavra: ");
    scanf("%s", &string);

    n = strlen(string);

    j = n - 1;
    for (i = 0; i < n; i++)
    {
        auxstring[i] = string[j];
        j = j - 1;
    }
    auxstring[i] = '\0';
    printf("O inverso da palavra eh: %s", auxstring);
    return 0;
}