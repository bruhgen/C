#include <stdio.h>

int main(){
float c, f, celsius;

printf("Digite a temperatura em fahrenheit: ");
scanf("%f", &f);

celsius = (f - 32)/1.8;
	
printf("\n o valor convertido de Fahrenheit %.2f C :", celsius);
	
return 0;
}
