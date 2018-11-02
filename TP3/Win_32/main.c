#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    FILE* pData;
    pData = fopen("Data.csv","r");
    int cantidad;
    int error;
    int option = 0;
    int i;
    /*printf("OPCIONES\n1-Cargar datos desde el archivo\n2-Cargar datos desde el archivo (modo binario)\n3-Dar de alta un empleado\n4-Salir");
    scanf("%d",&option);*/

    LinkedList* listaEmpleados = ll_newLinkedList();

    /*error = parser_EmployeeFromBinary(pData,listaEmpleados);*/

    cantidad = fscanf(pData,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",;

    printf("%d",cantidad);


    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
        }
    }while(option != 4);

    return 0;
}
