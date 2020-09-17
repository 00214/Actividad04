#include <stdio.h>

int main()
{
    char opcion;
    char cadena[50];
    int muestra;

    do
    {


        printf("Actividad 04 / Registro de persoanjes\n\n");
        printf("1) Captura de enteros\n");
        printf("2) Captura y muestra n veces la cadena\n");
        printf("3) Agregar personajes\n");
        printf("4) Mostrar Personajes\n");
        printf("0) Salir\n");
        scanf("%c",&opcion);

        switch (opcion)
        {
        case '1':
            /* code */
            break;
        case '2':
            /* code */
            break;
            case '3':
            /* code */
            break;
            case '4':
            /* code */
            break;
        
        default: printf("No existe esta opcion");
            break;
        }

        fflush(stdin);
    }while(opcion !='0');
    
    return 0;
}