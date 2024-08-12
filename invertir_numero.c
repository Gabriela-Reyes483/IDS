#include <stdio.h> // Incluyo la librería stdio.h para poder usar printf y scanf

int main() {
    // Declaro las variables num, invertido y digito
    int num, invertido = 0, digito;
    
    // Pido al usuario que ingrese un número de 4 dígitos
    // printf("Introduce un número de 4 dígitos: ");
    // scanf("%d", &num); // Capturo el número ingresado por el usuario
    num = 1234;
    
    // Mientras el número sea mayor a 0
    while (num > 0) {
        digito = num % 10; // Obtengo el último dígito del número
        invertido = invertido * 10 + digito; // Construyo el número invertido
        num = num / 10; // Elimino el último dígito del número
    }
    
    // Imprimo el número invertido
    printf("El número invertido es: %d\n", invertido);
    
    return 0;
}