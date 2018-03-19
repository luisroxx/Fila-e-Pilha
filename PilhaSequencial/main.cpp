#include <iostream>
#include "Pilha.h"
using namespace std;
int main()
{
    cout << "Pilha Sequencial" << endl;
    Pilha<int> p;
    int opc, valor;
    do{
        cout<<"1-empilha"<<endl;
        cout<<"2-desempilha"<<endl;
        cout<<"3-elemento do topo"<<endl;
        cout<<"4-mostra a pilha"<<endl;
        cout<<"9-fim...."<<endl;
        cout<<"selecione:";
        cin>>opc;
        switch(opc){
        case 1:
            if(p.pilhacheia()){
                cout<<"pilha cheia"<<endl;
            }
            else{
                cout<<"digite o valor:";
                cin>>valor;
                p.empilha(valor);
            }
            break;
        case 2:
            if(p.pilhavazia()){
                cout<<"Pilha vazia...."<<endl;
            }
            else{
                int t=p.desempilha();
                cout<<"Desempilhado:"<<t<<endl;
            }
            break;
        case 3:
            if(p.pilhavazia()){
                cout<<"Pilha vazia...."<<endl;
            }
            else{
                int t=p.elementodotopo();
                cout<<"Elem. do topo:"<<t<<endl;
            }
            break;
        case 4:
            if(p.pilhavazia()){
                cout<<"Pilha vazia...."<<endl;
            }
            else{
                for(int i=0;i<=p.getTopo();i++){
                    cout<<p.getValor(i)<<" ";

                }
                cout<<endl;
            }
            break;
        case 9:
            cout<<"fim...."<<endl<<endl;
            break;

        }
    }while(opc !=9);
    return 0;
}



