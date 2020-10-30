#include <iostream>

using namespace std;

int main()
{
    int num, res1;
    float res2,res3;
    cout << "Ingresar un valor entero" << endl;
    cin >> num ;
    res1 = num/5;
    cout << "La quinta parte de " << num << " es " << res1 << endl;
    res2 = (num*res1)/5;
    cout << "El resto de la division por 5 da " << res2 << endl;
    res3 = res1/7.00;
    cout << "La septima parte del primer resultado da " << res3 << endl;
    return 0;
}
