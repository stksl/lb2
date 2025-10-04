#include "Longlong.h"
#include <iostream>

using namespace std;
int main()
{
    Longlong f = Longlong(1);
    Longlong s = Longlong(-15, 100);

    f.Display();
    s.Display();
    cout << "\tAddition:\n";

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