#include <iostream>

using namespace std;

void ingresar (int &v1)
{
    cout << "Ingrese un numero" << endl;
    cin >> v1;
}

void factorial (int &v1)
{
    int i,fact=0,succ=0;
    if (v1==0 || v1==1)
    {
        cout << "Su factorial es 1" << endl;
    }else{
        for (i=1;i<v1;i++)
        {
            if (i==1)
            {
                succ = (i *(i+1));
                fact = succ;
            }else{
                fact = fact *(i+1);
            }

        }
        cout << "Su factorial es " << fact << endl;
    }
}

int main()
{
    int a;
    ingresar (a);
    factorial (a);
    return 0;
}
