#include <iostream>
#include "Fila.h"
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
    cout << "" << endl;
    Fila<int> fila;
    int valor;
    int opc;
    srand(time(NULL));
    for(int i=0;i<30;i++)
        cout<<rand() % 10000 <<endl;

    do
    {
        cout<<"1-insere"<<endl;
        cout<<"2-remove"<<endl;
        cout<<"3-primeiro"<<endl;
        cout<<"4-quantidade"<<endl;
        cout<<"5-mostra a fila"<<endl;
        cout<<"9-fim"<<endl;
        cout<<"selecione: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
            if(fila.filacheia())
            {
                cout<<"fila cheia...."<<endl;
            }
            else
            {
                cout<<"digite o valor:";
                cin>>valor;
                fila.insere(valor);
            }
            break;
        case 2:
            if(fila.filavazia())
                cout<<"filavazia"<<endl;
            else
            {
                cout<<"elemento removido:";
                cout<<fila.remover();
            }

        case 3:
            if(fila.filavazia())
                cout<<"filavazia"<<endl;
            else
            {
                cout<<"primeiro:";
                cout<<fila.primeiro();
            }
        case 4:
            if(fila.filavazia())
                cout<<"filavazia"<<endl;
            else
            {
                cout<<"Quantidade:";
                cout<<fila.getQtde();
            }

        case 5:
            if(fila.filavazia())
                cout<<"fila vazia..."<<endl;
            else
            {
                if(fila.getInic() <= fila.getFim())
                {
                    for(int i=fila.getInic();
                            i<=fila.getFim(); i++)
                        cout<<fila.getValor(i)<<" ";
                }
                else
                {
                    for(int i=fila.getInic(); i<=MAX-1; i++)
                        cout<<fila.getValor(i)<<" ";
                    for(int i=0; i<=fila.getFim(); i++)
                        cout<<fila.getValor(i)<<" ";
                }
            }

        case 9:
            cout<<"fim..."<<endl;
            break;
        }
    }while(opc!=9);



    return 0;
}







