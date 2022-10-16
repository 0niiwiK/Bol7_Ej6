#include <stdio.h>

int main() {
    int n;
    float x,resul=1;
    printf("Introduce la base: ");
    scanf("%f",&x);
    printf("Introduce el exponente: ");
    scanf("%d",&n);
    if (n!=0){
        for (int i = n; i > 0; i--)
            resul*=x;
        if (n<0){
            for (int i = -n; i > 0; i--)
                resul*=x;
            resul=1/resul;
        }
    }
    printf("%f elevado a %d es: %f",x,n,resul);
    return 0;
}
