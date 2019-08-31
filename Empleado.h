
#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H


#include <string>
// Valor constante para el metodo random
const int NUMERO_MAXIMO = 100;

class Empleado {

	//Atributos protegidos
protected:

	std::string nombre;
	int numEmpleado;
	int anosExp;
	float salarioBase;
	bool flagRevision;

	//Metodos privados
private:
	
	float aumentaSalario(const int *);
	static void revisionAle(bool *);


	//Metodos publicos
public:
	//Constructores con y sin parametros

	Empleado();

	Empleado( const std::string &nombre, int anosExp, float salarioBase);

	std::string reporteEmpleado();


	// Metodos Set y Get
	std::string getNombre();

	int getNumEmpleado();

	int getAnosExp();

	float getSalarioBase();

	bool getFlagRevision();

	void setNombre(std::string);

	void setNumEmpleado(int&);

	void setAnosExp(int);

	void setSalarioBase(float);

	void setFlagRevision(bool);

};

#endif
