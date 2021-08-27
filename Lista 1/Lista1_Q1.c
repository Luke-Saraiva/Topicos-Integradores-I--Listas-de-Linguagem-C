/*Aluno: Lucas Pietro Bonaspetti Saraiva
  Matrícula: 04063818
  Turma: ALC0790104NMA*/
  
  #include <stdio.h>
  
  int main(){
  	float precoInicial;
  	float valorDesconto;
  	float precoFinal;
  	
  	printf("Informe o preço do produto: R$");
  	scanf("%f", &precoInicial);
  	
  	if (precoInicial < 90){
  		valorDesconto = 0.1 * precoInicial;
	  } else if (precoInicial > 150){
	  	valorDesconto = 0.25 * precoInicial;
	  } else {
	  	valorDesconto = 0.15 * precoInicial;
	  }
	
	precoFinal = precoInicial - valorDesconto;
	
	printf("Valor do desconto: R$%.2f \n", valorDesconto);
	printf("Novo preço: R$%.2f", precoFinal);
	system("pause"); 
  }
