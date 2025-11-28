#include <bits/stdc++.h>
using namespace std;

int main()  {
    double x, y, z;
    cin >> x >> y >> z;

    double base = 2.0 * x + y - z;
    double exponente = 2.0 * x + y - z;
    double numerador = 7.0 + pow(base, exponente);
    double resultado = numerador / base;

    cout << fixed << setprecision(6) << resultado;
    return 0;
}