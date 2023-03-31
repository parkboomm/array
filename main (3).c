/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int var1 = 10;
    float var2 = 3.14;
    char var3 = 'A';

    printf("Valores:\n");
    printf("Vetor: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nVar1: %d\nVar2: %f\nVar3: %c\n", var1, var2, var3);

    printf("\nEnderecos:\n");
    printf("Vetor: ");
    for (int i = 0; i < 5; i++) {
        printf("%p ", (void *)&vetor[i]);
    }
    printf("\nVar1: %p\nVar2: %p\nVar3: %p\n", (void *)&var1, (void *)&var2, (void *)&var3);

    return 0;
}
}
