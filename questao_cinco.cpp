/*
5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:
a) Essa string pode ser informada atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definida no c�digo;
b) Evite usar fun��es prontas, como, por exemplo, reverse;
*/

#include <iostream>
#include <string>

int questao_cinco() {

	std::string palavra;

	palavra = "Contrata eu que e sucesso";

	int tamanho = palavra.length();
	for (int i = 0; i < tamanho / 2; i++) {
		char temp = palavra[i];
		palavra[i] = palavra[tamanho - i - 1];
		palavra[tamanho - i - 1] = temp;
	}

	std::cout << palavra;

	return 0;
}