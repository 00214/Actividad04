#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <stdio.h>

struct personaje // Estructura
{
    char nombre[30];
    char tipo[30];
    float fuerza;
    int salud;
}personajes[5]; // Instancia para guardar los personajes 

unsigned int contador = 0;

void capturar_personajes() // Función capturar_personajes
{
    if (contador < 5)
    {
     printf("Nombre: ");
     scanf("%s", personajes[contador].nombre);
     printf("Tipo: ");
     scanf("%s", personajes[contador].tipo);
     printf("Fuerza: ");
     scanf("%f", &personajes[contador].fuerza);
     printf("Salud: ");
     scanf("%i", &personajes[contador].salud);
     contador++;
    }  
    else
    {
        printf("Arreglo de personajes lleno");
    }
}

void mostrar_personajes() // Función mostrar_personajes
{
    for (size_t i = 0; i < contador; i++)
    {
        printf("Nombre: %s\n",personajes[i].nombre);
        printf("Tipo: %s\n",personajes[i].tipo);
        printf("Fuerza: %.2f\n",personajes[i].fuerza);
        printf("Salud: %i\n",personajes[i].salud);
    }
}

#endif
