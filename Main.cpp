#include "Empleado.h"
#include<iostream>

int main() {
	//Creacion del objeto para llamar a los metodos de la clase

	Empleado empleado[3];

	empleado[0].setNombre("Mike");
	empleado[0].setAnosExp(2);
	empleado[0].setSalarioBase(1200000);

	empleado[1].setNombre("Sebastian");
	empleado[1].setAnosExp(3);
	empleado[1].setSalarioBase(1600000);

	empleado[2].setNombre("Carolina");
	empleado[2].setAnosExp(8);
	empleado[2].setSalarioBase(1800000);


	for (int cuenta = 0; cuenta < 3; cuenta++) {

		std::cout << empleado[cuenta].reporteEmpleado() << std::endl;

	}
	


	
	
	
	return 0;
}
