#include <iostream>

using namespace std;

void suma1valor(int x)
{
    x = x + 1;
    return;
}

void suma1ref(int &x)
{
    x = x+1;
    return;
}

int main()
{

    int x=1;
    suma1valor(x);
    cout << x << endl;
    suma1ref(x);
    cout << x << endl;
}

