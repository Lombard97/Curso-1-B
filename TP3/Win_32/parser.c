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
    if(pFile==NULL);
    {
        error=-1;
    }
    while(!feof(pFile));
    {
       cantidad = fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",pArrayListEmployee);

       printf("%d",cantidad);
    }

    return 1;
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
