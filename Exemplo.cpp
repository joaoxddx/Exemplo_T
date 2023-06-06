#include <iostream>


using namespace std;


int menu()
{
    cout << "Digite a opção desejada" << endl <<
    "1 = Subtração das Matrizes" << endl <<
    "2 = Multiplicação das Matrizes" << endl <<
    "3 = Determinar se as duas matrizes são simétricas" << endl <<
    "4 = Determinar se as duas matrizes são iguais" << endl <<
    "0 = acabar o programa"<< endl;
    int op;
    cin >> op;
    return op;

}

int main()
{
    const int v=3,h=3;
    int matA[v][h], matB[v][h],sub[v][h],mult[v][h], soma=0, op;
    bool simeA=false, simeB=false, iguais=false;
    
    
        for(int i=0;i<v; i++)
        {
            for(int j=0;j<h;j++)
            {
                cout << "Digite o valor da matriz A na posição ["<<i<<","<<j<<"]"<< endl;
                cin >> matA[i][j];
            }
        }
        for(int i=0;i<v; i++)
        {
            for(int j=0;j<h;j++)
            {
                cout << "Digite o valor da matriz B na posição ["<<i<<","<<j<<"]"<< endl;
                cin >> matB[i][j];
            }
        }
    op = menu();
    while (op!=0)
    {
        switch (op)
        {
        case 1:
            for (int i=0; i<v; i++)
            {
                for(int j=0; j<h; j++)
                {
                    sub[i][j]= matA[i][j] - matB[i][j];
                }
            }
            for (int i=0; i<v; i++)
            {
                for(int j=0; j<h; j++)
                {
                    cout << "A subtração das matrizes na posição ["<<i<<","<<j<<"] é igual:" << sub[i][j] << endl;
                }
            }
            break;
        case 2:
            for (int i=0; i<v; i++)
            {
                for(int j=0; j<h; j++)
                {
                    for (int k=0; k<v; k++)
                    {
                        soma += matA[i][k]*matB[k][j];
                    }
                    mult[i][j]=soma;
                }
            }
            for (int i=0; i<v; i++)
            {
                for(int j=0; j<h; j++)
                {
                   cout << "O valor da matriz na posição ["<<i<<","<<j<<"] é de: " << mult[i][j] << endl; 
                }
            }
            break;
        case 3:
            for (int i=0; i<v; i++)
            {
                for(int j=i+1; j<h; j++)
                {
                    if (matA[i][j]==matA[j][i])
                    {
                        simeA=true;
                        break;
                    }
                    
                }
            }
            for (int i=0; i<v; i++)
            {
                for(int j=i+1; j<h; j++)
                {
                    if (matB[i][j]==matB[j][i])
                    {
                        simeB=true;
                    }
                }
            }
        if (simeA)
        {
            cout << "A matriz A é simetrica!" << endl;
        }
        else
        {
            cout << "A matriz A não é simetrica!" << endl;
        }
        if (simeB)
        {
            cout << "A matriz B é simetrica!" << endl;
        }
        else
        {
            cout << "A matriz B não é simetrica!" << endl;
        }
        break;
        case 4:
            for(int i=0; i<h; i++)
            {
                for (int j=0;j<v; j++)
                {
                    if (matA[i][j] == matB[i][j])
                    {
                        iguais=true;
                        break;
                    }
                    
                }
            }
            if (iguais)
            {
                cout << "As matrizes são iguais!!" << endl;
            }
            else
            {
                cout << "As matrizes não são iguais!!" << endl;
            }
            break;
        }
        op = menu();
    }
   
}