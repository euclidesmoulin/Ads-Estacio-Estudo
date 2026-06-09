#include <stdio.h>
// é uma tabuada onde voce vai digitar o numero que vai multiplicar até 10
int main (){

    int numero, i;

    printf("Digite um numero para calcularmos \n");
    scanf("%d", &numero);

    for (i = 0; i<= 10; i++)
    {

        printf("%d x %d = %d \n", i, numero, i * numero);

    }
    return 0;
    
}