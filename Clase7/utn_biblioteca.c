/*
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn_biblioteca.h"

int validaNombre(char* string)
{
        char letra;
        int contadorLetras = -1;
        int i = 1;
        int tamanio;
        int respuesta=0;

        do
        {
            contadorLetras++;
            letra=string[i];

        }while (letra >= 'a' && letra <= 'z') ;

        tamanio=sizeof(string);
        if (tamanio==contadorLetras)
        {
            respuesta=1;
        }

        return respuesta;

}
*/
