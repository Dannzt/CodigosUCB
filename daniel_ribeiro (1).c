
int main(int argc, char *argv[]) {
	int idade, numero_endereco, nascimento ; //Para devir um numero inteiro, idade, numero de endereço e data de nascimento.
	

	char nome[70], sexo, altura[4], endereco[199], cpf[11]; // Caracteristica, definir caracteres, nome, sexo, altura, endereço e o CPF  
	
	printf("Informe o nome:");
	scanf("%[^\n]s",&nome); //esse %[^\n]s é basicamente para o nome ter sobrenome(esqueci o real motivo)
	
	
	printf("Informe a idade:");
	scanf("%d",&idade); // tem as diferenças para numeros e caracteres, cuidado com isso
	
	
	printf("Informe o sexo:");
	scanf(" %c",&sexo);
	
	
	printf("Informe a altura:");
	scanf("%s", &altura);
	
	
	printf("Informe o endereco: ");
	scanf("\n%[^\n]s", &endereco);
	
	printf("Informe o numero (endereco): ");
	scanf("%d", &numero_endereco);
	
	
	printf("Informe o CPF: ");
	scanf("\n%[0-9]s", &cpf);
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &nascimento); // sempre que for da um novo nome coloca lá em cima no lugar certo (se é um char{caracter} ou um int {numero} ).
	
		
	printf("+------------------------------------+ \n"); // o /n pula uma linha
	
	printf("|          DADOS INFORMADOS          | \n");
	
	printf("+------------------------------------+ \n");
	
	printf("| Nome: %s", nome);
	printf("\n| Idade: %d", idade);
	printf("\n| Sexo:  %c", sexo);
	printf("\n| Altura: %s", altura);
	printf("\n| Endereco: %s", endereco);
	printf("\n| Numero (endereco): %d", numero_endereco);
	printf("\n| CPF: %s", cpf);
	printf("\n| Ano de nascimento: %d \n", nascimento);
	printf("+------------------------------------+ \n\n");
	
	
	
	return 0;
	
}
