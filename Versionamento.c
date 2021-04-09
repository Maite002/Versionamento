#include <stdio.h>
#include <string.h>
typedef struct personagem
{
    int vida, ataque;
    char nome[25];
} Personagem;
typedef struct time
{
    Personagem Heroi;
    Personagem Lacaio1;
    Personagem Lacaio2;
    int ponto;
} Time;
int main(){
    Time time1, time2;
    char lacaio1[25], lacaio2[25];
    printf("\n*********************");
    printf("\nArena HearthStone\n");
    printf("*********************\n");
    printf("\nDados da batalha:\n");
    
    printf("\nEscolha um nome para o Heroi 1:");
    scanf("%s",time1.Heroi.nome);
    printf("Heroi %s - Pontos de Vida:",time1.Heroi.nome);
    scanf("%d",&time1.Heroi.vida);
    if (time1.Heroi.vida<=0 || time1.Heroi.vida>30){
        printf("...Error...\nEscolha numeros entre 1 e 30. Para a vida do Heroi %s. \n", time1.Heroi.nome);
        return 1;
    }

    printf("\nEscolha um nome para o Lacaio 1:");
    scanf("%s",time1.Lacaio1.nome);
    printf("Lacaio %s - Pontos de Vida:",time1.Lacaio1.nome);
    scanf("%d",&time1.Lacaio1.vida);
    if (time1.Lacaio1.vida<=0 || time1.Lacaio1.vida>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para a vida do Lacaio %s. \n", time1.Lacaio1.nome);
        return 1;
    }
    printf("Lacaio %s - Pontos de Ataque:",time1.Lacaio1.nome);
    scanf("%d",&time1.Lacaio1.ataque);
    if (time1.Lacaio1.ataque <=0 || time1.Lacaio1.ataque>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para o ataque do Lacaio %s. \n", time1.Lacaio1.nome);
        return 1;
    }

    printf("\nEscolha um nome para o Lacaio 2:");
    scanf("%s",time1.Lacaio2.nome);
    printf("Lacaio %s - Pontos de Vida:",time1.Lacaio2.nome);
    scanf("%d",&time1.Lacaio2.vida);
    if (time1.Lacaio2.vida<=0 || time1.Lacaio2.vida>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para a vida do Lacaio %s. \n", time1.Lacaio2.nome);
        return 1;
    }
    printf("Lacaio %s - Pontos de Ataque:",time1.Lacaio2.nome);
    scanf("%d",&time1.Lacaio2.ataque);
    if (time1.Lacaio2.ataque <=0 || time1.Lacaio2.ataque>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para o ataque do Lacaio %s. \n", time1.Lacaio2.nome);
        return 1;
    }

    printf("\nEscolha um nome para o Heroi 2:");
    scanf("%s",time2.Heroi.nome);
    printf("Heroi %s - Pontos de Vida:", time2.Heroi.nome);
    scanf("%d",&time2.Heroi.vida);
    if (time2.Heroi.vida<=0 || time2.Heroi.vida>30){
        printf("...Error...\nEscolha numeros entre 1 e 30. Para a vida do Heroi %s. \n", time2.Heroi.nome);
        return 1;
    }

    printf("\nEscolha um nome para o Lacaio 3:");
    scanf("%s",time2.Lacaio1.nome);
    printf("Lacaio %s - Pontos de Vida:",time2.Lacaio1.nome);
    scanf("%d",&time2.Lacaio1.vida);
    if (time2.Lacaio1.vida<=0 || time2.Lacaio1.vida>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para a vida do Lacaio %s. \n", time2.Lacaio1.nome);
        return 1;
    }
    printf("Lacaio %s - Pontos de Ataque:",time2.Lacaio1.nome);
    scanf("%d",&time2.Lacaio1.ataque);
    if (time2.Lacaio1.ataque <=0 || time2.Lacaio1.ataque>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para o ataque do Lacaio %s. \n", time2.Lacaio1.nome);
        return 1;
    }

    printf("\nEscolha um nome para o Lacaio 4:");
    scanf("%s",time2.Lacaio2.nome);
    printf("Lacaio %s - Pontos de Vida:",time2.Lacaio2.nome);
    scanf("%d",&time2.Lacaio2.vida);
    if (time2.Lacaio2.vida<=0 || time2.Lacaio2.vida>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para a vida do Lacaio %s. \n", time2.Lacaio2.nome);
        return 1;
    }
    printf("Lacaio %s - Pontos de Ataque:",time2.Lacaio2.nome);
    scanf("%d",&time2.Lacaio2.ataque);
    if (time2.Lacaio2.ataque <=0 || time2.Lacaio2.ataque>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para o ataque do Lacaio %s. \n", time2.Lacaio2.nome);
        return 1;
    }

    printf("\n*********************");
    printf("\nComeçando a Batalha\n");
    printf("*********************\n");

    do{
        printf("\nEscolha um Lacaio para atacar:");
        scanf("%s",lacaio1);
        if(strcmp(lacaio1, time2.Lacaio1.nome) == 0){
            printf("...Error...\nLacaio incorreto.\n");
        }
        else if(strcmp(lacaio1,time2.Lacaio2.nome) == 0){
            printf("...Error...\nLacaio incorreto.\n");
        }
        else if(strcmp(lacaio1,time1.Heroi.nome) == 0){
            printf("...Error...\nLacaio incorreto.\n");
        }
        else if(strcmp(lacaio1,time2.Heroi.nome) == 0){
            printf("...Error...\nLacaio incorreto.\n");
        }
    }

    while(strcmp(lacaio1, time2.Lacaio1.nome) == 0 || strcmp(lacaio1, time2.Lacaio2.nome) == 0 ||  strcmp(lacaio1, time1.Heroi.nome) == 0 || strcmp(lacaio1, time2.Heroi.nome) == 0);           //Compara o nome do personagem escolhida pelo jogador e se for o personagem errado, o programa repete a pergunta/ a frase até o jogador escolher o Personagem correto.
    printf("Ataque: %s\n", lacaio1);

    do{
        printf("Escolha um dos personagens para sofrer o ataque:");
        scanf("%s",lacaio2);
        if(strcmp(lacaio2, time1.Lacaio1.nome) == 0){
            printf("...Error...\nPersonagem incorreto.\n");
        }
        else if(strcmp(lacaio2, time1.Lacaio2.nome) == 0){
        printf("...Error...\nPersonagem incorreto\n");
        }
        else if(strcmp(lacaio2,time1.Heroi.nome) == 0){
            printf("...Error...\nLacaio incorreto.\n");
        }
    }
    while(strcmp(lacaio2, time1.Lacaio1.nome) == 0 || strcmp(lacaio2, time1.Lacaio2.nome) == 0 || strcmp(lacaio2, time1.Heroi.nome) == 0);
    printf("Alvo: %s\n", lacaio2);

    if(strcmp (lacaio1, time1.Lacaio1.nome) == 0){
        if(strcmp (lacaio2, time2.Lacaio1.nome) == 0){
            printf("Lacaio %s ataca Lacaio %s.\n", time1.Lacaio1.nome, time2.Lacaio1.nome);
            if(time1.Lacaio1.ataque>=time2.Lacaio1.vida){
                printf("Lacaio %s Morreu.\n", time2.Lacaio1.nome);
                if(time1.Lacaio1.ataque>=time1.Lacaio1.vida){
                    printf("Lacaio %s Morreu, por dano de ataque.\n", time1.Lacaio1.nome);
                }
                else{
                    time1.ponto=time1.Lacaio1.vida-time1.Lacaio1.ataque;
                    printf("Vida do Lacaio %s: %d\n", time1.Lacaio1.nome, time1.ponto);
                }
            }    
            else{
                time2.ponto=time2.Lacaio1.vida-time1.Lacaio1.ataque;
                printf("Vida do Lacaio %s: %d\n",time2.Lacaio1.nome, time2.ponto);
                if(time1.Lacaio1.ataque>=time1.Lacaio1.vida){
                    printf("Lacaio %s Morreu, por dano de ataque.\n", time1.Lacaio1.nome);
                }
                else{
                    time1.ponto=time1.Lacaio1.vida-time1.Lacaio1.ataque;
                    printf("Vida do Lacaio %s: %d\n", time1.Lacaio1.nome, time1.ponto);
                }
            }
        }
        else if(strcmp (lacaio2, time2.Lacaio2.nome) == 0){
            printf("Lacaio %s ataca Lacaio %s.\n", time1.Lacaio1.nome, time2.Lacaio2.nome);
            if(time1.Lacaio1.ataque>=time2.Lacaio2.vida){
                printf("Lacaio %s Morreu.\n", time2.Lacaio2.nome);
                if(time1.Lacaio1.ataque>=time1.Lacaio1.vida){
                    printf("Lacaio %s Morreu, por dano de ataque.\n", time1.Lacaio1.nome);
                }
                else{
                    time1.ponto=time1.Lacaio1.vida-time1.Lacaio1.ataque;
                    printf("Vida do Lacaio %s: %d\n", time1.Lacaio1.nome, time1.ponto);
                }
            }
            else{
                time2.ponto=time2.Lacaio2.vida-time1.Lacaio1.ataque;
                printf("Vida do Lacaio %s: %d\n", time2.Lacaio2.nome, time2.ponto);
                if(time1.Lacaio1.ataque>=time1.Lacaio1.vida){
                    printf("Lacaio %s Morreu, por dano de ataque.\n",time1.Lacaio1.nome);
                }
                else{
                    time1.ponto=time1.Lacaio1.vida-time1.Lacaio1.ataque;
                    printf("Vida do Lacaio %s: %d\n", time1.Lacaio1.nome, time1.ponto);
                }
            }
        }
        else if(strcmp (lacaio2, time2.Heroi.nome) == 0){
            printf("Lacaio %s ataca Heroi %s.\n", time1.Lacaio1.nome, time2.Heroi.nome);
            if(time1.Lacaio1.ataque>=time2.Heroi.vida){
                printf("Heroi %s Morreu.\n", time2.Heroi.nome);
            }
            else{
                time2.ponto=time2.Heroi.vida-time1.Lacaio1.ataque;
                printf("Vida do Heroi %s: %d\n", time2.Heroi.nome, time2.ponto);
            }
        }
    }
    else if(strcmp (lacaio1, time1.Lacaio2.nome) == 0){
        if(strcmp (lacaio2, time2.Lacaio1.nome) == 0){
            printf("Lacaio %s ataca Lacaio %s.\n",time1.Lacaio2.nome, time2.Lacaio1.nome);
            if(time1.Lacaio2.ataque>=time2.Lacaio1.vida){
                printf("Lacaio %s Morreu.\n", time2.Lacaio1.nome);
                if(time1.Lacaio2.ataque>=time1.Lacaio2.vida){
                    printf("Lacaio %s Morreu, por dano de ataque.\n", time1.Lacaio2.nome);
                }
                else{
                    time1.ponto=time1.Lacaio2.vida-time1.Lacaio2.ataque;
                    printf("Vida do Lacaio %s: %d\n", time1.Lacaio2.nome, time1.ponto);
                }
            }
            else{
                time2.ponto=time2.Lacaio1.vida-time1.Lacaio2.ataque;
                printf("Vida do Lacaio %s: %d\n", time2.Lacaio1.nome, time2.ponto);
                if(time1.Lacaio2.ataque>=time1.Lacaio2.vida){
                    printf("Lacaio %s Morreu, por dano de ataque.\n", time1.Lacaio2.nome);
                }
                else{
                    time1.ponto=time1.Lacaio2.vida-time1.Lacaio2.ataque;
                    printf("Vida do Lacaio %s: %d\n", time1.Lacaio2.nome, time1.ponto);
                }
            }
        }
        else if(strcmp (lacaio2, time2.Lacaio2.nome) == 0){
            printf("Lacaio %s ataca Lacaio %s.\n", time1.Lacaio2.nome, time2.Lacaio2.nome);
            if(time1.Lacaio2.ataque>=time2.Lacaio2.vida){
                printf("Lacaio %s Morreu.\n", time2.Lacaio2.nome);
                if(time1.Lacaio2.ataque>=time1.Lacaio2.vida){
                    printf("Lacaio %s Morreu, por dano de ataque.\n", time1.Lacaio2.nome);
                }
                else{
                    time1.ponto=time1.Lacaio2.vida-time1.Lacaio2.ataque;
                    printf("Vida do Lacaio %s: %d\n", time1.Lacaio2.nome, time1.ponto);
                }
            }
            else{
                time2.ponto=time2.Lacaio2.vida-time1.Lacaio2.ataque;
                printf("Vida do Lacaio %s: %d\n", time2.Lacaio2.nome, time2.ponto);
                if(time1.Lacaio2.ataque>=time1.Lacaio2.vida){
                    printf("Lacaio %s Morreu, por dano de ataque.\n", time1.Lacaio2.nome);
                }
                else{
                    time1.ponto=time1.Lacaio2.vida-time1.Lacaio2.ataque;
                    printf("Vida do Lacaio %s: %d\n", time1.Lacaio2.nome, time1.ponto);
                }
            }
        }
           else if(strcmp (lacaio2, time2.Heroi.nome) == 0){
            printf("Lacaio %s ataca Heroi %s.\n", time1.Lacaio2.nome, time2.Heroi.nome);
            if(time1.Lacaio2.ataque>=time2.Heroi.vida){
                printf("Heroi %s Morreu.\n", time2.Heroi.nome);
            }
            else{
                time2.ponto=time2.Heroi.vida-time1.Lacaio2.ataque;
                printf("Vida do Heroi %s: %d\n", time2.Heroi.nome, time2.ponto);
            }
        }
    }
    return 0;
}