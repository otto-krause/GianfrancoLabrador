#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mayomeno(int A, int B){
    if(A>B){
		printf("A es mayor a B \n");
	}
	else if(B>A){
		printf("B es mayor a A \n");
	}
	else{
		printf("A y B son iguales \n");
	}
}
int main(){
    int A=0, B=0;

    printf("Ingrese el numero A[solo numeros enteros porfavor]: \n");
    scanf("%d",&A);
    printf("Ingrese el numero A[solo numeros enteros porfavor]: \n");
    scanf("%d",&B);
    
    mayomeno(A,B);

return 0;
}



/*
#include <stdio.h>
#include <stdlib.h>
int A,B;
int main() {
	printf("Ingrese A \n");
	scanf("%d",&A);
	printf("Ingrese B \n");
	scanf("%d",&B);

	if(A>B){
		printf("A es mayor a B \n");
	}
	else if(B>A){
		printf("B es mayor a A \n");
	}
	else{
		printf("A y B son iguales \n");
	}
}

*/