#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void octvaparte(int num){
    float oct;
    oct = num/8;
    printf("La octava parte del numero ingresado es:%.2f \n",oct);
}
int main(){
    int oct,num;

    printf("Ingrese el numero del cual quiere sacar su octava parte \n");
    scanf("%d",&num);

    octvaparte(num);

    return 0;
}
