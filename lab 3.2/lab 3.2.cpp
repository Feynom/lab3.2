
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, a, b, c, f;

    cout << "Введіть значення 'x':";
    cin >> x;
    cout << endl;
    cout << "Введіть значення 'a':";
    cin >> a;
    cout << endl;
    cout << "Введіть значення 'b':";
    cin >> b;
    cout << endl;
    cout << "Введіть значення 'c':";
    cin >> c;
    cout << endl;

    if (x < 5 && c != 0)
        f = -a * x * x - b;
    if (x > 5 && c == 0)
        f = (x - a) / x;
    if (!(x < 5 && c != 0) && !(x > 5 && c == 0))
        f = -x / c;
    
    cout << "1)Відповідь:" << f << endl;

    if (x < 5 && c != 0)
        f = -a * x * x - b;
    else
        if (x > 5 && c == 0)
            f = (x - a) / x;
        else
            f = -x / c;

    cout << "2)Відповідь:" << f << endl;

    cin.get();
    return 0;
}