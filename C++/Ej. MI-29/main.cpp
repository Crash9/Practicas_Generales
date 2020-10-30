#include <iostream>
#include<limits>
#include<string.h>
using namespace std;

string int_to_roman(int a)
{
    string ans;
    string M[] = {"","M","MM","MMM"};
    string C[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string X[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    ans = M[a/1000]+C[(a%1000)/100]+X[(a%100)/10]+I[(a%10)];
    return ans;
}

int main()
{
    int num;
    cout << "Ingrese un numero entre el 1 y 3999" << endl;
    cin >> num;
    while (num<1 || num>3999)
    {
        cout << "Error, vuelva a ingresar el numero" << endl;
        cin >> num;
    }
    cout << int_to_roman(num)<< endl;


    return 0;
}
