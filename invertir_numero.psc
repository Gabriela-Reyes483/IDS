Algoritmo invertir_numero
    Definir num, invertido, digito Como Entero
    Escribir "Introduce un n�mero de 4 d�gitos:"
    Leer num
	
    invertido <- 0
	
    Mientras num > 0 Hacer
        digito <- num % 10
        invertido <- invertido * 10 + digito
        num <- Trunc(num / 10)
    FinMientras
	
    Escribir "El n�mero invertido es: ", invertido
FinAlgoritmo
