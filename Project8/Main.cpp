#include <iostream>

#include "Circle.h"
#include "Rectangle.h"
#include "Employee.h"
#include <fstream>

int main()
{
	std::cout << "Hello World Open GL" << std::endl;

	Circle circulo(2.0, "green");
	std::cout << circulo.GetRadius() << std::endl;

	Rectangle rectangulo(10, 5);
	std::cout << rectangulo.GetPerimeter() << std::endl;

	Employee empleado(1375843, "Isaac", "Hinojosa Padilla", 50);
	std::cout << empleado.GetAnnualSalary() << std::endl;

	std::cin.get();

	return 0;
}