#include "Fila.h"

int main(){
    Fila fila;
    fila.enfileirar(1);
    fila.enfileirar(2);
    fila.enfileirar(3);

    fila.imprimirFila();

    cout << "Primeiro elemento da fila: " << fila.primeiroElemento() << endl;

    fila.desenfileirar();
    fila.imprimirFila();

    return 0;
}
