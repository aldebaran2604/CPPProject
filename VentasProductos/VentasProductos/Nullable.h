#pragma once
#include <cstddef>
#include <stdexcept>

template <typename T>
class Nullable final
{
public:
	//Constructores
	Nullable();
	Nullable(const T& value);
	Nullable(std::nullptr_t nullpointer);

	//Métodos
	bool HasValue() const;
	const T& GetValueOrDefault() const;
	const T& GetValueOrDefault(const T& def) const;
	bool TryGetValue(T& value) const;

	//Operadores
	const Nullable<T>& operator=(const Nullable<T>& value);
	const Nullable<T>& operator=(const T& value);
	const Nullable<T>& operator=(std::nullptr_t nullpointer);
	T* operator->();
	const T* operator->() const;
	T& operator*();
	const T& operator*() const;

	//Clases propiedad
	class NullableValue final {
	public:
		//Propiedad de la clase Nullable
		friend class Nullable;
		NullableValue Value;

		//Operadores
		NullableValue& operator=(const NullableValue&) = delete;
		operator const T& () const;
		const T& operator*() const;
		const T* operator&() const;
		// https://stackoverflow.com/questions/42183631/inability-to-overload-dot-operator-in-c
		const T* operator->() const;

		//Operadores genericos
		template <typename T2>
		friend bool operator==(const Nullable<T2>& op1, const Nullable<T2>& op2);

		template <typename T2>
		friend bool operator==(const Nullable<T2>& op, const T2& value);

		template <typename T2>
		friend bool operator==(const T2& value, const Nullable<T2>& op);

		template <typename T2>
		friend bool operator==(const Nullable<T2>& op, std::nullptr_t nullpointer);

		template <typename T2>
		friend bool operator!=(const Nullable<T2>& op1, const Nullable<T2>& op2);

		template <typename T2>
		friend bool operator!=(const Nullable<T2>& op, const T2& value);

		template <typename T2>
		friend bool operator!=(const T2& value, const Nullable<T2>& op);

		template <typename T2>
		friend bool operator==(std::nullptr_t nullpointer, const Nullable<T2>& op);

		template <typename T2>
		friend bool operator!=(const Nullable<T2>& op, std::nullptr_t nullpointer);

		template <typename T2>
		friend bool operator!=(std::nullptr_t nullpointer, const Nullable<T2>& op);
	private:
		//Propiedades
		bool m_hasValue;
		T m_value;

		//Constructores
		NullableValue();
		NullableValue(const T& value);

		//Métodos
		void checkHasValue() const;
	};
};
