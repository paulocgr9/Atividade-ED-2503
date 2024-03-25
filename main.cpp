#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::abs;

float pow(float, int);
int fatorial(int);
float progressaoAritmetica(float, float, int);
int fibonacci(int);
int numeroDeDigitos(int);

int main() 
{
    float fElevado = pow(2, 5);
    cout <<  fElevado << endl;
    float fElevado_2 = pow(4.4, 2);
    cout <<  fElevado_2 << endl;
    int iFatoriado = fatorial(5);
    cout << iFatoriado << endl;
    int iFatoriado_2 = fatorial(0);
    cout << iFatoriado_2 << endl;
    float fProgredido = progressaoAritmetica(1, 1, 100);
    cout << fProgredido << endl;
    float fProgredido_2 = progressaoAritmetica(2.5, 2.5, 4);
    cout << fProgredido_2 << endl;
    int iFibonacci = fibonacci(5);
    cout << iFibonacci << endl;
    int iFibonacci_2 = fibonacci(12);
    cout << iFibonacci_2 << endl;
    int iNumeroDeDigitos = numeroDeDigitos(696);
    cout << iNumeroDeDigitos << endl;
    int iNumeroDeDigitos_2 = numeroDeDigitos(-696969);
    cout << iNumeroDeDigitos_2 << endl;
    return 0;
}

float pow(float fBase, int iExpoente) 
{
    float fRetorno = fBase;
    for (int i = 1; i < iExpoente; i++)
    {
        fRetorno = fRetorno * fBase;
    }
    return fRetorno;
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

float progressaoAritmetica(float fInicial, float fRazao, int iTermos)
{
    float fFinal = fInicial + fRazao * (iTermos - 1);
    return ((fInicial + fFinal) * iTermos) / 2;
}

int fibonacci(int iTermo)
{
    if(iTermo < 3)
    {
        return 1;
    }
    int iRetorno = 1;
    int iAuxiliar_1 = 1;
    int iAuxiliar_2 = 1;
    for(int i = 2; i < iTermo; i++)
    {
        iAuxiliar_2 = iRetorno;
        iRetorno = iRetorno + iAuxiliar_1;
        iAuxiliar_1 = iAuxiliar_2;
    }
    return iRetorno;
}

int NumeroDeDigitos(int iNumero)
{
    iNumero = abs(iNumero);
    int iPotencia = -1;
    int iSubtracao = 0;
    while (iSubtracao >= 0)
    {
        iPotencia++;
        iSubtracao = iNumero - pow(10, iPotencia);
    }
    return iPotencia;
}