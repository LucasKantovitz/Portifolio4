#include <stdio.h>

int main (){
    char frutas[3][20] ={
        "Banana",
        "Maça",
        "Uva"
    };
    
    for(int i = 0; i< 3; i++){
        printf("Fruta nr, %d %s\n",i+1, frutas[i]);
    }
    
    return 0;
}