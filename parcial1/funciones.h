typedef struct
{
    int estado;
    int idPropietario;
    char nombre[20];
    char apellido[20];
    char direccion[30];
    long int NumTarget;

}ePropietarios;

int initPropietario(ePropietarios[],int);

int idGenerator(ePropietarios[],int);

void cargarPropietario(ePropietarios[],int);

void modificarTarget(ePropietarios[],int);

void borrarPropietario(ePropietarios[],int);

void mostrarPropietarios(ePropietarios[],int);

void hardcodePropietario(ePropietarios[],int len);
