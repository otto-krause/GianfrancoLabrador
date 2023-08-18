#include <stdio.h>
#include <stdlib.h>

void porc (int ch, int cm, int hom){
	int ph=0,pm=0,ce=0;
	ce = ch+cm;
	if(hom==1){
		ph=(ch*100)/ce;
		printf("El porcentaje de los postulados masculinos es de %d \n",ph);
	} if(hom==2){
		pm=(cm*100)/ce;
		printf("el porcentaje de las postuladas femeninas es de %d \n",pm);
	}
}
	
	int main (){
		int hom=0,ph=0,pm=0,ch,cm,ce;
		
		printf("Ingresa la cantidad de hombres: \n");
		scanf("%d",&ch);
		printf("Ingresa la cantidad de mujeres: \n");
		scanf("%d",&cm);
		
		system("CLS");
		
		printf("de que genero quiere calcular el porcentaje?Ingrese el numero 1[hombres] o el num 2[mujeres] \n");
		scanf("%d",&hom);
	
		porc(ch,cm,hom);
		
		system("pause");
		return 0;
	}
