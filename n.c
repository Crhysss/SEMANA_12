#include <stdio.h>
int main()
{// ahi que inicializar la etsructura siempre
    printf("")
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
printf("%s ,%s ,%s ,%d ,%.2f  ",a1.nombre, a1.direccion,a1.carrera,a1.edad, a1.promedio);

    return 0;
}