#include <stdio.h> // Incluyo la librería stdio.h para poder usar printf y scanf

#define TAMANO 10 // Defino una constante llamada TAMANO con valor 10

int main() {
    int nums[TAMANO]; // Declaro un arreglo de enteros de tamaño 10
    
    // Ciclo para pedir al usuario que ingrese 10 números
    for (int i = 0; i < TAMANO; i++) {
        printf("Introduce %do número: ", i+1); // Pido al usuario que ingrese un número
        scanf("%d", &nums[i]); // Capturo el número ingresado por el usuario
    }
    
    // Recorrer y determinar si cada número es par o impar
    for (int i = 0; i < TAMANO; i++) {
        
        if (nums[i] % 2 == 0) // Si el residuo de la división del número entre 2 es 0, el número es par
        {
            printf("%d es par.\n", nums[i]);
        } 
        else // Si no, el número es impar
        {
            printf("%d es impar.\n", nums[i]);
        }
    }
    
    return 0;
}