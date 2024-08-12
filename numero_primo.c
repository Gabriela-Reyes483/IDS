#include <stdio.h> // Incluyo la librería stdio.h para poder usar printf y scanf

int main() {
    int n, i, contador = 0; // Declaro las variables n, i y contadors
    
    printf("Introduce un número: "); // Pido al usuario que ingrese un número
    
    scanf("%d", &n); //capturo el número ingresado por el usuario
    
    //Recorro los números desde 1 hasta numero ingresado por el usuario
    for (i = 1; i <= n; i++) {
        // Si el número ingresado por el usuario es divisible por i, incremento el contador
        if (n % i == 0) {
            contador++;
        }
    }
    
    // Si el contador es igual a 2, el número es primo
    //Es decir, si el número es divisible por 1 y por sí mismo
    if (contador == 2) {
        printf("%d es un número primo.\n", n);
    }
    // Si el contador es diferente de 2, el número no es primo 
    else {
        printf("%d no es un número primo.\n", n);
    }
    
    return 0;
}