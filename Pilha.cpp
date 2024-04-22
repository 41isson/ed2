#include "Pilha.h"

int main(){
Pilha pilha1;
    pilha1.inserirElemento(10);
    pilha1.inserirElemento(20);
    pilha1.inserirElemento(30);

    Pilha pilha2;

    cout << "Pilha 1 antes da transferencia:" << endl;
    pilha1.imprimirPilha();

    cout << "Pilha 2 antes da transferencia:" << endl;
    pilha2.imprimirPilha();

    // Transferindo os valores de pilha1 para pilha2
    pilha1.transfereValoresPilha(pilha2);

    cout << "Pilha 1 depois da transferencia:" << endl;
    pilha1.imprimirPilha();

    cout << "Pilha 2 depois da transferencia:" << endl;
    pilha2.imprimirPilha();

    return 0;
}
