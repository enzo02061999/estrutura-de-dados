#include <stdio.h>
#include <math.h>

int main()
{
    printf("Defina os seguintes valores de ax^2+bx+c\n");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("Valor a = %d, b = %d e  c = %d \n", a, b, c);
    
    int f, x, y, w, q;
    f = pow(b,2)-4*a*c;
    if (f >= 0)
    {
        w = sqrt(f);
        q = (2*a);
        x=(-b+w)/q;
        y=(-b-w)/q;
        printf("As duas possíveis respostas são: %d e %d\n", x, y);
    }
    else
    {
        printf("O delta é: %d \n", f);
        printf("Como o delta é negativo, não há uma resposta");
    }
    return(0);
}

