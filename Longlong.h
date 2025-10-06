#pragma once
#include <string>
/*
18. Створити клас Longlong для роботи із цілими числами з 64 біт. Число повинне
бути представлено двома полями: long — старша частина, unsigned long —
молодша частина. Повинні бути реалізовані арифметичні операції, які
присутні в C++ ( без присвоювання), і порівняння.
*/
using namespace std;
class Longlong
{
private:
	long _signed;
	unsigned long _unsigned;
public:
	Longlong(long s, unsigned long us); // створює об'єкт з полями _signed = s та _unsigned = us
	Longlong(unsigned long us); // створює об'єкт з полями _signed = us та _unsigned = us
	Longlong(); // створює об'єкт з нульовими значеннями полей

	Longlong* Init();
	void Read();
	void Display();
	string toString();

	// бінарні операції 
	void Add(Longlong* l);
	Longlong operator +(Longlong other); // перевантаження операції додавання

	void Subtract(Longlong* l);
	Longlong operator -(Longlong other);// перевантаження операції віднімання

	void Multiply(Longlong* l);
	Longlong operator *(Longlong other);// перевантаження операції множення

	void Divide(Longlong* l);
	Longlong operator /(Longlong other);// перевантаження операції ділення

	void Modulo(Longlong* l);

	// унарні операції
	void Increment();
	void Decrement();

	void Negative();
};