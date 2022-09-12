#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, pot,i,resul=1;

    printf("Informe um numero: ");
    scanf("%d",&num);
    printf("Informe a potencia: ");
    scanf("%d",&pot);

    for(i=0; i<pot; i++)
    {
        resul *= num;

        if(pot == 0) // Qualquer numero elevado a 0 é igual 1
        {
            resul = 1;
        }
    }

    printf("\n%d elevado a %d = %d\n",num,pot,resul);

  	return 0;
}
