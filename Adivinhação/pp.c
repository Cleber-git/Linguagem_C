#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Welcome(){

    // imprimir o cabeçalho na tela
    printf("**********************************\n");
    printf("*BEM VINDO AO JOGO DE ADIVINHAÇÃO*\n");
    printf("**********************************\n");

}

int Random(){

    int segundos = time( 0 );

    srand( segundos );
    
    int numerogrande = rand();
    int secret_Number = numerogrande%100;

    return secret_Number;
}


int hard(){

    int tentativas = -1;


        while(tentativas < 0 || tentativas > 3){
        printf("Escolha o nível da dificuldade: ");
        scanf("%d", &tentativas);
        if (tentativas == 1){

            tentativas = 20;
            break;

        }else if (tentativas==2)
        {
            tentativas= 15;
            break;
        }
        else if (tentativas == 3){
            tentativas = 6;
            break;
        }else{
            printf("ERRO! Escolha um valor real\n");
            continue;
        }
    }
    return tentativas;
}

void smile(){
    printf("\n\n");
            printf("        ___________0000000000___________    \n");
            printf("        ________0000000000000000________    \n");
            printf("        _____0000000000000000000000_____    \n");
            printf("        __00000000___00000___000000000__    \n");
            printf("        _000000000___00000___0000000000_    \n");
            printf("        _000000000___00000___0000000000_    \n");
            printf("        _000000000000000000000000000000_    \n");
            printf("        _000000000000000000000000000000_    \n");
            printf("        _000000__________________000000_    \n");
            printf("        _000000__________________000000_    \n");
            printf("        __000000_________________00000__    \n");
            printf("        ___0000000_____________000000___    \n");
            printf("        _____0000000_________0000000____    \n");
            printf("        _________000000000000000________    \n");
            printf("        ____________000000000___________    \n");
            printf("\n\n");
            printf("Você acertou, Parabéns!!\n");
}

int game(int secret_Number, int prova, int tentativas){
        
    double pontos = 1000;
    int pontuação = 0;
        
    for (int i = 1; i <= tentativas; i++)
    {    
        printf("Tentativa %d\n", i);
        
        int chance;
        printf("Escolha um número: ");
        scanf("%d", &chance);

        pontuação = (double)(abs( chance - secret_Number )) / (double)2;
        pontos -= pontuação;
        
        
        if (chance < 0){
            printf("Você não pode escolher números negativos.\n");
            i--;
            
            continue;

        }

        printf("Sua escolha é: %d\n", chance);
        
        if(chance == secret_Number){
            
            smile();
            printf("Pontuação : %.1f\n", pontos);
            prova = 1;
            break;

        }
        else if (chance < secret_Number)
        {
            printf("Você errou, chute mais alto!\n");
        }

        else{
            printf("Você errou, chute mais baixo!\n");
        }
    }
    return prova;
}

void bad(){

    printf("\n\n");
    printf("        ____________00000000____________    \n");
    printf("        ________0000000000000000________    \n");
    printf("        _____0000000000000000000000_____    \n");
    printf("        __00000000___00000___000000000__    \n");
    printf("        _000000000___00000___0000000000_    \n");
    printf("        _000000000___00000___0000000000_    \n");
    printf("        _000000000000000000000000000000_    \n");
    printf("        _000000000000000000000000000000_    \n");
    printf("        ____0000000___________000000____    \n");
    printf("        ___0000000_____________000000___    \n");
    printf("        __000000_________________00000__    \n");
    printf("        _000000__________________000000_    \n");
    printf("        _000000__________________000000_    \n");
    printf("        _______NÃO FOI DESSA VEZ________    \n");
    printf("        ________________________________    \n");
}

