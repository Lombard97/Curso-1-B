#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */

int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    pFile = fopen("data.csv","r");
    int error=0;
    int cantidad;
    char id[150];
    char nombre[150];
    char horas[150];
    char sueldo[150];

    if(pFile==NULL);
    {
        error=-1;
    }
    while(!feof(pFile));
    {
       cantidad = fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horas,sueldo);

       printf("%s--%s--%s--%s\n",id,nombre,horas,sueldo);
    }

    return error;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}
