/*
1) Observe o trecho de c�digo abaixo: int INDICE = 13, SOMA = 0, K = 0;
Enquanto K < INDICE fa�a { K = K + 1; SOMA = SOMA + K; }
Imprimir(SOMA);
Ao final do processamento, qual ser� o valor da vari�vel SOMA?
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


// Resultado final de soma � igual a 91;