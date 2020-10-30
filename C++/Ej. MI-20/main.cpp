#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int num,i,numax;
    for(i=0;i<10;i++)
    {
            cout << "Ingrese un numero"<< endl;
            cin >> num;
            while (!cin)
            {
                cin.clear();
                cin.ignore( std::numeric_limits <streamsize> ::max(), '\n');
                cout << "Error, vuelva a ingresar el numero" << endl;
                cin >> num;
            }
        if (i==0)
            numax = num;
        else if (num>numax)
            numax = num;
    }
    cout << "El numero mayor de los 10 fue el: " << numax <<endl;
    return 0;
}
