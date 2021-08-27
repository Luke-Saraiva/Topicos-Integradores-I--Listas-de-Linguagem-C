/*Aluno: Lucas Pietro Bonaspetti Saraiva
  Matrícula: 04063818
  Turma: ALC0790104NMA*/
  
  #include <stdio.h>
  
  int main(){
	float valorVendas;
	float salarioFinal;
	int produtosVendidos; 
	
	printf("Quantidade de produtos vendidos: ");
	scanf("%d", &produtosVendidos);
  	printf("Valor total das vendas: R$");
  	scanf("%f", &valorVendas);
	  
	salarioFinal = 3300.00 + (10.00 * produtosVendidos) + (valorVendas * 0.03);
	  	
  	printf("Salário final do funcionário: R$%.2f", salarioFinal);
  	system("pause");
  }
  
