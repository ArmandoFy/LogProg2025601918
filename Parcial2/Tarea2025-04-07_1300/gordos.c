#include <stdio.h>

int main() {

    float peso, estatura, imc;

    printf("Ingrese el peso (kg): ");
    scanf("%f", &peso);

    printf("Ingrese la estatura (m): ");
    scanf("%f", &estatura);

    imc = peso / (estatura * estatura);

    if (imc <= 18.4) {
        printf("bajo peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("normal\n");
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("sobrepeso\n");
    } else if (imc >= 30.0 && imc <= 34.9) {
        printf("obesidad clase 1\n");
    } else if (imc >= 35.0 && imc <= 39.9) {
        printf("obesidad clase 2\n");
    } else if (imc >= 40.0 && imc <= 64.9) {
        printf("obesidad clase 3\n");
    } else {
        printf("GGs\n");
    }

    return 0;
}
