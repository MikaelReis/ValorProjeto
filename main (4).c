#include <stdio.h>

int main()
{ 
    struct { 
        float saldo ; 
        int nProj ; 
        float valor ; 
        
    }projeto;
    
    float soma; 
    float valor;
    int despesa;
    printf ("Digite o valor do saldo inicial.");
    scanf("%f", &projeto.saldo);
    printf ("Digite o numero do projeto.");
    scanf("%d", &projeto.nProj);
    printf ("Digite o valor da receita 1 ou despesa 2.");
    scanf("%d", &despesa);
    if(despesa == 1){
    printf ("Digite o valor acrescentado.");
    scanf("%f", &valor);
    projeto.saldo += soma;
    }else{
        printf("Digite o valor da despesa:");
        scanf("%f", &valor);
        projeto.saldo -= valor;
    }
    
    printf("Saldo: %2.f", projeto.saldo);
    
return 0 ;
    
}
    
