#include <stdio.h>

int main () {
    int nota[4];
    int media = 0, i;
    
    printf("Digite 4 Notas: \n");
    for (i = 0; i < 4; i++){
        printf("Nota %d: ",i + 1);
        scanf("%d", &nota[i]);
        media += nota [i];
    }
    
    printf("Sua media é: %d\n", media/4);
    
return 0;
}