typedef struct
{
    int estado;
    int idPropietario;
    char nombre[20];
    char apellido[20];
    char direccion[30];
    char NumTarget[30];

}ePropietarios;



int initPropietario(ePropietarios[],int);

int idGenerator(ePropietarios[],int);

void cargarPropietario(ePropietarios[],int);

void modificarTarget(ePropietarios[],int);

void borrarPropietario(ePropietarios[],int);

void mostrarPropietarios(ePropietarios[],int);

void hardcodePropietario(ePropietarios[],int);

int validarNum(char[]);

int validarString(char[]);

int burbujeoMejoradoEPersonaXNombres(ePropietarios[],int,int);
