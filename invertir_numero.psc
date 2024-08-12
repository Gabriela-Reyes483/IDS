Algoritmo invertir_numero
    Definir num, invertido, digito Como Entero
    Escribir "Introduce un número de 4 dígitos:"
    Leer num
	
    invertido <- 0
	
    Mientras num > 0 Hacer
        digito <- num % 10
        invertido <- invertido * 10 + digito
        num <- Trunc(num / 10)
    FinMientras
	
    Escribir "El número invertido es: ", invertido
FinAlgoritmo
