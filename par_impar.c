# include <stdio.h>

int main(){
int n;	
printf ("Digite um numero:");
scanf ("%d", &n);
printf("%s",(n%2)==0 ? "par": "impar");
return 0;	
}
