#ifndef LISTALINEAR_H_INCLUDED
#define LISTALINEAR_H_INCLUDED
#define MAX 10
template <typename Tipo>
struct Lista{
    Tipo elementos[MAX];
    int indice;
    Lista();
    void insere(Tipo x);
    Tipo remover();
    Tipo pegaValor(int pos);
    bool listacheia();
    bool listavazia();
    int pegaQtde();
    int pegaIndice();
};
template <typename Tipo>
Lista<Tipo>::Lista(){
    indice = -1;
}
template <typename Tipo>
void Lista<Tipo>::insere(Tipo x){
    indice++;
    elementos[indice]=x;
}
template <typename Tipo>
Tipo Lista<Tipo>::remover(){
    Tipo t = elementos[indice];
    indice--;
    return t;
}
template <typename Tipo>
Tipo Lista<Tipo>::pegaValor(int pos){
    return elementos[pos];
}
template <typename Tipo>
bool Lista<Tipo>::listavazia(){
    return indice==-1;
}
template <typename Tipo>
bool Lista<Tipo>::listacheia(){
    return indice == MAX-1;
}
template <typename Tipo>
int Lista<Tipo>::pegaQtde(){
    return indice + 1;
}
template <typename Tipo>
int Lista<Tipo>::pegaIndice(){
    return indice;
}


#endif // LISTALINEAR_H_INCLUDED



