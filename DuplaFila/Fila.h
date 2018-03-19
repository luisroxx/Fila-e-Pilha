#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

template <typename Tipo>
struct Fila{
    Tipo *elementos;
    int inic, fim, qtde, tamanho;
    Fila(int t);
    ~Fila();
    void insere(Tipo x);
    void insereInic(Tipo x);
    Tipo remover();
    Tipo removerFim();
    Tipo primeiro();
    Tipo ultimo();
    bool filacheia();
    bool filavazia();
    int getFim();
    int getInic();
    int getQtde();
    Tipo getValor(int pos);
    int getTamanho();
};
template <typename Tipo>
Fila<Tipo>::Fila(int t){
    tamanho = t;
    elementos=new Tipo[tamanho];
    qtde = 0;
    inic = 0;
    fim = -1;
}
template <typename Tipo>
Fila<Tipo>::~Fila(){
    delete elementos;
}

template <typename Tipo>
void Fila<Tipo>::insere(Tipo x){
    fim++;
    if(fim == tamanho)
        fim = 0;
    elementos[fim]=x;
    qtde++;
}
template <typename Tipo>
void Fila<Tipo>::insereInic(Tipo x){
    inic--;
    if(inic == -1)
        inic = tamanho-1;
    elementos[inic]=x;
    qtde++;
}
template <typename Tipo>
Tipo Fila<Tipo>::remover(){
    Tipo temp = elementos[inic];
    inic++;
    if(inic == tamanho)
        inic = 0;
    qtde--;
    return temp;
}
template <typename Tipo>
Tipo Fila<Tipo>::removerFim(){
    Tipo temp = elementos[fim];
    fim--;
    if(fim == -1)
        fim = tamanho-1;
    qtde--;
    return temp;
}

template <typename Tipo>
Tipo Fila<Tipo>::primeiro(){
    return elementos[inic];
}
template <typename Tipo>
Tipo Fila<Tipo>::ultimo(){
    return elementos[fim];
}
template <typename Tipo>
bool Fila<Tipo>::filacheia(){
    return qtde == tamanho;
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
template <typename Tipo>
int Fila<Tipo>::getTamanho(){
    return tamanho;
}



#endif // FILA_H_INCLUDED
