/*
4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:
• SP – R$67.836,43
• RJ – R$36.678,66
• MG – R$29.229,88
• ES – R$27.165,48
• Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora. ?
*/

#include <iostream>

int questao_dois() {

	int numero, temp, a, b;
	a = 0, b = 1;
	std::cout << "0,1,";
	numero = 9;
	for (int i = 3; i <= numero; i++) {
		temp = a + b;
		std::cout << temp << ",";
		a = b;
		b = temp;
	}

	return 0;
}
