#include "DateTime.h"

DateTime::DateTime()
{
	this->Inicializador();
}

DateTime::DateTime(std::string stringDateTime)
{
	this->Inicializador();
}

DateTime::DateTime(int anio, int mes, int dia, int horas, int minutos, int segundos)
{
	this->Inicializador();
}

void DateTime::Inicializador()
{
	time_t t = time(NULL);

	struct tm buf;

	auto resultado = localtime_s(&buf, &t);

	this->stringDateTime = "21/02/2021 0:36:34";
	this->anio = 1900 + buf.tm_year;
	this->mes = 1 + buf.tm_mon;
	this->dia = buf.tm_mday;
	this->horas = buf.tm_hour;
	this->minutos = buf.tm_min;
	this->segundos = buf.tm_sec;
}

std::ostream& DateTime::operator<<(std::ostream& o)
{
	o << std::setw(2) << std::right;
	return o;
}