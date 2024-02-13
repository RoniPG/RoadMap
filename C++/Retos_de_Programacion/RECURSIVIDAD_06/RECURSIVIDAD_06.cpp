// @RoniPG

#include <iostream>

static int count=100;
static int result=1;
static int resultado=0;
static int resultado2=1;

void imprimirNumeros(){
	if ((count > -1) &&(count<101)){
		std::cout<<count<<","<<std::endl;
		count--;
		imprimirNumeros();
	}else{
		count = 0;
	}
}
int factorial(int a);
int fibonacci(int a);

int main (){
	/*
	 * EJERCICIO: Entiende el concepto de recursividad creando una funciÃ³n recursiva
	 * que imprima nÃºmeros del 100 al 0.
	 */
	imprimirNumeros();
	/*
	 * DIFICULTAD EXTRA (opcional): Utiliza el concepto de recursividad para: -
	 * Calcular el factorial de un nÃºmero concreto (la funciÃ³n recibe ese nÃºmero). -
	 * Calcular el valor de un elemento concreto (segÃºn su posiciÃ³n) en la sucesiÃ³n
	 * de Fibonacci (la funciÃ³n recibe la posiciÃ³n).
	 */
	fibonacci(6);
	factorial(6);


	return 0;
}
int factorial(int a){
	if (count < (a-1)) {
		result=result*(count +2);
		count++;
		factorial(a);
	}else {
		std::cout<<a<<"! = "<<result;
		count =0;
		return result;
	}
	return 0;
}
int fibonacci(int a){
	if (a==1) {
		std::cout<<0<<std::endl;
		return 0;
	}else if ((a==2)||(a==3)) {
		std::cout <<1<<std::endl;
		return 0;
	}else if (count+2<a) {
		int x;
		x=resultado2+resultado;
		resultado=resultado2;
		resultado2=x;
		count++;
		fibonacci(a);
	}else if (count+2>=a) {
		std::cout<<resultado2<<std::endl;
		count=0;
	}
	return 0;
}
