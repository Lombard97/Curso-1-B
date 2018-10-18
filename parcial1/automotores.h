typedef struct
{
   int estado;
   char idPropietario[50];
   char patente[50];
   char marca[50];

}eAutomotores;

int initAutomotores(eAutomotores[],int);

void hardcodeAutomotores(eAutomotores[]);

int addAutomotores(eAutomotores[],int);

void mostrarAutomotores(eAutomotores[],int);

int generarHs();

int buscarAutomotoresLibre(eAutomotores[],int);

void stringUpgrade(char[]);

int calcularHs(eAutomotores[],int);

int validarNumAutos(char[]);

int validarStringAutos(char[]);
