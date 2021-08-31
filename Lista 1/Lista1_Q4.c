/*Aluno: Lucas Pietro Bonaspetti Saraiva
  Matrícula: 04063818
  Turma: ALC0790104NMA*/
  
  #include <stdio.h>
  #include <locale.h>
  
  float saldo, saldoFinal, valor;
  int codigoCliente, opcao = 0;
   
  int main(){
  	setlocale(LC_ALL, "Portuguese");
    printf("Olá! Digite aqui o seu código de cadastro: ");
    scanf("%d", &codigoCliente);
    printf("Ok, agora preciso que você me informe seu saldo: ");
	scanf("%f", &saldo);
	
	do{
		printf("\n\nO que você deseja fazer? \nDigite 1 para depositar \nDigite 2 para receber\n");
		scanf("%d", &opcao);

		
		if (opcao == 1){
  			printf("Quanto você deseja depositar? R$");
  			scanf("%f", &valor);
  			printf("Valor depositado com sucesso!\n");
  			saldoFinal = saldo + valor; 
		} else if (opcao == 2){
			printf("Quanto você deseja receber? R$");
  			scanf("%f", &valor);
  			saldoFinal = saldo - valor;
		} else {
	  		printf("AS ÚNICAS OPÇÕES SÃO 1 OU 2. \n");  	
		}
	} while (opcao != 1 && opcao != 2);
	
	if (saldoFinal < 0.00){
		printf("\nVocê está com um saldo final negativo.\n");
		printf("O valor de R$2000.00 de seu cheque especial e adicionado ao seu saldo atual. \n");
		saldoFinal = saldoFinal + 2000.00;
	}
	
	
	printf("\nSaldo atual: R$%.2f", saldoFinal);
  }
