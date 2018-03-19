#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#define MAX 10
template <typename Tipo>
struct Fila{
    Tipo elementos[MAX];
    int inic, fim, qtde;
    Fila();
    void insere(Tipo x);
    Tipo remover();
    Tipo primeiro();
    bool filacheia();
    bool filavazia();
    int getFim();
    int getInic();
    int getQtde();
    Tipo getValor(int pos);
};
template <typename Tipo>
Fila<Tipo>::Fila(){
    qtde = 0;
    inic = 0;
    fim = -1;
}
template <typename Tipo>
void Fila<Tipo>::insere(Tipo x){
    fim++;
    if(fim == MAX)
        fim = 0;
    elementos[fim]=x;
    qtde++;
}
template <typename Tipo>
Tipo Fila<Tipo>::remover(){
    Tipo temp = elementos[inic];
    inic++;
    if(inic == MAX)
        inic = 0;
    qtde--;
    return temp;
}
template <typename Tipo>
Tipo Fila<Tipo>::primeiro(){
    return elementos[inic];
}
template <typename Tipo>
bool Fila<Tipo>::filacheia(){
    return qtde == MAX;
}
template <typename Tipo>
bool Fila<Tipo>::filavazia(){
    return qtde == 0;
}
template <typename Tipo>
int Fila<Tipo>::getFim(){
    return fim;
}
template <typename Tipo>
int Fila<Tipo>::getInic(){
    return inic;
}
template <typename Tipo>
int Fila<Tipo>::getQtde(){
    return qtde;
}
template <typename Tipo>
Tipo Fila<Tipo>::getValor(int pos){
    return elementos[pos];
}



#endif // FILA_H_INCLUDED
