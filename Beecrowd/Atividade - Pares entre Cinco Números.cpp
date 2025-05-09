#include <stdio.h>
 
int main() {
    int n[5],par=0,impar=0;
    for(int i=0;i<5;i++){
        scanf("%d",&n[i]);
        if(n[i]%2==0){
            par++;
        }
        else{
            impar++;
        }
    }
    printf("%d valores pares\n",par);
    return 0;
}