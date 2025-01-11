/*
3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
• O menor valor de faturamento ocorrido em um dia do mês;
• O maior valor de faturamento ocorrido em um dia do mês;
• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.

IMPORTANTE:
a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal;
b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média;
*/

#include <iostream>
#include <map>

int questao_quatro() {

	std::map<std::string, double> faturamento = {
		{"SP", 67836.43},
		{"RJ", 36678.66},
		{"MG", 29229.88},
		{"ES", 27165.48},
		{"Outros", 19849.53}

	};

	double total = 0;
	for (auto& estado : faturamento) {
		total += estado.second;
	}
	std::cout << "Total do faturamento: " << total << std::endl;

	for (auto& estado : faturamento) {
		double porcento = (estado.second / total) * 100;
		std::cout << estado.first << ": " << porcento << "%" << std::endl;
	}

	return 0;

}