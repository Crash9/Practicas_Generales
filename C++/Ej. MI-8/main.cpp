#include <iostream>

using namespace std;

int main()
{
    int l1,l2,l3;
    cout << "Ingrese el primer lado" << endl;
    cin >> l1;
    cout << "Ingrese el segundo lado" << endl;
    cin >> l2;
    cout << "Ingrese el tercer lado" << endl;
    cin >> l3;
    if ((l1==l2) && (l2==l3))
        cout << "Los lados forman un triangulo equilatero" << endl;
    else if ((l1==l2)&& (l2!=l3) || (l1!=l3))
        cout << "Los lados forman un triangulo isosceles" << endl;
    else
        cout << "Los lados forman un triangulo escaleno" << endl;
    return 0;
}
