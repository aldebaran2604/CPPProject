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
	 * @brief A�o de nacimiento
	*/
	int anioNacimineto;
	/**
	 * @brief Mes de nacimiento
	*/
	int mesNacimiento;
	/**
	 * @brief D�a de nacimiento
	*/
	int diaNacimiento;
	/**
	 * @brief Contrase�a de acceso del usuario
	*/
	std::string password;

	/**
	 * @brief Constructor por defecto
	*/
	MUsuario();
};