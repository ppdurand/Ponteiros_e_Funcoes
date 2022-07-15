#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1, num2, resultado;

    if (argc != 4)
    {
        printf("Numero de parametros: %d\n", argc);
        puts("Somente/Apenas 4 parametros sao necessarios!\n");
        exit(1);
    }

        if (*argv[2] == 'x')
    {
        printf("= %d", atoi(argv[1]) * atoi(argv[3]));
    }
    else if (*argv[2] == '+')
    {
        printf("= %d", atoi(argv[1]) + atoi(argv[3]));
    }

    return 0;
}
