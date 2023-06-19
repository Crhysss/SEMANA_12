#include <stdio.h>
struct alumno
/*Este programa por medio de estructuras permite ingresar datos de cinco estudiantes y mostralos es pantalla*/
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
//se usa la funcion puts y gets en vez de printf y scanf
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
//lo demás es uso de for e imprimir
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
