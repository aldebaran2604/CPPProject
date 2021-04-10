#pragma once
#include <string>
#include <ctime>
#include <iostream>
#include <iomanip>

class DateTime
{
public:

	//Propiedades
	std::string stringDateTime;
	std::string stringDate;
	std::string stringTime;
	int anio;
	int mes;
	int dia;
	int diaSemana;
	int horas;
	int minutos;
	int segundos;

	//Constructores
	DateTime();
	DateTime(std::string stringDateTime);
	DateTime(int anio, int mes, int dia, int horas, int minutos, int segundos);

private:
	void Inicializador();
	std::ostream& operator<<(std::ostream& o);
};
