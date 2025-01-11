/*
1) Observe o trecho de código abaixo: int INDICE = 13, SOMA = 0, K = 0;
Enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; }
Imprimir(SOMA);
Ao final do processamento, qual será o valor da variável SOMA?
*/

#include <iostream>

int questao_um() {

	int indice, soma, k;
	indice = 13;
	soma = 0;
	k = 0;

	while (k < indice) {
		k += 1;
		soma += k;
	}

	std::cout << soma << std::endl;

	return 0;
}


// Resultado final de soma é igual a 91;