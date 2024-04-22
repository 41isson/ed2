#include <iostream>
using namespace std;

class Fila{
private:
    struct no{
        int valor;
        no *prox;
    };
    no *inicio;
    no *fim;

public:
    Fila(){
        inicio = nullptr;
        fim = nullptr;
    }

    void enfileirar(int valor){
        no* elemento = new no;
        elemento->valor = valor;
        elemento->prox = nullptr;

        if (inicio == nullptr){ 
            inicio = elemento;
            fim = elemento;
        } else {
            fim->prox = elemento;
            fim = elemento;
        }
    }

    // Desenfileirar um elemento
    void desenfileirar(){
        if (inicio == nullptr){ 
            cout << "Fila vazia!" << endl;
            return;
        }

        no* temp = inicio;
        inicio = inicio->prox;
        delete temp;
    }

    // Imprimir a fila
    void imprimirFila(){
        no* elemento = inicio;
        while (elemento != nullptr){
            cout << elemento->valor << " ";
            elemento = elemento->prox;
        }
        cout << endl;
    }

    // Verificar o primeiro elemento da fila
    int primeiroElemento(){
        if (inicio != nullptr){
            return inicio->valor;
        } else {
            cout << "Fila vazia!" << endl;
            return -1; 
        }
    }
};
