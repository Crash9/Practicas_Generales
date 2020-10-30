#include <iostream>

using namespace std;

int main()
{
    int num,acum=0,i;
    for (i=0;i<=100;i++)
    {
        cout << i << endl;
        acum = acum + i;
    }
    cout << "La suma de los primeros 100 numeros naturales da: " << acum << endl;
    return 0;
}
