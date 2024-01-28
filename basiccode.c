#include <stdio.h>
int opcion;
int labor;
int dispositivo;
int mantenimiento;
int cuenta = 0;

int main()
{

    printf("Bienvenido al registro de cuenta del cliente.\n");
    do
    {
        printf("Selecciona una acción a realizar.\n");
        printf("1. Ingresar registro del cliente.\n");
        printf("2. Ver cuenta.\n");
        printf("3. Salir.\n");
        scanf("%d", &opcion);

        if (opcion == 1)
        {
            printf("Selecciona el labor a realizar.\n");
            printf("1. Mantenimiento.\n");
            printf("2. Limpieza.\n");
            scanf("%d", &labor);
            if (labor == 1)
            {
                printf("Que mantenimiento se va a realizar?\n");
                printf("1. Mantenimiento de HARDWARE.\n");
                printf("2. Mantenimiento de SOFTWARE.\n");
                printf("3. Formateo del dispositivo.\n");
                scanf("%d", &mantenimiento);
                if (mantenimiento == 1)
                {
                    printf("De que dispositivo se va ha realizar el mantenimiento?\n");
                    printf("1. Computadora.\n");
                    printf("2. Celular.\n");
                    scanf("%d", &dispositivo);
                }
                else if (mantenimiento == 2)
                {
                    printf("De que dispositivo se va ha realizar el mantenimiento?\n");
                    printf("1. Computadora.\n");
                    printf("2. Celular.\n");
                    scanf("%d", &dispositivo);
                }
                else if (mantenimiento == 3)
                {
                    printf("De que dispositivo se va ha realizar el mantenimiento?\n");
                    printf("1. Computadora.\n");
                    printf("2. Celular.\n");
                    scanf("%d", &dispositivo);
                }
            }
            else if (labor == 2)
            {
                printf("De que dispositivo se va ha realizar la limpieza?\n");
                printf("1. Computadora.\n");
                printf("2. Celular.\n");
                scanf("%d", &dispositivo);
            }
        }
        if (opcion == 2)
        {
            printf("El valor de la cuenta es de: $%d\n", cuenta);
            return 1;
        }

    } while (opcion != 3);
    return 0;
}