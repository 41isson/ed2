#include <iostream>
using namespace std;

class Pilha{
    private:
       struct no{
            int valor;
            no *prox;
        };
        no *topo;
    
    public:
        //cabeca da pilha
        Pilha(){
            topo = nullptr;
        }
        
    
    
        //imprime todos elmento da pilha
        void imprimirPilha(){
            no* elemento = topo;
            while(elemento != nullptr){
                cout << "\nElemento da pilha: " << elemento->valor << endl;
                elemento = elemento->prox;
            }
        }
    
        //inserir o elemnto e o proximo valor corresponde ao ponteiro que liga ao proximo valor
        void inserirElemento(int valor){
            no* elemento = new no;
            elemento->valor = valor;
            elemento->prox = topo;
            topo = elemento;
        }

        //deletar o ponteiro que esta apontando para o topo
        void deletarElemento(){
        while(topo != nullptr){
            no* temp = topo;
            topo = topo->prox;
            delete temp;
            }
        if(topo == nullptr){
            cout << "Pilha vazia";
        }
        }

        void pilhaVazia(){
            if(topo == nullptr){
                cout << "Pilha vazia";
            }
            cout << "Pilha não vazia";
        }


        void topoDaPilha(){
        
        if(topo != nullptr){
            cout << "Valor do topo da pilha:" << topo->valor;
        } 
        else {
            cout << "Pilha vazia!" << endl;
        
        }
    }
     // Transfere os valores desta pilha para outra
    void transfereValoresPilha(Pilha& outraPilha) {
        while (topo != nullptr) {
            outraPilha.inserirElemento(topo->valor);
            deletarElemento();
        }
    }



};


        

