/***********************************************
Materia:	Gráficas Computacionales
Fecha:		14 de Agosto del 2017
Autor:		A01375843 Isaac Hinojosa Padilla
************************************************/
#include <iostream>


//ejercicio 1
int PerimetroRectangulo(int base, int altura)
{
	int r;
	r = base * 2 + altura * 2;
	return r;
}

//ejercicio 2
float AreaTriangulo(float base, float altura)
{
	float r;
	r = (base * altura) / 2;
	return r;
}

//ejercicio 3
int Mayor(int numero1, int numero2, int numero3)
{
	int max;
	max = numero1;
	if (numero2 > max)
		max = numero2;
	if (numero3 > max)
		max = numero3;
	return max;
}

//ejercicio 4
int Menor(int numero1, int numero2, int numero3)
{
	int menor;
	menor = numero1;
	if (numero2 < menor)
		menor = numero2;
	if (numero3 < menor)
		menor = numero3;
	return menor;
}

//ejercicio 5
void FilaEstrellas(int n)
{
	int counter = 0;
	while (counter != n) {
		if (counter == n - 1)
		{
			std::cout << "*" << std::endl;
		}
		else {
			std::cout << "*";
		}
		counter++;
	}
	
}

//ejercicio 6
void MatrizEstrellas(int n)
{
	int counter = 0;

	while (counter != n) {
		int otro = 0;
		while (otro!=n) {
			if (otro==n-1)
			{
				std::cout << "*" << std::endl;
			}
			else {
				std::cout << "*";
			}
			otro++;
		}
		counter++;
	}
}

//ejercicio 7
void PiramideEstrellas(int n)
{
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
	
}

//ejercicio 8
void FlechaEstrellas(int n)
{
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
	for (int i = n-1; i >= 1 ; --i) {
		for (int j = 1; j <= i; ++j) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
}

//ejercicio 9
void Fibonacci(int n)
{
	int counter = 1;
	int fibo = 1;
	int a = 1;
	int b = 1;
	std::cout << "0 ";
	std::cout << a << " ";
	while (counter != n) {
		std::cout << fibo << " ";
		fibo = a + b;
		a = b;
		b = fibo;
		counter++;
		if (counter == n) {
			std::cout << "\n";
		}
	}

}

//ejercicio 10
bool EsPrimo(int numero)
{
	int a = 0;
	for (int i = 1; i < (numero + 1); i++) {
		if (numero%i == 0) {
			a++;
		}
	}
	if (a != 2) {
		std::cout << "No es primo ";
	}
	else {
		std::cout << "Si es primo ";
	}
	return 0;
}

int main()
{
	int p;
	p = PerimetroRectangulo(5, 3);
	std::cout << "EJERCICIO_1: El perimetro del rectangulo es " << p << std::endl;
	float a;
	a = AreaTriangulo(5.0f, 3.0f);
	std::cout << "EJERCICIO_2: El area del triangulo es " << a << std::endl;
	int ma;
	ma = Mayor(5, 9, 1);
	std::cout << "EJERCICIO_3: El numero mas grande es  " << ma << std::endl;
	int me;
	me = Menor(5, 9, 1);
	std::cout << "EJERCICIO_4: El numero mas pequeno es  " << me << std::endl;
	std::cout << "EJERCICIO_5: " << std::endl;
	FilaEstrellas(5);
	std::cout << "EJERCICIO_6: " << std::endl;
	MatrizEstrellas(4);
	std::cout << "EJERCICIO_7:" << std::endl;
	PiramideEstrellas(6);
	std::cout << "EJERCICIO_8: " << std::endl;
	FlechaEstrellas(3);
	std::cout << "EJERCICIO_9: " << std::endl;
	Fibonacci(9);
	std::cout << "EJERCICIO_10: " << std::endl;
	bool primo1, primo2;
	primo1 = EsPrimo(79);
	primo2 = EsPrimo(52);
	std::cin.get();
	return 0;
}