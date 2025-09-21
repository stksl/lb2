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
	Longlong(long s, unsigned long us);
	Longlong();
	Longlong* Init();
	void Read();
	void Display();
	string toString();

	// бінарні операції 
	void Add(Longlong* l);
	void Subtract(Longlong* l);
	void Multiply(Longlong* l);
	void Divide(Longlong* l);
	void Modulo(Longlong* l);

	// унарні операції
	void Increment();
	void Decrement();

	void Negative();
};

