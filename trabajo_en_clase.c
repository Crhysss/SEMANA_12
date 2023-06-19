#include <stdio.h>
struct alumno// no es una variable es un tipo de dato
{
    char nombre[30];
    char direccion[50];
    char carrera[30];
    int edad;
    float promedio;
};
int main(){
    struct alumno datos[5];
    int i=0;
    fputs("Ingrese los datos del alumno\n", stdout);
    for(i=0;i<5;i++){
        printf("Alumno %d\n", i+1);
        fputs("Nombre\n", stdout);
        gets(datos[i].nombre);
        fputs("Direccion\n", stdout);
        gets(datos[i].direccion);
        fputs("Carrera\n", stdout);
        gets(alumnos[i].carrera);
        fputs("Edad\n", stdout);
        
    }
}