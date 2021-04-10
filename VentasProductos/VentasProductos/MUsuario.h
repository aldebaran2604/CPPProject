#pragma once
#include <string>

/**
 * @brief Modelo de la clase usuario para almacenar datos
*/
class MUsuario
{
public:
	/**
	 * @brief nombre
	*/
	std::string nombre;
	/**
	 * @brief Apellido paterno
	*/
	std::string apellidoPaterno;
	/**
	 * @brief Apellido Materno
	*/
	std::string apellidoMaterno;
	/**
	 * @brief Nombre del usuario(Alias)
	*/
	std::string nombreUsuario;
	/**
	 * @brief Correo electronico
	*/
	std::string correoElectronico;
	/**
	 * @brief Año de nacimiento
	*/
	int anioNacimineto;
	/**
	 * @brief Mes de nacimiento
	*/
	int mesNacimiento;
	/**
	 * @brief Día de nacimiento
	*/
	int diaNacimiento;
	/**
	 * @brief Contraseña de acceso del usuario
	*/
	std::string password;

	/**
	 * @brief Constructor por defecto
	*/
	MUsuario();
};