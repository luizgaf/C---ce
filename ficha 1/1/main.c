#include <stdio.h>
#include <stdlib.h>

int validaQuantidade(int qnt){
    if(qnt <= 0){
        return 1;
    }
    return 0;
}
double calculaSalario(int qnt){
    double value = 0;
    if(qnt <= 50){
    }
    if(qnt >= 51 && qnt <=80){
        qnt -= 50;
        value = qnt * 0.5;
    }
    if(qnt > 80){
        qnt -= 80;
        value+= 15 + (qnt * 0.75);
    }
    return (600+value);
}
int main(){
    printf("Insira a quantidade de produtos fabricados: ");
    int qnt;
    scanf("%d", &qnt);

    if(validaQuantidade(qnt) == 1){
        printf("QUantidade Invalida");
        return 0;
    }

    printf("Seu salario: R$ %.2f", calculaSalario(qnt));
}