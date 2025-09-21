#include <iostream>
#include <string>
#include "Longlong.h"
using namespace std;

Longlong::Longlong() {
	this->Init();
}
Longlong::Longlong(long s, unsigned long us) {
	this->Init();
	_signed = s;
	_unsigned = us;
}

Longlong* Longlong::Init() {
	_signed = _unsigned = 0;
	return this;
}
void Longlong::Read() {
	cout << "Enter an integer value: ";
	cin >> _signed;
	cout << "Enter a positive integer value: ";
	cin >> _unsigned;
}
void Longlong::Display() {
	cout << "Integer value: " << _signed << endl;
	cout << "Positive integer value: " << _unsigned << endl;
}
string Longlong::toString() {
	return "Signed: " + std::to_string(_signed) + "\nUnsigned: " + std::to_string(_unsigned);
}

void Longlong::Add(Longlong* l) {
	this->_signed += l->_signed; this->_unsigned += l->_unsigned;
};
void Longlong::Subtract(Longlong* l) {
	this->_signed -= l->_signed; this->_unsigned -= l->_unsigned;
}
void Longlong::Multiply(Longlong* l) {
	this->_signed *= l->_signed; this->_unsigned *= l->_unsigned;
};
void Longlong::Divide(Longlong* l) {
	this->_signed /= l->_signed; this->_unsigned /= l->_unsigned;
}
void Longlong::Modulo(Longlong* l) {
	this->_signed %= l->_signed; this->_unsigned %= l->_unsigned;
}

void Longlong::Increment() {
	this->_signed++;
	this->_unsigned++;
}
void Longlong::Decrement() {
	this->_signed--;
	this->_unsigned--;
}
void Longlong::Negative() {
	this->_signed = -this->_signed;
}