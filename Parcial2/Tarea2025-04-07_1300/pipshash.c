#include <stdio.h>
#include <string.h>

int main() {
    char pizza[20];
    char ingrediente[20];

    printf("que pizza quiere? vegetariana o no vegetariana?\n");
    scanf("%s", pizza);

    if (strcmp(pizza, "vegetariana") == 0) {
        printf("Ingredientes: pimiento y tofu\n");
    } else if (strcmp(pizza, "novegetariana") == 0) {
        printf("Ingredientes: peperoni, jamon y salmon\n");
    } else {
        printf("No tenemos madre\n");
    }

    printf("Escoge un solo ingrediente además de la mozzarella y el tomate que están en todas las pizzas:\n");
    scanf("%s", ingrediente);

    if (strcmp(ingrediente, "pimiento") == 0) {
        printf("Tu pizza es Vegetariana y llevará pimiento\n");
    } else if (strcmp(ingrediente, "tofu") == 0) {
        printf("Tu pizza es Vegetariana y llevará tofu\n");
    } else if (strcmp(ingrediente, "peperoni") == 0) {
        printf("Tu pizza es No Vegetariana y lleva peperoni\n");
    } else if (strcmp(ingrediente, "jamon") == 0) {
        printf("Tu pizza es No Vegetariana y lleva jamon\n");
    } else if (strcmp(ingrediente, "salmon") == 0) {
        printf("Tu pizza es No Vegetariana y lleva salmon\n");
    } else {
        printf("QUE NO HAY MADREEE\n");
    }

    return 0;
}
