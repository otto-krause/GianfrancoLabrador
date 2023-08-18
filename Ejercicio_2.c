#include <stdio.h>
#include <stdlib.h>

void perimetro (int a,int b){
	int p=0;
	p=2*a+2*b;
	printf("el perimetro es %d \n",p);
}

void area (int a,int b){
	int ar=0;
	ar=a*b;
	printf("el area es %d \n",ar);
}
int main() {
	int a,b;

	printf("Ingresar la longitud de uno d los lados de un rectangulo \n");
	scanf("%d",&a);
	printf("Ingresar la longitud del lado que le sigue al anterior \n");
	scanf("%d",&b);
	
	perimetro(a,b);
	area(a,b);
	
	system("pause");
	
	return 0;
}
