#include "Cursos.h"

CCurso::CCurso(string pCodigo, string pNombre, int pCreditos, Departamento pDepartamento)
{
	codigo = pCodigo;
	nombre = pNombre;
	creditos = pCreditos;
	departamento = pDepartamento;
}

string CCurso::darCodigo()
{
	return codigo;
}

string CCurso::darNombre()
{
	return nombre;
}

int CCurso::darCreditos()
{
	return 0;
}

double CCurso::darNota()
{
	return 0.0;
}

Departamento CCurso::darDepartamento()
{
	return departamento;
}

bool CCurso::calificado()
{
	return false;
}

void CCurso::asignarNota(double pNotaNueva)
{
}