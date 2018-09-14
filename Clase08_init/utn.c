#include <stdio_ext.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "utn.h"
#define BUFFER 500

/**
    utn_getNombre :
    @param
    @param
    @return
*/
static int isValidNombre(char* pBuffer,int limite)
{
    int retorno=0;
    if(pBuffer!=NULL && limite >0)
    {
       retorno=1;

        /// ya esta validado que no tenga \n poruqe ya se valido
        ///se usa && porque valida solo la parte izquierda
        for(i=0;i<limite && pBuffer[i]!='\0';i++)
        {
            if(tolower(pBuffer[i]) < 'a' || tolower(pBuffer[i])>'z')
            {

            }

        }

    }





    return retorno;
}

/**
    utn_getNombre :
    @param
    @param
    @return
*/
static int getString(char* pBuffer, int limite)
{
    int retorno = -1;
    char bufferStr[BUFFER];
    int len;

    if (pBuffer !=NULL && limite >0)
    {
            __fpurge(stdin;
            fgets(bufferStr,limite,stdin);
            len = strlen(bufferStr);
            if(len!=(limite-1) || bufferStr[limite-2]=='\n')
                {
                    bufferStr[len-1]='\0';

                }

            retorno=0;
            strncpy(pBuffer,bufferStr,limite);
    }

    return retorno;
}


/**
    utn_getNombre :
    @param
    @param
    @return
*/
int utn_getNombre(  float* pNombre,int limite , char* msg,
                    char* msgErr, int reintentos)

{
    int retorno=-1;
    char bufferNombre[BUFFER];

    if(pNombre != NULL && limite > 0 && msg != NULL && msgErr != NULL &&  reintentos >=0)
    {
        do
        {
            reintentos--;
            printf("%s",msg);
            if (getString(bufferNombre, limite) && isValidNombre(bufferNombre) )
            {
               strncpy(pNombre,bufferNombre,limite);
               retorno=0;
               break;
            }
            else
            {
                printf("%s",msgErr);
            }
        }while (reintentos>=0);

    }

    return retorno;
}




















