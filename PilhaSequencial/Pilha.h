#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#define MAX 10
template <typename Tipo>
struct Pilha{
    Tipo elementos[MAX];
    int topo;
    Pilha();
    void empilha(Tipo x); //push()
    Tipo desempilha(); //pop()
    Tipo elementodotopo(); //top()
    bool pilhacheia();
    bool pilhavazia();
    int getTopo();
    Tipo getValor(int pos);
};
template <typename Tipo>
Pilha<Tipo>::Pilha(){
    topo = -1;
}
template <typename Tipo>
void Pilha<Tipo>::empilha(Tipo x){
    topo++;
    elementos[topo]=x;
}
template <typename Tipo>
Tipo Pilha<Tipo>::desempilha(){
    Tipo temp = elementos[topo];
    topo--;
    return temp;
}
template <typename Tipo>
Tipo Pilha<Tipo>::elementodotopo(){
    return elementos[topo];
}
template <typename Tipo>
bool Pilha<Tipo>::pilhacheia(){
    return topo == MAX-1;
}
template <typename Tipo>
bool Pilha<Tipo>::pilhavazia(){
    return topo == -1;
}
template <typename Tipo>
int Pilha<Tipo>::getTopo(){
    return topo;
}
template <typename Tipo>
Tipo Pilha<Tipo>::getValor(int pos){
    return elementos[pos];
}
#endif // PILHA_H_INCLUDED



