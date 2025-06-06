#include <stdio.h> 
#include <string.h>

int main () {
    char termo[5] = {'t', 'e', 's', 't', 'e'};
    char palpite [5] = "";
    char status[5] = {'0', '0', '0', '0', '0'};
    int acertos = 0;
    
    
    for(int i = 0; i <= 5; i++){
        printf("\nPalpite: ");
        scanf("%s", palpite);
        
        for(int j = 0; j < 5; j++) { //percorre caracter palpite
            for(int l = 0; l < 5; l++){//percorre caracter termo
                if(palpite[j] == termo[l]) {
                    status [j] = 'l';
                }
            }
        }
        
        printf("\n");
        
        for(int j = 0; j < 5; j++) {
            if(palpite[j] == termo[j]) {
                status[j] = '2';
                acertos++;
            }
            
            if(status[j] == '1') { //letra certa, lugar errado
                printf("\033[0,33m"); //Amarelo
            }
            else if(status[j] == '2') { //letra certa, lugar certo
                printf("\033[0,32m"); //verde
            }
            
            printf("%c", palpite[j]);
            printf("\033[0m");
            
            status[j] = '0';
        }
        
        printf("\n");
        
        if(acertos == 5) break;
    }
    
    return 0;
}