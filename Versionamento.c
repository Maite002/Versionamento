#include <stdio.h>
#include <string.h>

int main(){
    int vidaH1, vidaH2, vidaL1, ataqueL1, vidaL2, ataqueL2, vidaL3, ataqueL3, vidaL4, ataqueL4, ponto1, ponto2;
    char nomeH1[25], nomeH2[25], nomeL1[25], nomeL2[25], nomeL3[25], nomeL4[25], lacaio1[25], lacaio2[25];
    printf("\n*********************");
    printf("\nArena HearthStone\n");
    printf("*********************\n");
    printf("\nDados da batalha:\n");
    
    printf("\nEscolha um nome para o Heroi 1:");
    scanf("%s",nomeH1);
    printf("Heroi %s - Pontos de Vida:",nomeH1);
    scanf("%d",&vidaH1);
    if (vidaH1<=0 || vidaH1>30){
        printf("...Error...\nEscolha numeros entre 1 e 30. Para a vida do Heroi %s. \n", nomeH1);
        return 1;
    }

    printf("\nEscolha um nome para o Lacaio 1:");
    scanf("%s",nomeL1);
    printf("Lacaio %s - Pontos de Vida:",nomeL1);
    scanf("%d",&vidaL1);
    if (vidaL1<=0 || vidaL1>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para a vida do Lacaio %s. \n", nomeL1);
        return 1;
    }
    printf("Lacaio %s - Pontos de Ataque:",nomeL1);
    scanf("%d",&ataqueL1);
    if (ataqueL1 <=0 || ataqueL1>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para o ataque do Lacaio %s. \n", nomeL1);
        return 1;
    }

    printf("\nEscolha um nome para o Lacaio 2:");
    scanf("%s",nomeL2);
    printf("Lacaio %s - Pontos de Vida:",nomeL2);
    scanf("%d",&vidaL2);
    if (vidaL2<=0 || vidaL2>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para a vida do Lacaio %s. \n", nomeL2);
        return 1;
    }
    printf("Lacaio %s - Pontos de Ataque:",nomeL2);
    scanf("%d",&ataqueL2);
    if (ataqueL2 <=0 || ataqueL2>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para o ataque do Lacaio %s. \n", nomeL2);
        return 1;
    }

    printf("\nEscolha um nome para o Heroi 2:");
    scanf("%s",nomeH2);
    printf("Heroi %s - Pontos de Vida:", nomeH2);
    scanf("%d",&vidaH2);
    if (vidaH2<=0 || vidaH2>30){
        printf("...Error...\nEscolha numeros entre 1 e 30. Para a vida do Heroi %s. \n", nomeH2);
        return 1;
    }

    printf("\nEscolha um nome para o Lacaio 3:");
    scanf("%s",nomeL3);
    printf("Lacaio %s - Pontos de Vida:",nomeL3);
    scanf("%d",&vidaL3);
    if (vidaL3<=0 || vidaL3>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para a vida do Lacaio %s. \n", nomeL3);
        return 1;
    }
    printf("Lacaio %s - Pontos de Ataque:",nomeL3);
    scanf("%d",&ataqueL3);
    if (ataqueL3 <=0 || ataqueL3>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para o ataque do Lacaio %s. \n", nomeL3);
        return 1;
    }

    printf("\nEscolha um nome para o Lacaio 4:");
    scanf("%s",nomeL4);
    printf("Lacaio %s - Pontos de Vida:",nomeL4);
    scanf("%d",&vidaL4);
    if (vidaL4<=0 || vidaL4>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para a vida do Lacaio %s. \n", nomeL4);
        return 1;
    }
    printf("Lacaio %s - Pontos de Ataque:",nomeL4);
    scanf("%d",&ataqueL4);
    if (ataqueL4 <=0 || ataqueL4>10){
        printf("...Error...\nEscolha numeros entre 1 e 10. Para o ataque do Lacaio %s. \n", nomeL4);
        return 1;
    }

    printf("\n*********************");
    printf("\nComeçando a Batalha\n");
    printf("*********************\n");

    do{
        printf("\nEscolha um Lacaio para atacar:");
        scanf("%s",lacaio1);
        if(strcmp(lacaio1, nomeL3) == 0){
            printf("...Error...\nLacaio incorreto.\n");
        }
        else if(strcmp(lacaio1,nomeL4) == 0){
            printf("...Error...\nLacaio incorreto.\n");
        }
        else if(strcmp(lacaio1,nomeH1) == 0){
            printf("...Error...\nLacaio incorreto.\n");
        }
        else if(strcmp(lacaio1,nomeH2) == 0){
            printf("...Error...\nLacaio incorreto.\n");
        }
    }

    while(strcmp(lacaio1, nomeL3) == 0 || strcmp(lacaio1, nomeL4) == 0 ||  strcmp(lacaio1, nomeH1) == 0 || strcmp(lacaio1, nomeH2) == 0);           //Compara o nome do personagem escolhida pelo jogador e se for o personagem errado, o programa repete a pergunta/ a frase até o jogador escolher o Personagem correto.
    printf("Ataque: %s\n", lacaio1);

    do{
        printf("Escolha um dos personagens para sofrer o ataque:");
        scanf("%s",lacaio2);
        if(strcmp(lacaio2, nomeL1) == 0){
            printf("...Error...\nPersonagem incorreto.\n");
        }
        else if(strcmp(lacaio2, nomeL2) == 0){
        printf("...Error...\nPersonagem incorreto\n");
        }
        else if(strcmp(lacaio2,nomeH1) == 0){
            printf("...Error...\nLacaio incorreto.\n");
        }
    }
    while(strcmp(lacaio2, nomeL1) == 0 || strcmp(lacaio2, nomeL2) == 0 || strcmp(lacaio2, nomeH1) == 0);
    printf("Alvo: %s\n", lacaio2);

    if(strcmp (lacaio1, nomeL1) == 0){
        if(strcmp (lacaio2, nomeL3) == 0){
            printf("Lacaio %s ataca Lacaio %s.\n", nomeL1, nomeL3);
            if(ataqueL1>=vidaL3){
                printf("Lacaio %s Morreu.\n", nomeL3);
                if(ataqueL1>=vidaL1){
                    printf("Lacaio %s Morreu, por dano de ataque.\n", nomeL1);
                }
                else{
                    ponto1=vidaL1-ataqueL1;
                    printf("Vida do Lacaio %s: %d\n", nomeL1, ponto1);
                }
            }    
            else{
                ponto2=vidaL3-ataqueL1;
                printf("Vida do Lacaio %s: %d\n",nomeL3, ponto2);
                if(ataqueL1>=vidaL1){
                    printf("Lacaio %s Morreu, por dano de ataque.\n", nomeL1);
                }
                else{
                    ponto1=vidaL1-ataqueL1;
                    printf("Vida do Lacaio %s: %d\n", nomeL1, ponto1);
                }
            }
        }
        else if(strcmp (lacaio2, nomeL4) == 0){
            printf("Lacaio %s ataca Lacaio %s.\n", nomeL1, nomeL4);
            if(ataqueL1>=vidaL4){
                printf("Lacaio %s Morreu.\n", nomeL4);
                if(ataqueL1>=vidaL1){
                    printf("Lacaio %s Morreu, por dano de ataque.\n", nomeL1);
                }
                else{
                    ponto1=vidaL1-ataqueL1;
                    printf("Vida do Lacaio %s: %d\n", nomeL1, ponto1);
                }
            }
            else{
                ponto2=vidaL4-ataqueL1;
                printf("Vida do Lacaio %s: %d\n", nomeL4, ponto2);
                if(ataqueL1>=vidaL1){
                    printf("Lacaio %s Morreu, por dano de ataque.\n",nomeL1);
                }
                else{
                    ponto1=vidaL1-ataqueL1;
                    printf("Vida do Lacaio %s: %d\n", nomeL1, ponto1);
                }
            }
        }
        else if(strcmp (lacaio2, nomeH2) == 0){
            printf("Lacaio %s ataca Heroi %s.\n", nomeL1, nomeH2);
            if(ataqueL1>=vidaH2){
                printf("Heroi %s Morreu.\n", nomeH2);
            }
            else{
                ponto2=vidaH2-ataqueL1;
                printf("Vida do Heroi %s: %d\n", nomeH2, ponto2);
            }
        }
    }
    else if(strcmp (lacaio1, nomeL2) == 0){
        if(strcmp (lacaio2, nomeL3) == 0){
            printf("Lacaio %s ataca Lacaio %s.\n",nomeL2, nomeL3);
            if(ataqueL2>=vidaL3){
                printf("Lacaio %s Morreu.\n", nomeL3);
                if(ataqueL2>=vidaL2){
                    printf("Lacaio %s Morreu, por dano de ataque.\n", nomeL2);
                }
                else{
                    ponto1=vidaL2-ataqueL2;
                    printf("Vida do Lacaio %s: %d\n", nomeL2, ponto1);
                }
            }
            else{
                ponto2=vidaL3-ataqueL2;
                printf("Vida do Lacaio %s: %d\n", nomeL3, ponto2);
                if(ataqueL2>=vidaL2){
                    printf("Lacaio %s Morreu, por dano de ataque.\n", nomeL2);
                }
                else{
                    ponto1=vidaL2-ataqueL2;
                    printf("Vida do Lacaio %s: %d\n", nomeL2, ponto1);
                }
            }
        }
        else if(strcmp (lacaio2, nomeL4) == 0){
            printf("Lacaio %s ataca Lacaio %s.\n", nomeL2, nomeL4);
            if(ataqueL2>=vidaL4){
                printf("Lacaio %s Morreu.\n", nomeL4);
                if(ataqueL2>=vidaL2){
                    printf("Lacaio %s Morreu, por dano de ataque.\n", nomeL2);
                }
                else{
                    ponto1=vidaL2-ataqueL2;
                    printf("Vida do Lacaio %s: %d\n", nomeL2, ponto1);
                }
            }
            else{
                ponto2=vidaL4-ataqueL2;
                printf("Vida do Lacaio %s: %d\n", nomeL4, ponto2);
                if(ataqueL2>=vidaL2){
                    printf("Lacaio %s Morreu, por dano de ataque.\n", nomeL2);
                }
                else{
                    ponto1=vidaL2-ataqueL2;
                    printf("Vida do Lacaio %s: %d\n", nomeL2, ponto1);
                }
            }
        }
           else if(strcmp (lacaio2, nomeH2) == 0){
            printf("Lacaio %s ataca Heroi %s.\n", nomeL2, nomeH2);
            if(ataqueL2>=vidaH2){
                printf("Heroi %s Morreu.\n", nomeH2);
            }
            else{
                ponto2=vidaH2-ataqueL2;
                printf("Vida do Heroi %s: %d\n", nomeH2, ponto2);
            }
        }
    }
    return 0;
}