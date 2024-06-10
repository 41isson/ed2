#include <iostream>
#include <vector>
using namespace std;


//O insertion sort é um algoritmo de ordenação que percorre um vetor, 
//dividindo-o em duas partes: uma parte ordenada e uma parte não ordenada. Em cada passo,
//ele pega o primeiro elemento da parte não ordenada e o insere na posição 
//correta na parte ordenada, deslocando os elementos maiores conforme necessário. 
    void  insertionSort(std::vector<int> &vetor) {
        for (int i = 1; i < vetor.size(); i++) {
		    int escolhido = vetor[i];
		    int j = i - 1;
		
	    	while ((j >= 0) && (vetor[j] > escolhido)) {
		    	vetor[j + 1] = vetor[j];
			    j--;
		    }
		
	    	vetor[j + 1] = escolhido;
    	}
    }

    void trocar(int &a, int &b) {
    //temp eh usado para nao perder o valor original de a
    int temp = a;
    a = b;
    b = temp;
    }
    
    void selectionSort(std::vector<int>& vetor) {
    int n = vetor.size();
    for (int i = 0; i < n - 1; ++i) {
        // Encontra o menor elemento na sublista não ordenada
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (vetor[j] < vetor[min_idx]) {
                min_idx = j;
            }
        }
        // Troca o menor elemento encontrado com o primeiro elemento da sublista não ordenada
        trocar(vetor[i], vetor[min_idx]);
    }
}



    vector<int> merge(vector<int>& esquerda, vector<int>& direita) {
        vector<int> resultado;
        int i = 0, j = 0;

        while (i < esquerda.size() && j < direita.size()) {
            if (esquerda[i] < direita[j]) {
                resultado.push_back(esquerda[i]);
                i++;
            } else {
                resultado.push_back(direita[j]);
                j++;
            }
        }

        while (i < esquerda.size()) {
            resultado.push_back(esquerda[i]);
            i++;
        }

        while (j < direita.size()) {
            resultado.push_back(direita[j]);
            j++;
        }

        return resultado;
    }

    vector<int> mergeSort(vector<int>& vetor) {
        if (vetor.size() <= 1)
            return vetor;

        int meio = vetor.size() / 2;
        vector<int> esquerda(vetor.begin(), vetor.begin() + meio);
        vector<int> direita(vetor.begin() + meio, vetor.end());

        esquerda = mergeSort(esquerda);
        direita = mergeSort(direita);

        return merge(esquerda, direita);
    }





void quicksort(int values[], int began, int end)
{
	int i, j, pivo, aux;
	i = began;
	j = end-1;
	pivo = values[(began + end) / 2];
	while(i <= j)
	{
		while(values[i] < pivo && i < end)
		{
			i++;
		}
		while(values[j] > pivo && j > began)
		{
			j--;
		}
		if(i <= j)
		{
			aux = values[i];
			values[i] = values[j];
			values[j] = aux;
			i++;
			j--;
		}
	}
	if(j > began)
		quicksort(values, began, j+1);
	if(i < end)
		quicksort(values, i, end);
}
