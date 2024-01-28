#include <stdio.h>
int opcion;
int labor;
int dispositivo;
int mantenimiento;
int cuenta = 0;
char cliente[50];

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
            printf("Escribe el nombre del cliente.\n");
            scanf("%s", cliente);
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
                    if (dispositivo == 1)
                    {
                        cuenta += 40;
                    }
                    else if (dispositivo == 2)
                    {
                        cuenta += 35;
                    }
                }
                else if (mantenimiento == 2)
                {
                    printf("De que dispositivo se va ha realizar el mantenimiento?\n");
                    printf("1. Computadora.\n");
                    printf("2. Celular.\n");
                    scanf("%d", &dispositivo);
                    if (dispositivo == 1)
                    {
                        cuenta += 50;
                    }
                    else if (dispositivo == 2)
                    {
                        cuenta += 45;
                    }
                }
                else if (mantenimiento == 3)
                {
                    printf("De que dispositivo se va ha realizar el mantenimiento?\n");
                    printf("1. Computadora.\n");
                    printf("2. Celular.\n");
                    scanf("%d", &dispositivo);

                    if (dispositivo == 1)
                    {
                        cuenta += 8;
                    }
                    else if (dispositivo == 2)
                    {
                        cuenta += 10;
                    }
                }
            }
            else if (labor == 2)
            {
                printf("De que dispositivo se va ha realizar la limpieza?\n");
                printf("1. Computadora.\n");
                printf("2. Celular.\n");
                scanf("%d", &dispositivo);
                if (dispositivo == 1)
                {
                    cuenta += 30;
                }
                else if (dispositivo == 2)
                {
                    cuenta += 25;
                }
            } 
        }

        if (opcion==2 && cuenta==0)
        {
            printf("No se ha ingresado a ningun cliente.\n");
            return 1;
        }
        
        if (opcion == 2)
        {
            printf("El valor de la cuenta de %s es de: $%d\n", cliente, cuenta);
            return 1;
        }

    } while (opcion != 3);

    printf("Gracias por utilizar el software :)\n");
    return 0;
}