# include <stdio.h>

int main(){
float peso, altura, imc;
printf("Por favor, informe sua altura:");
scanf("%f", &altura);
printf("Agora informe seu peso:");
scanf("%f", &peso);

altura  = (altura * altura);
imc = peso/altura;

printf("seu IMC: %.2f", imc);
	
	
	
}
