#include "Empleado.h"
#include <iostream>

//Llamado de los constructores con y sin parametros
Empleado::Empleado(){

	numEmpleado = std::rand() % NUMERO_MAXIMO;

}

Empleado::Empleado( const std::string& nombre, int anosExp, float salarioBase): nombre(nombre), anosExp(anosExp),salarioBase(salarioBase){


	numEmpleado = std::rand() % NUMERO_MAXIMO;



}
//LLamado de los metodos 


//Aumenta el salario del empleado

float Empleado::aumentaSalario(const int *anosExp){
	
	float aumenta1 = 0;
	float suma = 0;

	if (*anosExp > 1 && *anosExp < 3) {

		aumenta1 = getSalarioBase() * ( *anosExp * 0.02);

	


		suma = getSalarioBase() + aumenta1;

	}

	if (*anosExp >= 3 ) {

		aumenta1 = getSalarioBase() * (*anosExp * 0.05);


		suma = getSalarioBase() + aumenta1;

	}


	return suma;
}

//Verifica si nesecita revision 
void Empleado::revisionAle(bool *flagRevision){

	if (rand() % 2 == 0) {


		*flagRevision = true;

	}

	else *flagRevision = false;

}

//Meotdo para mostrar por pantalla 
std::string Empleado::reporteEmpleado() {

	std::string report = " ";

	std::string aleatorio = " ";

	if (getFlagRevision() == true) {

		aleatorio = "Si";
	}
	else aleatorio = "No";


	report = report + "El Empleado #[" + std::to_string(getNumEmpleado()) + "]\n \t Nombre[" + getNombre() + "]\n \t Anos de Experiencia["
		+ std::to_string(getAnosExp()) + "]\n \t Salario Inicial[" + std::to_string(getSalarioBase()) + "]\n \t Salario Acumulado["
		+ std::to_string(aumentaSalario(&anosExp)) + "]\n \t Necesita Revision[" + aleatorio + "]";


	return report;
		
}

//LLamado de los metodos set y get

std::string Empleado::getNombre(){

	return nombre;

};

int Empleado::getNumEmpleado(){

	return numEmpleado;

};

int Empleado::getAnosExp(){

	return anosExp;

};

float Empleado::getSalarioBase() {

	return salarioBase;

};

bool Empleado::getFlagRevision(){

	return flagRevision;

};

void Empleado::setNombre(std::string n){

	Empleado::nombre = n;
};

void Empleado::setNumEmpleado(int& ne){

	Empleado::numEmpleado = ne;

};

void Empleado::setAnosExp(int ae){

	Empleado::anosExp = ae;

};

void Empleado::setSalarioBase(float sb){

	Empleado::salarioBase = sb;
};

void Empleado::setFlagRevision(bool r){

	Empleado::flagRevision = r;
};
