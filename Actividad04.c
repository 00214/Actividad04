#include <stdio.h>

void capturar_enteros()
{
    int enteros[5];
    int promedio = 0;
    int suma = 0;

    printf("Ingresa 5 numeros enteros\n");

    for (size_t i = 0; i < 5; i++) // Captura los 5 enteros 
    {
        scanf("%i",&enteros[i]);
    }
    for (size_t i = 0; i < 5; i++) // Imprime los 5 enteros
    {
        printf(" [%i] \n",enteros[i]);
    }
    for (size_t i = 0; i < 5; i++) // Suma de enteros en la posición i
    {
        suma = suma + enteros[i]; 
    }
    printf("Suma: %i \n",suma); // Imprime la suma de los enteros
    printf("Promedio: %.2f \n",suma/5.0); // Imprime el promedio de los enteros
}

int main() //Función Principal
{
    char opcion;
    char cadena[50];
    int muestra;

    do
    {
        printf("Actividad 04 / Registro de personajes\n\n");
        printf("1) Captura de numeros enteros\n");
        printf("2) Captura y muestra n veces la cadena\n");
        printf("3) Agregar personajes\n");
        printf("4) Mostrar Personajes\n");
        printf("0) Salir\n");
        scanf("%c",&opcion);

        switch (opcion)
        {
        case '1':
            capturar_enteros();
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
        
        default:
            break;
        }

        fflush(stdin);
    }while(opcion !='0');
    printf("Hasta pronto!\n");
    
    return 0;
}