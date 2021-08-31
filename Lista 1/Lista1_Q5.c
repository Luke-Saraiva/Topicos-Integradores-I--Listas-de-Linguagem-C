#include <stdio.h>
#include <locale.h>

int main(){
	int qFlex, qPrem, qGold; //"q" é pra indicar quantidade
	float total, desconto = 0;
	setlocale(LC_ALL,"Portuguese"); 
	printf("TABELA DE PREÇOS UNITÁRIOS E DESCONTOS\n\n");
	printf(" -------- --------- ----------\n");
	printf("|  TIPO  |  PREÇO  | DESCONTO |\n");
	printf(" -------- --------- ----------\n");
	printf("|FLEX    | R$20,00 |    10%%  |\n");
	printf("|PREMIUM | R$50,75 |    20%%  |\n");
	printf("|GOLD    | R$90,00 |    30%%  |\n");
	printf(" -------- --------- ----------\n\n");
	
	printf("Quantas rações do tipo Flex você deseja? ");
	scanf("%d", &qFlex);
	printf("Quantas rações do tipo Premium você deseja? ");
	scanf("%d", &qPrem);
	printf("Quantas rações do tipo Gold você deseja? ");
	scanf("%d",&qGold);
	
	if (qFlex >= 1){
		desconto += 0.1;
	} 
	if (qPrem >= 1){
		desconto += 0.2;
	}
	if (qGold >= 1){
		desconto += 0.3;
	}
	
	total = (qFlex * 20.00 + qPrem * 50.75 + qGold * 90.00)*desconto;
	
	
	printf("\n\nRações Flex compradas: %d x R$20,00 = R$%.2f \n", qFlex, qFlex * 20.00);
	printf("Rações Premium compradas: %d x R$50,75 = R$%.2f \n", qPrem, qPrem * 50.75);
	printf("Rações Gold compradas: %d x R$90,00 = R$%.2f\n", qGold, qGold * 90.00);
	printf("Desconto total: %.0f%%\n",desconto*100);
	printf("-----------------------------------------------\n");
	printf("Total a pagar: R$%.2f", total);
	
	system("pause");
}
