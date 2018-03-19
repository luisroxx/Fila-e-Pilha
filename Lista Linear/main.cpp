#include <iostream>
#include "ListaLinear.h"

using namespace std;

int main()
{
    cout << "Lista Linear!" << endl;
    int opc;
    //int valor;
    int valor;

    Lista<int> lista;

    do
    {
        cout<<"1-insere"<<endl;
        cout<<"2-remove"<<endl;
        cout<<"3-quantidade de elemantos"<<endl;
        cout<<"4-mostra elementos"<<endl;
        cout<<"5-fim"<<endl;
        cout<<"Selecione:";
        cin>>opc;
        switch(opc)
        {
        case 1:
            cout<<"digite o valor para inserir:";
            cin>>valor;
            if(lista.listacheia())
                cout<<"lista cheia..."<<endl;
            else
                lista.insere(valor);
            break;
        case 2:
            if(lista.listavazia())
                cout<<"lista vazia...."<<endl;
            else
                cout<<"removido: "<<lista.remover()<<endl;
            break;
        case 3:
            if(lista.listavazia())
                cout<<"lista vazia..."<<endl;
            else
                cout<<"Qtde de elementos:"<<lista.pegaQtde()<<endl;
            break;
        case 4:
            cout<<" Elementos da Lista:"<<endl;
            if(lista.listavazia())
                cout<<"lista vazia..."<<endl;
            else
            {
                for(int i=0; i<=lista.pegaIndice(); i++)
                    cout<<lista.pegaValor(i)<<" ";
                cout<<endl;
            }
            break;
        case 5:
            cout<<"fim...."<<endl;
            break;
        default:
            cout<<"opcao invalida"<<endl;
            break;
        }
    }
    while(opc!=5);
    return 0;
}
