#include "Longlong.h"
#include <iostream>

using namespace std;
int main()
{
    Longlong f, s;
    f.Read();
    s.Read();

    cout << f.toString() << " + " << s.toString() << " = " << (f + s).toString() << endl;
    cout << f.toString() << " - " << s.toString() << " = " << (f - s).toString() << endl;
    cout << f.toString() << " * " << s.toString() << " = " << (f * s).toString() << endl;
    cout << f.toString() << " / " << s.toString() << " = " << (f / s).toString() << endl;

    system("pause");
}