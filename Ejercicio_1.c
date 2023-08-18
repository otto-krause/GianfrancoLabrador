#include <stdio.h>
#include <stdlib.h>

void mostrar (int na,int nb){
	printf("Numero 1: %d \n",na);
	printf("Numero 2: %d \n",nb);
}
int main() {
	int na,nb;
	printf("Ingrese el primer numero a mostrar por pantalla:  \n");
	scanf("%d",&na);
	printf("Ingrese el segundo numero a mostrar por pantalla:  \n");
	scanf("%d",&nb);
	
	mostrar(na,nb);
	system("pause");
	return 0;
}
