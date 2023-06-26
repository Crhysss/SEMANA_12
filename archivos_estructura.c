#include <stdio.h>

struct alumno
{
    char nombre[30];
    char direccion[50];
    char carrera[30];
    int edad;
    float promedio;
};

int main() {
    struct alumno datos[5];
    int i = 0;

    FILE *archivo = fopen("estudiantes.txt", "w"); // Abre el archivo en modo escritura

    fputs("Ingrese los datos del alumno\n", stdout);

    for(i = 0; i < 5; i++) {
        printf("\nAlumno %d\n\n", i + 1);

        fputs("Nombre:\n", stdout);
        fgets(datos[i].nombre, sizeof(datos[i].nombre), stdin);
        fputs("Direccion:\n", stdout);
        fgets(datos[i].direccion, sizeof(datos[i].direccion), stdin);
        fputs("Carrera:\n", stdout);
        fgets(datos[i].carrera, sizeof(datos[i].carrera), stdin);
        fputs("Edad:\n", stdout);
        scanf("%d", &datos[i].edad);
        getchar(); // Consume el carácter de nueva línea residual
        fputs("Promedio:\n", stdout);
        scanf("%f", &datos[i].promedio);
        getchar(); // Consume el carácter de nueva línea residual
        
        // Escribe los datos del estudiante en el archivo
        fprintf(archivo, "Alumno %d\n", i + 1);
        fprintf(archivo, "Nombre: %s", datos[i].nombre);
        fprintf(archivo, "Direccion: %s", datos[i].direccion);
        fprintf(archivo, "Carrera: %s", datos[i].carrera);
        fprintf(archivo, "Edad: %d\n", datos[i].edad);
        fprintf(archivo, "Promedio: %.2f\n\n", datos[i].promedio);
    }

    fclose(archivo); // Cierra el archivo

    fputs("Datos ingresados\n\n", stdout);

    for(i = 0; i < 5; i++) {
        printf("\nAlumno %d\n\n", i + 1);
        printf("Nombre: %s", datos[i].nombre);
        printf("Direccion: %s", datos[i].direccion);
        printf("Carrera: %s", datos[i].carrera);
        printf("Edad: %d\n", datos[i].edad);
        printf("Promedio: %.2f\n", datos[i].promedio);
    }

    return 0;
}
