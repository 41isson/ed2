#include <iostream>
#include <vector>
#include "Ordenacao.h"

int main() {
    std::vector<int> vetor = {12, 11, 13, 5, 6};
    int n = vetor.size();

    std::cout << "Vetor original: ";
    for (int i = 0; i < n; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    // Testando o Bubble Sort
    std::vector<int> vetor_bubble = vetor; // Copia do vetor original
    bubbleSort(vetor_bubble);
    std::cout << "Após Bubble Sort: ";
    for (int i = 0; i < n; i++) {
        std::cout << vetor_bubble[i] << " ";
    }
    std::cout << std::endl;

    // Testando o Insertion Sort
    std::vector<int> vetor_insertion = vetor; // Copia do vetor original
    insertionSort(vetor_insertion);
    std::cout << "Após Insertion Sort: ";
    for (int i = 0; i < n; i++) {
        std::cout << vetor_insertion[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
