#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int pow(int, int);

int main() 
{
    int iElevado = pow(2, 5);
    cout <<  iElevado << endl;
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