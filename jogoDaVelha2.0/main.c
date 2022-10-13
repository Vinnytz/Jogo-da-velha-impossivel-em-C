#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void pWinGame (int linha, int coluna)//void que faz printar que ganhei se o jogo estiver  quase ganho se a pessoa nao jogar na linha 1 coluna 0, primeira jogada [0][1]
{
    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};

    system("cls || clear");
    x[linha][coluna]='X';
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  X  |   %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  %c  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  %c   |  %c\n"
    "        |     |\n", x[0][2], x[1][1], x[1][2], x[2][1], x[2][2]);
}
void p2WinGame (int linha, int coluna){
    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};
    system("cls || clear");
    x[linha][coluna]='X';
    if(x[0][2]=='X' || x[1][2]=='X' || x[2][1]=='X'){
        x[1][1]='O';
    }
    if (x[1][1]=='X'){
        x[2][1]='O';
    }
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  X  |   %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   X  |  %c  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  %c   |  O\n"
    "        |     |\n", x[0][2], x[1][1], x[1][2], x[2][1]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void sWinGame (int linha, int coluna){
    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};
    int a, b;

    system("cls || clear");
    x[linha][coluna]='X';

    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  %c  |   X\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  %c  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  %c   |  %c\n"
    "        |     |\n", x[0][1], x[1][1],x[1][2],x[2][1],x[2][2]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void s2WinGame(int linha, int coluna){

    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};
    system("cls || clear");
    x[linha][coluna]='X';

    if(x[0][1]=='X' || x[1][2]=='X' || x[2][1]=='X'){
        x[1][1]='O';
    }
    if (x[1][1]=='X'){
        x[2][1]='O';
    }
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  %c  |   X\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   X  |  %c  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  %c   |  O\n"
    "        |     |\n", x[0][1], x[1][1], x[1][2], x[2][1]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void tWinGame(int linha, int coluna){
    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};

    system("cls || clear");
    x[linha][coluna]='X';
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  O  |  O \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   X  |  %c  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   %c  |  %c   |  %c\n"
    "        |     |\n", x[1][1], x[1][2], x[2][0], x[2][1], x[2][2]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void t2WinGame(int linha, int coluna){

    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};
    system("cls || clear");
    x[linha][coluna]='X';

    if(x[1][1]=='X' || x[2][0]=='X' || x[2][1]=='X'){
        x[1][2]='O';
    }
    if (x[1][2]=='X'){
        x[1][1]='O';
    }
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  X   |   O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   X  |  %c  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   %c  |  %c   |  O\n"
    "        |     |\n", x[1][1], x[1][2], x[2][0], x[2][1]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void qWinGame(int linha, int coluna){
    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};

    system("cls || clear");
    x[linha][coluna]='X';
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  O  |  O \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   %c  |  %c  |  X\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   %c  |  %c   |  %c\n"
    "        |     |\n", x[1][0], x[1][1], x[2][0], x[2][1], x[2][2]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void q2WinGame(int linha, int coluna){

    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};
    system("cls || clear");
    x[linha][coluna]='X';

    if(x[2][1]=='X' || x[1][1]=='X' || x[2][2]=='X'){
        x[1][0]='O';
    }
    if (x[1][0]=='X'){
        x[1][1]='O';
    }
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  X  |  O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   %c  |  %c  |  X\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  %c   |  %c\n"
    "        |     |\n", x[1][0], x[1][1], x[2][1], x[2][2]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void quinWinGame(int linha, int coluna){
    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};

    system("cls || clear");
    x[linha][coluna]='X';
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  O  |  O \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   %c  |  %c  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   X  |  %c   |  %c\n"
    "        |     |\n", x[1][0], x[1][1], x[1][2], x[2][1], x[2][2]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void quin2WinGame(int linha, int coluna){

    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};
    system("cls || clear");
    x[linha][coluna]='X';

    if(x[1][0]=='X' || x[1][1]=='X' || x[2][1]=='X'){
        x[1][2]='O';
    }
    if (x[1][2]=='X'){
        x[1][1]='O';
    }
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  X  |  O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   %c  |  %c  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  %c   |  O\n"
    "        |     |\n", x[1][0], x[1][1], x[1][2], x[2][1]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void sexWinGame(int linha, int coluna){
    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};

    system("cls || clear");
    x[linha][coluna]='X';
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  %c  |  %c  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  %c  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  X  |  %c\n"
    "        |     |\n", x[0][1], x[0][2], x[1][1], x[1][2], x[2][2]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void sex2WinGame(int linha, int coluna){

    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};
    system("cls || clear");
    x[linha][coluna]='X';

    if(x[1][1]=='X' || x[1][2]=='X' || x[2][2]=='X'){
        x[0][1]='O';
    }
    if (x[0][1]=='X'){
        x[1][1]='O';
    }
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  %c  |  O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   X  |  %c  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  X  |  %c\n"
    "        |     |\n", x[0][1], x[1][1], x[1][2], x[2][2]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void setWinGame(int linha, int coluna){
    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};

    system("cls || clear");
    x[linha][coluna]='X';
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  %c  |  %c  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  %c  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  %c  |  X\n"
    "        |     |\n", x[0][1], x[0][2], x[1][1], x[1][2], x[2][1]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void set2WinGame(int linha, int coluna){

    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};
    system("cls || clear");
    x[linha][coluna]='X';

    if(x[1][1]=='X' || x[1][2]=='X' || x[2][1]=='X'){
        x[0][1]='O';
    }
    if (x[0][1]=='X'){
        x[1][1]='O';
    }
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  %c  |  O  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   X  |  %c  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  %c  |  X\n"
    "        |     |\n",
    "        |     |\n", x[0][1], x[1][1], x[1][2], x[2][2]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void meioWinGame(int linha, int  coluna){
char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};
    system("cls || clear");
    x[linha][coluna]='X';

    if(x[0][1]=='X' || x[1][2]=='X' || x[2][1]=='X'){
        x[1][0]='O';
    }
    if (x[1][0]=='X'){
        x[2][1]='O';
    }
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  %c  |  X  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   %c  |  X  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  %c  |  O\n"
    "        |     |\n"
    "        |     |\n", x[0][1], x[1][0], x[1][2], x[2][1]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void meio2WinGame(int linha, int  coluna){
char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};
    system("cls || clear");
    printf("linha %d, coluna %d\n", linha, coluna);
    x[linha][coluna]='X';

    if(x[0][1]=='X' || x[1][0]=='X' || x[2][1]=='X'){
        x[1][2]='O';
    }
    if (x[1][2]=='X'){
        x[0][1]='O';
    }
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  %c  |  O  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   %c  |  X  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   X  |  %c  |  O\n"
    "        |     |\n"
    "        |     |\n", x[0][1], x[1][0], x[1][2], x[2][1]);
    printf("PC: Pois é amigão parece que eu venci.");
}
void semprevelha(int linha, int coluna){
    char x[3][3]={{' ', ' ', ' '},{' ', ' ', ' '}};
    system("cls || clear");
    printf("linha %d, coluna %d\n", linha, coluna);
    x[linha][coluna]='X';

    if(x[0][1]=='X'){x[2][1]='O';}
    if(x[1][0]=='X'){x[1][2]='O';}
    if(x[1][2]=='X'){x[1][0]='O';}
    if(x[2][1]=='X'){x[0][1]='O';}

    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  %c  |     \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   %c  |  X  |  %c\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2      |  %c  |  O\n"
    "        |     |\n"
    "        |     |\n", x[0][1], x[1][0], x[1][2], x[2][1]);
    printf("PC: Vai dar velha amigão.");
}

int main()  //inicio da função
{
    setlocale(LC_ALL, "Portuguese");

    int tabela[3][3] ={{0,0,0}, {0,0,0}, {0,0,0}}, linhaX, colunaX, linha, coluna, poPassar, numeroTeste;

    printf("Bem vindo ao jogo da velha.\n");
    system("pause");
    system("cls || clear");
    printf("Como diz o ditado, maquinas jogam primiero :D.\n");
    do{
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |     |\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2      |     |\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3      |     |\n"
    "        |     |\n");
    tabela[0][0]=1;
    printf("Em qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("Em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    if (linhaX==1206 && colunaX==2019){ //unico jeito de vencer
            system("cls || clear");
        printf("Parabens é impossivel vencer de você.\n");
        printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  O  |  O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   O  |  O  |  O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3   O  |  O  |  O\n"
    "        |     |\n");
    return 0;
    }
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=2;
    printf("%d", tabela[0][0]);
    if(tabela[0][0]==2){
        system("cls || clear");
        printf("Amigão você está querendo jogar em uma parte que ja esta utilizada\n");
    }
    }while(tabela[0][0]!=1);
    system("cls || clear");


if (tabela[0][1]==2){// primeira jogada full, joga
        do{
            printf(
                "    C1    C2    C3\n"
                "        |     |\n"
                "L1   O  |  X  |\n"
                "   _____|_____|____\n"
                "        |     |\n"
                "L2      |     |\n"
                "   _____|_____|____\n"
                "        |     |\n"
                "L3   O  |     |\n"
                "        |     |\n");
            tabela[2][0]=13;
            tabela[0][0]=1;
            tabela[0][1]=2;
            printf("PC: Joguei na linha 3 coluna 1.\n\n\t\tSua vez.\nEm qual linha você gostaria de jogar: ");
            scanf("%d", &linhaX);
            printf("E em qual coluna você gostaria de jogar: ");
            scanf("%d", &colunaX);
            linha=linhaX-1;
            coluna=colunaX-1;
            tabela[linha][coluna]=4;
            if (tabela[0][0]==4 || tabela[0][1]==4 || tabela[2][0]==4){
                system("cls || clear");
                printf("Amigão você esta jogando em um quadrante que um de nós já jogou.\n\n");
            }//se o jogador jogar em [0][1]
            if (tabela[0][1]==2){//daqui
                numeroTeste=2;
            }
            if(tabela[0][1]==4){
                tabela[0][1]=2;
                numeroTeste=4;
            }//ate aqui estou resetando a uma parte da tabela para nao bugar nessa linha de baixo
        }while(tabela[0][0]!=1 || numeroTeste==4  || tabela[2][0]!=13);

        if (tabela[0][2] ||tabela[1][1] ||tabela[1][2] ||tabela[2][1] ||tabela[2][2]){
            pWinGame(linha, coluna);//primeira vitoria dojogo, ganhando na coluna 1 na vertical
            printf("PC: Amigão desista é impossivel vencer do pai.");
            return 0;
        }

        if (tabela[1][0]==4){//ultima jogada do jogado
            do{
            system("cls|| clear");
            printf(
                "    C1    C2    C3\n"
                "        |     |\n"
                "L1   O  |  X  |\n"
                "   _____|_____|____\n"
                "        |     |\n"
                "L2   X  |     |\n"
                "   _____|_____|____\n"
                "        |     |\n"
                "L3   O  |     |  O\n"
                "        |     |\n");
            tabela[0][0]=10;
            tabela[0][1]=2;
            tabela[1][0]=4;
            tabela[2][0]=10;
            tabela[2][2]=10;
            printf("PC: joguei na linha 3 coluna 3.\n\n\t\tSua vez.\nEm qual linha você gostaria de jogar: ");
            scanf("%d", &linhaX);
            printf("E em qual coluna você gostaria de jogar: ");
            scanf("%d", &colunaX);
            linha=linhaX-1;
            coluna=colunaX-1;
            tabela[linha][coluna]=6;
            if (tabela[1][1]==6 || tabela[1][2]==6 || tabela[2][1]==6 ||tabela[0][2]==6){
                p2WinGame(linha, coluna);
                return 0;
            }
            if (tabela[0][0]==6 || tabela[0][1]==6 || tabela[1][0]==6 || tabela[2][0]==6 || tabela[2][2]==6){
                printf("PC: Amigão você esta jogando em uma parte já jogada.\n");
                system("pause");
            }
        }while(tabela[0][0]==6 || tabela[0][1]==6 || tabela[1][0]==6 || tabela[2][0]==6 || tabela[2][2]==6);
    }
    }//fechamento da primeira jogada
if (tabela[0][2]==2){//segunda jogada full
    do{
    system("cls || clear");
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |     |  X\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2      |     |\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3  O   |     |\n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[0][2]=2;
    tabela[2][0]=10;
    printf("PC: joguei na linha 3 coluna 1.\n\n\tSua vez.\nEm qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("Em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=4;

    if(tabela[0][1]==4||tabela[1][1]==4||tabela[1][2]==4||tabela[2][1]==4||tabela[2][2]==4){
        sWinGame(linha, coluna);
        return 0;
    }
    if(tabela[0][0]!=10||tabela[0][2]!=2||tabela[2][0]!=10){
        printf("Amigão você esta jogando em uma parte que ja tem jogo.\n");
        system("pause");
    }
    }while(tabela[0][0]!=10||tabela[0][2]!=2||tabela[2][0]!=10);

    if(tabela[1][0]==4){//segunda jogada da segunda vez
        do{
        system("cls||clear");
        printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |     |  X\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   X  |     |\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3  O   |     |  O\n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[0][2]=2;
    tabela[1][0]=4;
    tabela[2][0]=10;
    tabela[2][2]=10;
    scanf("%d", &linhaX);
    printf("E em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=6;
    printf("\n%d linha 0 coluna 0, %d linha, %d coluna\n", tabela[0][0], linha, coluna);
    if(tabela[0][0]==6||tabela[0][2]==6||tabela[1][0]==6||tabela[2][0]==6||tabela[2][2]==6){
        printf("PC: caro oponente você esta jogando em uma parte que ja tem jogo.\n");
        system("pause");
    }
    if (tabela[0][1]==6 || tabela[1][2]==6 || tabela[1][1]==6 ||tabela[2][1]==6){
        s2WinGame(linha, coluna);
        return 0;
    }
    }while(tabela[0][0]==6||tabela[0][2]==6||tabela[2][0]==6||tabela[1][0]==6||tabela[2][2]==6);
    }//fim da segunad jogada
}//fim da segunda jogada full
if (tabela[1][0]==2){//terceira jogada full
    do{
    system("cls || clear");
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |     |  O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   X  |     |\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3      |     |  \n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[1][0]=2;
    tabela[0][2]=10;
    printf("PC: joguei na linha 1 coluna 3.\n\n\tSua vez.\nEm qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("Em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=4;

    if(tabela[1][1]==4||tabela[1][2]==4||tabela[2][0]==4||tabela[2][1]==4||tabela[2][2]==4){
        tWinGame(linha, coluna);
        return 0;
    }
    if(tabela[0][0]!=10||tabela[1][0]!=2||tabela[0][2]!=10){
        printf("Amigão você esta jogando em uma parte que ja tem jogo.\n");
        system("pause");
    }
    }while(tabela[0][0]!=10||tabela[1][0]!=2||tabela[0][2]!=10);

    if(tabela[0][1]==4){//segunda jogada da terceira vez
        do{
        system("cls||clear");
        printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  X  |  O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   X  |     |\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3      |     |  O\n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[1][0]=2;
    tabela[0][1]=4;
    tabela[0][2]=10;
    tabela[2][2]=10;
    printf("PC: joguei na 3ª coluna 3ª linha.\n\n\t\tSua vez.\nEm qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("E em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=6;
    if(tabela[0][0]==6||tabela[0][2]==6||tabela[1][0]==6||tabela[0][1]==6||tabela[2][2]==6){
        printf("PC: caro oponente você esta jogando em uma parte que ja tem jogo.\n");
        system("pause");
    }
    if (tabela[1][1]==6 || tabela[1][2]==6 || tabela[2][0]==6 ||tabela[2][1]==6){
        t2WinGame(linha, coluna);
        return 0;
    }
    }while(tabela[0][0]==6||tabela[0][2]==6||tabela[2][0]==6||tabela[1][0]==6||tabela[2][2]==6);
    }
}//fechamento terceira jogada full
if (tabela[1][2]==2){//quarta jogada full
    do{
    system("cls || clear");
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |     |  O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2      |     |  X\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3      |     |  \n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[1][2]=2;
    tabela[0][2]=10;
    printf("PC: joguei na linha 1 coluna 3.\n\n\tSua vez.\nEm qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("Em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=4;

    if(tabela[1][0]==4||tabela[1][1]==4||tabela[2][0]==4||tabela[2][1]==4||tabela[2][2]==4){
        qWinGame(linha, coluna);
        return 0;
    }
    if(tabela[0][0]!=10||tabela[1][2]!=2||tabela[0][2]!=10){
        printf("Amigão você esta jogando em uma parte que ja tem jogo.\n");
        system("pause");
    }
    }while(tabela[0][0]!=10||tabela[1][2]!=2||tabela[0][2]!=10);

    if(tabela[0][1]==4){//segunda jogada da quarta vez
        do{
        system("cls||clear");
        printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  X  |  O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2      |     |  X\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3   O  |     |  \n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[0][1]=2;
    tabela[0][2]=4;
    tabela[1][2]=10;
    tabela[2][0]=10;
    printf("PC: joguei na 1ª coluna 3ª linha.\n\n\t\tSua vez.\nEm qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("E em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=6;
    if(tabela[0][0]==6||tabela[0][1]==6||tabela[0][2]==6||tabela[1][2]==6||tabela[2][0]==6){
        printf("PC: caro oponente você esta jogando em uma parte que ja tem jogo.\n");
        system("pause");
    }
    if (tabela[1][1]==6 || tabela[1][0]==6 || tabela[2][2]==6 ||tabela[2][1]==6){
        q2WinGame(linha, coluna);
        return 0;
    }
    }while(tabela[0][0]==6||tabela[0][1]==6||tabela[0][2]==6||tabela[1][2]==6||tabela[2][0]==6);
    }
}//fim da quarta jogada
if (tabela[2][0]==2){//quinta jogada full
    do{
    system("cls || clear");
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |     |  O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2      |     |  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3  X   |     |  \n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[2][0]=2;
    tabela[0][2]=10;
    printf("PC: joguei na linha 1 coluna 3.\n\n\tSua vez.\nEm qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("Em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=4;

    if(tabela[1][0]==4||tabela[1][1]==4||tabela[1][2]==4||tabela[2][1]==4||tabela[2][2]==4){
        quinWinGame(linha, coluna);
        return 0;
    }
    if(tabela[0][0]!=10||tabela[2][0]!=2||tabela[0][2]!=10){
        printf("Amigão você esta jogando em uma parte que ja tem jogo.\n");
        system("pause");
    }
    }while(tabela[0][0]!=10||tabela[2][0]!=2||tabela[0][2]!=10);

    if(tabela[0][1]==4){//segunda jogada da quinta vez
        do{
        system("cls||clear");
        printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |  X  |  O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2      |     |  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3  X   |     |  O\n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[0][1]=2;
    tabela[0][2]=10;
    tabela[2][0]=4;
    tabela[2][2]=10;
    printf("PC: joguei na 3ª coluna 3ª linha.\n\n\t\tSua vez.\nEm qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("E em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=6;
    if(tabela[0][0]==6||tabela[0][1]==6||tabela[0][2]==6||tabela[2][0]==6||tabela[2][2]==6){
        printf("PC: caro oponente você esta jogando em uma parte que ja tem jogo.\n");
        system("pause");
    }
    if (tabela[1][0]==6 || tabela[1][1]==6 || tabela[1][2]==6 ||tabela[2][1]==6){
        quin2WinGame(linha, coluna);
        return 0;
    }
    }while(tabela[0][0]==6||tabela[0][1]==6||tabela[0][2]==6||tabela[2][2]==6||tabela[2][0]==6);
    }
}//fim da quinta jogada
if (tabela[2][1]==2){//sexta jogada full
    do{
    system("cls || clear");
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |     |  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2      |     |  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3   O  |  X  |  \n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[2][1]=2;
    tabela[2][0]=10;
    printf("PC: joguei na linha 3 coluna 1.\n\n\tSua vez.\nEm qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("Em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=4;

    if(tabela[0][1]==4||tabela[0][2]==4||tabela[1][1]==4||tabela[1][2]==4||tabela[2][2]==4){
        sexWinGame(linha, coluna);
        return 0;
    }
    if(tabela[0][0]!=10||tabela[2][1]!=2||tabela[2][0]!=10){
        printf("Amigão você esta jogando em uma parte que ja tem jogo.\n");
        system("pause");
    }
    }while(tabela[0][0]!=10||tabela[2][1]!=2||tabela[2][0]!=10);

    if(tabela[1][0]==4){//segunda jogada da sexta vez
        do{
        system("cls||clear");
        printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |     |  O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   X  |     |  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3   O  |  X  |  O\n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[2][1]=2;
    tabela[0][2]=10;
    tabela[1][0]=4;
    tabela[2][0]=10;
    printf("PC: joguei na 3ª coluna 1ª linha.\n\n\t\tSua vez.\nEm qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("E em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=6;
    if(tabela[0][0]==6||tabela[2][1]==6||tabela[0][2]==6||tabela[2][0]==6||tabela[1][0]==6){
        printf("PC: caro oponente você esta jogando em uma parte que ja tem jogo.\n");
        system("pause");
    }
    if (tabela[0][1]==6 || tabela[1][1]==6 || tabela[1][2]==6 ||tabela[2][2]==6){
        sex2WinGame(linha, coluna);
        return 0;
    }
    }while(tabela[0][0]==6||tabela[2][1]==6||tabela[0][2]==6||tabela[2][0]==6||tabela[1][0]==6);
    }
}//fim da sexta jogada
if (tabela[2][2]==2){//setima jogada full
    do{
    system("cls || clear");
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |     |  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2      |     |  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3   O  |     |  X \n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[2][2]=2;
    tabela[2][0]=10;
    printf("PC: joguei na linha 3 coluna 1.\n\n\tSua vez.\nEm qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("Em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=4;

    if(tabela[0][1]==4||tabela[0][2]==4||tabela[1][1]==4||tabela[1][2]==4||tabela[2][1]==4){
        setWinGame(linha, coluna);
        return 0;
    }
    if(tabela[0][0]!=10||tabela[2][0]!=2||tabela[2][2]!=10){
        printf("Amigão você esta jogando em uma parte que ja tem jogo.\n");
        system("pause");
    }
    }while(tabela[0][0]!=10||tabela[2][0]!=2||tabela[2][2]!=10);

    if(tabela[1][0]==4){//segunda jogada da setima vez
        do{
        system("cls||clear");
        printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |     |  O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2   X  |     |  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3   O  |     |  X \n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[2][2]=2;
    tabela[0][2]=10;
    tabela[1][0]=4;
    tabela[2][0]=10;
    printf("PC: joguei na 3ª coluna 1ª linha.\n\n\t\tSua vez.\nEm qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("E em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=6;
    if(tabela[0][0]==6||tabela[0][2]==6||tabela[1][0]==6||tabela[2][0]==6||tabela[2][2]==6){
        printf("PC: caro oponente você esta jogando em uma parte que ja tem jogo.\n");
        system("pause");
    }
    if (tabela[0][1]==6 || tabela[1][1]==6 || tabela[1][2]==6 ||tabela[2][1]==6){
        set2WinGame(linha, coluna);
        return 0;
    }
    }while(tabela[0][0]==6||tabela[0][2]==6||tabela[1][0]==6||tabela[2][0]==6||tabela[2][2]==6);
    }
}//fim da setima jogada
if (tabela[1][1]==2){//jogada no meio
    do{
    system("cls || clear");
    printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |     |  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2      |  X  |  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3      |     |  O \n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[1][1]=2;
    tabela[2][2]=10;
    printf("PC: joguei na linha 3 coluna 3.\n\n\tSua vez.\nEm qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("Em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=4;
    if (tabela[0][0]!=10 || tabela[1][1]!=2 || tabela[2][2]!=10){
        printf("Amigo você esta jogando em uma parte ja jogada.\n");
        system("pause");
    }
    }while(tabela[0][0]!=10 || tabela[1][1]!=2 || tabela[2][2]!=10);

    if (tabela[0][2]==4){//chance de ganhar
        do{
        system("cls || clear");
        printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |     |  X\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2      |  X  |  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3   O  |     |  O \n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[1][1]=2;
    tabela[2][0]=10;
    tabela[0][2]=4;
    tabela[2][2 ]=10;
    printf("PC: joguei na linha 3 coluna 1.\n\n\tSua vez.\nEm qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("Em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=6;
    if (tabela[0][0]==6 ||tabela[0][2]==6 ||tabela[1][1]==6 ||tabela[2][0]==6 ||tabela[2][2]==6){
        printf("Você está jogando em um espaço não disponivel.\n");
        system("pause");
    }
    if(tabela[0][1]==6|| tabela[1][0]==6|| tabela[1][2]==6||tabela[2][1]==6){
        meioWinGame(linha, coluna);
        return 0;
    }
    }while(tabela[0][0]==6 ||tabela[0][2]==6 ||tabela[1][1]==6 ||tabela[2][0]==6 ||tabela[2][2]==6);
    }//fechamtno do primerio win [0][2]
    if (tabela[2][0]==4){//segunda chance de ganhar
        do{
        system("cls || clear");
        printf(
    "    C1    C2    C3\n"
    "        |     |\n"
    "L1   O  |     |  O\n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L2      |  X  |  \n"
    "   _____|_____|____\n"
    "        |     |\n"
    "L3   X  |     |  O \n"
    "        |     |\n");
    tabela[0][0]=10;
    tabela[1][1]=2;
    tabela[2][0]=4;
    tabela[0][2]=10;
    tabela[2][2 ]=10;
    printf("PC: joguei na linha 1 coluna 3.\n\n\tSua vez.\nEm qual linha você gostaria de jogar: ");
    scanf("%d", &linhaX);
    printf("Em qual coluna você gostaria de jogar: ");
    scanf("%d", &colunaX);
    linha=linhaX-1;
    coluna=colunaX-1;
    tabela[linha][coluna]=6;
    if (tabela[0][0]==6 ||tabela[0][2]==6 ||tabela[1][1]==6 ||tabela[2][0]==6 ||tabela[2][2]==6){
        printf("Você está jogando em um espaço não disponivel.\n");
        system("pause");
    }
    if(tabela[0][1]==6|| tabela[1][0]==6|| tabela[1][2]==6||tabela[2][1]==6){
        meio2WinGame(linha, coluna);
        return 0;
    }
    }while(tabela[0][0]==6 ||tabela[0][2]==6 ||tabela[1][1]==6 ||tabela[2][0]==6 ||tabela[2][2]==6);
    }//fechamtno do segundo win [0][2]
    if (tabela[0][1]==4||tabela[1][0]==4||tabela[1][2]==4||tabela[2][1]==4){//sempre vai dar velha
        semprevelha(linha, coluna);
    }
}//fechamento da jogada no meio
}//fechamento do main
