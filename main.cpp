#include <bits/stdc++.h>
using namespace std;
int main() 
{
    double x, y;
    cin>> x >> y;

    double z=(( (x*x*x + x*x) / (y*y - y) ) - (x / y + 5)) / (2 * x);

    cout<< z;

 return 0;
}