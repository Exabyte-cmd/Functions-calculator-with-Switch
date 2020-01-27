#include <stdio.h>
#include <stdlib.h>

int choice, num1, num2, result;
void menu(void);

int main()
{
    menu();

    if(choice!=5){
        opcoes(choice);
            printf("Total: %d\n", result);
    }
    else{
    printf("Saindo do programa.\n");
    exit(0);
    }
    return 0;
}

void menu(void){

printf("1 - Adicao\n2 - Multiplicacao\n3 - Divisao\n4 - Subtracao\n5 - Sair\nSelecione a opcao pretendida\n->");
    scanf("%d", &choice);

}
int opcoes(choice){

    do{
        printf("Insira o primeiro numero:\n->");
    scanf(" %d", &num1);
        printf("Insira o segundo numero:\n->");
    scanf(" %d", &num2);
switch(choice){
case 1:
    result=num1+num2;
    return result;
    break;
case 2:
    result=num1*num2;
    return result;
    break;
case 3:
    result=num1/num2;
    return result;
    break;
case 4:
    result=num1-num2;
    return result;
    break;
    }
}while(choice < 5);
}

