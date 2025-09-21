#include "Longlong.h"
#include <iostream>
int main()
{
    Longlong f;
    f.Read();
    Longlong s;
    s.Read();

    cout << "\tAddition:";

    f.Add(&s); 
    f.Display();

    cout << "\tSubtraction: \n";
    f.Subtract(&s);
    f.Display();

    cout << "\tMultiplication: \n";
    f.Multiply(&s);
    f.Display();
    cout << "\tDivision: \n";
    f.Divide(&s);
    f.Display();
    cout << "\tModulo: \n";
    f.Modulo(&s);
    f.Display();
    cout << "\tIncrement on first: \n";
    f.Increment();
    f.Display();
    cout << "\tDecrement on first: \n";
    f.Decrement();
    f.Display();
    cout << "\tNegative first: \n";
    f.Negative();
    f.Display();

    cout << f.toString();

    system("pause");
}