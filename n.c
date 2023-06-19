#include <stdio.h>
int main()
{// ahi que inicializar la etsructura siempre
    struct alumno
    {
        char nombre[20];
        char direccion[20];
        char carrera[20];
        int edad;
        float promedio;
    } a1={"Juan","Centro","Software", 20, 9.1} ;//esta guardada en a1 la cual es una variable de tipo struct
    //como alumno a1; asi
    //nunca olvides el punto y coma
printf("Datos de alumno: \n");
printf("%s ",a1.nombre);
printf("%s ",a1.direccion);
printf("%s ",a1.carrera);
printf("%d ",a1.edad);
printf("%f ",a1.promedio);
    return 0;
}