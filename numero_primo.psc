Algoritmo numero_primo
	Definir n, i, contador Como Entero
    Escribir "Introduce un n�mero:"
    Leer n
    contador <- 0
	
    Para i <- 1 Hasta n Hacer
        Si n % i = 0 Entonces
            contador <- contador + 1
        FinSi
    FinPara
	
    Si contador = 2 Entonces
        Escribir n, " es un n�mero primo."
    SiNo
        Escribir n, " no es un n�mero primo."
    FinSi	
FinAlgoritmo
