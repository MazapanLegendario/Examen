#pragma once
#include <iostream>

using namespace std;

enum Departamento{
	MATEMATICAS, //0
	FISICA, //1
	SISTEMAS, //2
	BIOLOGIA //3
};

class CCursos {
	//Declaraci�n de atributos
private:
	const double MINIMA = 1.5;
	const int MAXIMA = 5;
	string codigo;
	string nombre;
	int creditos;
	double nota;
	Departamento departamento;

	//Declaraci�n de m�todos
public:
	//Constructor
	CCursos(string pCodigo, string pNombre, int pCreditos, Departamento pDepartamento);
	//Analizadores
	string darCodigo();
	string darNombre();
	int darCreditos();
	double darNota();
	Departamento darDepartamento();
	bool calificado();
	//Modificador
	void asignarNota(double pNotaNueva);
};