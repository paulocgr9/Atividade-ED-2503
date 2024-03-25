#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int pow(int, int);
int fatorial(int);

int main() 
{
    int iElevado = pow(2, 5);
    cout <<  iElevado << endl;
    int iFatoriado = fatorial(5);
    cout << iFatoriado << endl;
    int iFatoriado_2 = fatorial(0);
    cout << iFatoriado_2 << endl;
    return 0;
}

int pow(int iBase, int iExpoente) 
{
    int iRetorno = iBase;
    for (int i = 1; i < iExpoente; i++)
    {
        iRetorno = iRetorno * iBase;
    }
    return iRetorno;
}

int fatorial(int iNumero)
{
    if (iNumero == 0)
    {
        return 1;
    }
    int iRetorno = iNumero;
    for (int i = iNumero - 1; i > 0; i--)
    {
        iRetorno = iRetorno * i;
    }
    return iRetorno;
}