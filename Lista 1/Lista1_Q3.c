/*Aluno: Lucas Pietro Bonaspetti Saraiva
  Matrícula: 04063818
  Turma: ALC0790104NMA*/
  
  #include <stdio.h>
  
  int main(){
  	float total, centavos;
  	int inteiroTotal, divisao;
	
	printf("Qual o valor a ser pago pelos amigos? R$");
	scanf("%f", &total);
	
	inteiroTotal = (int)total;
	centavos = total - inteiroTotal;
	divisao = inteiroTotal/3;
	
	printf("Quanto João e Rodrigo vão pagar: R$%d.00 cada\n", divisao);
	printf("Quanto Ricardo vai pagar: R$%.2f", divisao + centavos);
	
	system("pause");
  }
