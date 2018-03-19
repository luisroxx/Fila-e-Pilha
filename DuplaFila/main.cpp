#include <iostream>
#include "Fila.h"
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
    cout << "" << endl;
    Fila<int> fila(10);
    int valor;
    int opc;
    do
    {
        cout<<"1-insere"<<endl;
        cout<<"2-remove"<<endl;
        cout<<"3-primeiro"<<endl;
        cout<<"4-insere inic"<<endl;
        cout<<"5-remove fim"<<endl;
        cout<<"6-ultimo"<<endl;
        cout<<"7-quantidade"<<endl;
        cout<<"8-mostra a fila"<<endl;
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
            break;
        case 3:
            if(fila.filavazia())
                cout<<"filavazia"<<endl;
            else
            {
                cout<<"primeiro:";
                cout<<fila.primeiro();
            }
            break;
        case 4:
            if(fila.filacheia())
            {
                cout<<"fila cheia...."<<endl;
            }
            else
            {
                cout<<"digite o valor:";
                cin>>valor;
                fila.insereInic(valor);
            }
            break;
        case 5:
            if(fila.filavazia())
                cout<<"filavazia"<<endl;
            else
            {
                cout<<"elemento removido:";
                cout<<fila.removerFim();
            }
            break;
        case 6:
            if(fila.filavazia())
                cout<<"filavazia"<<endl;
            else
            {
                cout<<"ultimo:";
                cout<<fila.ultimo();
            }
            break;
        case 7:
            if(fila.filavazia())
                cout<<"filavazia"<<endl;
            else
            {
                cout<<"Quantidade:";
                cout<<fila.getQtde();
            }
            break;
        case 8:
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
                    for(int i=fila.getInic(); i<=fila.getTamanho()-1; i++)
                        cout<<fila.getValor(i)<<" ";
                    for(int i=0; i<=fila.getFim(); i++)
                        cout<<fila.getValor(i)<<" ";
                }
            }
            break;
        case 9:
            cout<<"fim..."<<endl;
            break;
        }
    }
    while(opc!=9);
    return 0;
}







