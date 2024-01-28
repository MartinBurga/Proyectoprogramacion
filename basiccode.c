#include <stdio.h>
int opcion;

int main()
{

    printf("Bienvenido al registro de cuenta del cliente.\n");
    do
    {
        printf("Selecciona una acción a realizar.\n");
        printf("1. Ingresar registro del cliente.\n");
        printf("2. Ver registro de los clientes.\n");
        printf("3. Salir.\n");
        scanf("%d", &opcion);

    } while (opcion != 3);
    return 0;
}