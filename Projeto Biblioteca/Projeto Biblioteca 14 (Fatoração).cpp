#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    int n, i, c=1;
    printf("Informe um numero:\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        c*=i;
    }
    printf("O fatórial é: %d",c);
    return 0;
}