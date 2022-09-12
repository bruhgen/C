# include <stdio.h>

int main(){
int placa;
printf("\n Qual a placa do do carro?:");
scanf("%d",&placa);
switch (placa%10){
	
case 1: printf("\n segunda-feira"); break;
case 2: printf("\n segunda-feira"); break;
case 3: printf("\n terca-feira"); break;
case 4: printf("\n terca-feira"); break;
case 5: printf("\n quarta-feira"); break;
case 6: printf("\n quarta-feira"); break;
case 7: printf("\n quinta-feira"); break;
case 8: printf("\n quinta-feira"); break;
case 9: printf("\n sexta-feira"); break;
case 0: printf("\n sexta-feira"); break;
}

return 0;
}
	

