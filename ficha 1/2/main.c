#include <stdio.h>
#include <stdlib.h>

typedef struct Time{
    char nome[20];
    double mediaIdade;
    double mediaPesoMaior25;
}Time;


int main(){
    Time time[9];

    printf("Quer adicionar quantos times");
    int qntTimes;
    scanf("%d", &qntTimes);

    if(qntTimes <= 2 || qntTimes >= 10){
        printf("Quantidade invalida");
        return 0;
    }

    for(int i = 0; i < qntTimes; i++){
        printf("Digite o nome do %do time", (i+1));
        scanf("%s", time[i].nome);
    }

    


}
