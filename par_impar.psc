Algoritmo par_impar
	Definir nums Como Entero
    Dimension nums[10]
    Definir i Como Entero
	
    // Leer los 10 números 
    Para i <- 1 Hasta 10 Hacer
        Escribir "Introduce número ", i,":"
        Leer nums[i]
    FinPara
	
    // Recorrer y determinar si cada número es par o impar
    Para i <- 1 Hasta 10 Hacer
        Si nums[i] MOD 2 = 0 Entonces
            Escribir nums[i], " es par."
        SiNo
            Escribir nums[i], " es impar."
        FinSi
    FinPara
FinAlgoritmo
