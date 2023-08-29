#include <stdio.h>
#include <stdlib.h>

int sumaresistencias(int r1, int r2, int r3, int r4, int r5){
    int rt = r1 + r2 + r3 + r4 + r5;
    return rt;
}

int main() {
    int r, rt, r1, r2, r3, r4, r5, i;
    
    for (i = 1; i <= 5; i++) {
        printf("Ingresa la resistencia %d: ", i);
        scanf("%d", &r);
        switch (i) {
            case 1:
                r1 = r;
                break;
            case 2:
                r2 = r;
                break;
            case 3:
                r3 = r;
                break;
            case 4:
                r4 = r;
                break;
            case 5:
                r5 = r;
                break; 
        }
    }
    
    rt = sumaresistencias(r1, r2, r3, r4, r5);
    
    printf("La suma de las resistencias totales es: %d \n", rt);
    printf("Las resistencias son: \n%d\n%d\n%d\n%d\n%d\n", r1, r2, r3, r4, r5);
    
    return 0;
}
