#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Ingrese valor ");
    scanf("%d", &n);

    while (n <= 100) {
        sum += n;
        printf("Ingrese valor ");
        scanf("%d", &n);
    }

    printf("La suma de los numeros ingresados es: %d\n", sum);
    return 0;
}
