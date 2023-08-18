#include <stdio.h>
#include <stdlib.h>

void presion (float s, float f){
	float p=0;
	p = f/s;
	printf("La presión[Pa] es: %f \n",p);
	
}
	int main(){
		float p=0,s=0,f=0;
		printf("Ingrese la superficie \n");
		scanf("%f",&s);
		printf("Ingrese la fuerza \n");
		scanf("%f",&f);
		
		system("CLS");
		
		presion(s,f);
		system("pause");
		
		return 0;
		
	}
