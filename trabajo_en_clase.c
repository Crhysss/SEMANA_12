#include <stdio.h>
struct alumno
{
    char nombre[30];
    char direccion[50];
    char carrera[30];
    int edad;
    float promedio;
};

int main(){
    struct alumno datos[5];
    int i = 0;

    fputs("Ingrese los datos del alumno\n", stdout);

    for(i = 0; i < 5; i++){
        printf("\nAlumno %d\n\n", i + 1);

        fputs("Nombre:\n", stdout);
        fgets(datos[i].nombre, sizeof(datos[i].nombre), stdin);
        fputs("Direccion:\n", stdout);
        fgets(datos[i].direccion, sizeof(datos[i].direccion), stdin);
        fputs("Carrera:\n", stdout);
        fgets(datos[i].carrera, sizeof(datos[i].carrera), stdin);
        fputs("Edad:\n", stdout);
        scanf("%d", &datos[i].edad);
        fputs("Promedio:\n", stdout);
        scanf("%f", &datos[i].promedio);
        fflush(stdin);
    }

    fputs("Datos ingresados\n\n", stdout);

    for(i = 0; i < 5; i++){
        printf("\nAlumno %d\n\n", i + 1);
        printf("Nombre: %s", datos[i].nombre);
        printf("Direccion: %s", datos[i].direccion);
        printf("Carrera: %s", datos[i].carrera);
        printf("Edad: %d\n", datos[i].edad);
        printf("Promedio: %.2f\n", datos[i].promedio);
        fflush(stdin);
    }

    return 0;
}
