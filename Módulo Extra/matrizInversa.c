/*
Atividade Pratica Supervisionada - APS
Modulo Extra
Disciplina: Algebra Linear
Professor: Manuel Martins Filho
Aluno: Vinicius do Nascimento Marinho
Matricula: 2022200398
Turma: 926
*/

/* Metodos Utilizados:
Matriz inversa de segunda ordem:   https://youtu.be/F10TdwBH8qc?si=7wyAB7kAoKafq4gJ
Matriz inversa de terceira ordem:  https://youtu.be/xY02ioZP4kE?si=fnAntEkthn_8j4EW
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct {

    int ordem;
    float matriz[10][10];

} Matriz;



int inversa_segunda_ordem(float M2[10][10], int det){

    int ptr;

    ptr = M2[0][0];
    M2[0][0] = M2[1][1];
    M2[1][1] = ptr;

    M2[0][1] = M2[0][1] * -1;
    M2[1][0] = M2[1][0] * -1;

    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 2; c++){
            M2[l][c] = M2[l][c] / det;
        }
    }

    printf("\n    ===============================================\n");
    printf("             MATRIZ INVERSA - SEGUNDA ORDEM\n");
    printf("    ===============================================\n\n");

    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 2; c++){
            printf("    Índice(%d,%d) = ",l,c);
            printf("[ %.1f ] ",M2[l][c]);
        }
        printf("\n\n");

    };

    return M2;
};

int inversa_terceira_ordem(float M3[10][10], int det){

    float matrizCof[10][10];
    float matrizCofTransposta[10][10];
    float matAux1[10][10];
    float detMatAux1;
    float matAux2[10][10];
    float detMatAux2;
    float matAux3[10][10];
    float detMatAux3;
    float matAux4[10][10];
    float detMatAux4;
    float matAux5[10][10];
    float detMatAux5;
    float matAux6[10][10];
    float detMatAux6;
    float matAux7[10][10];
    float detMatAux7;
    float matAux8[10][10];
    float detMatAux8;
    float matAux9[10][10];
    float detMatAux9;


    matAux1[0][0] = M3[1][1]; matAux1[0][1] = M3[1][2];
    matAux1[1][0] = M3[2][1]; matAux1[1][1] = M3[2][2];
    detMatAux1 = det_segunda_ordem(matAux1, 0);
    ///////////////////////////////////////////////
    matAux2[0][0] = M3[1][0]; matAux2[0][1] = M3[1][2];
    matAux2[1][0] = M3[2][0]; matAux2[1][1] = M3[2][2];
    detMatAux2 = det_segunda_ordem(matAux2, 0);
    //////////////////////////////////////////////
    matAux3[0][0] = M3[1][0]; matAux3[0][1] = M3[1][1];
    matAux3[1][0] = M3[2][0]; matAux3[1][1] = M3[2][1];
    detMatAux3 = det_segunda_ordem(matAux3, 0);
    ///////////////////////////////////////////////
    matAux4[0][0] = M3[0][1]; matAux4[0][1] = M3[0][2];
    matAux4[1][0] = M3[2][1]; matAux4[1][1] = M3[2][2];
    detMatAux4 = det_segunda_ordem(matAux4, 0);
    ///////////////////////////////////////////////
    matAux5[0][0] = M3[0][0]; matAux5[0][1] = M3[0][2];
    matAux5[1][0] = M3[2][0]; matAux5[1][1] = M3[2][2];
    detMatAux5 = det_segunda_ordem(matAux5, 0);
    ///////////////////////////////////////////////
    matAux6[0][0] = M3[0][0]; matAux6[0][1] = M3[0][1];
    matAux6[1][0] = M3[2][0]; matAux6[1][1] = M3[2][1];
    detMatAux6 = det_segunda_ordem(matAux6, 0);
    ///////////////////////////////////////////////
    matAux7[0][0] = M3[0][1]; matAux7[0][1] = M3[0][2];
    matAux7[1][0] = M3[1][1]; matAux7[1][1] = M3[1][2];
    detMatAux7 = det_segunda_ordem(matAux7, 0);
    ///////////////////////////////////////////////
    matAux8[0][0] = M3[0][0]; matAux8[0][1] = M3[0][2];
    matAux8[1][0] = M3[1][0]; matAux8[1][1] = M3[1][2];
    detMatAux8 = det_segunda_ordem(matAux8, 0);
    ///////////////////////////////////////////////
    matAux9[0][0] = M3[0][0]; matAux9[0][1] = M3[0][1];
    matAux9[1][0] = M3[1][0]; matAux9[1][1] = M3[1][1];
    detMatAux9 = det_segunda_ordem(matAux9, 0);
    ///////////////////////////////////////////////
    //////////////////////////////////////////////
    matrizCof[0][0] = detMatAux1; matrizCof[0][1] = detMatAux2 * -1; matrizCof[0][2] = detMatAux3;
    matrizCof[1][0] = detMatAux4 * -1; matrizCof[1][1] = detMatAux5; matrizCof[1][2] = detMatAux6 * -1;
    matrizCof[2][0] = detMatAux7; matrizCof[2][1] = detMatAux8 * -1; matrizCof[2][2] = detMatAux9;

    for(int l = 0; l < 3; l++){
            for(int c = 0; c < 3; c++){
            matrizCofTransposta[c][l] = matrizCof[l][c];
        }
    }

    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            M3[l][c] = matrizCofTransposta[l][c] / det;
        }
    }

    printf("\n    ==========================================================================\n");
    printf("                           MATRIZ INVERSA - TERCEIRA ORDEM\n");
    printf("    ==========================================================================\n\n");

    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            printf("    Índice(%d,%d) = ",l,c);
            printf("[ %.1f ] ",M3[l][c]);
        }
        printf("\n\n");

    }

    return 0;

};

int det_segunda_ordem(float M2[10][10], int sign){

    float det;

    det = M2[0][0] * M2[1][1] - M2[0][1] * M2[1][0];

    if(sign == 1) {

        printf("    ============ ");
        printf("( DETERMINANTE = %.1f )", det);
        printf(" ============\n");
    }

    return det;
};

int det_terceira_ordem(float M3[10][10], int sign){


    float det;
    float matAux[3][2];

    matAux[0][0] = M3[0][0]; matAux[0][1] = M3[0][1];
    matAux[1][0] = M3[1][0]; matAux[1][1] = M3[1][1];
    matAux[2][0] = M3[2][0]; matAux[2][1] = M3[2][1];

    det = ((M3[0][0] * M3[1][1] * M3[2][2]) + (M3[0][1] * M3[1][2] * matAux[2][0]) + (M3[0][2] * matAux[1][0] * matAux[2][1])) - ((matAux[0][1] * matAux[1][0] * M3[2][2]) + (matAux[0][0] * M3[1][2] * M3[2][1]) + (M3[0][2] * M3[1][1] * M3[2][0]));

    if (sign == 1) {

        printf("    ======================== ");
        printf("( DETERMINANTE = %.1f )", det);
        printf(" ==========================\n");
    }

    return det;
};

void exibir( float matriz[10][10], int ordem){


    if(ordem == 2){

        printf("\n    ===============================================\n");
        printf("               MATRIZ - SEGUNDA ORDEM\n");
        printf("    ===============================================\n\n");

        for(int l = 0; l < 2; l++){
            for(int c = 0; c < 2; c++){
                printf("    Índice(%d,%d) = ",l,c);
                printf("[ %.1f ] ",matriz[l][c]);
            }
            printf("\n\n");

        }

    }else if (ordem == 3){

        printf("\n    ==========================================================================\n");
        printf("                           MATRIZ - TERCEIRA ORDEM\n");
        printf("    ==========================================================================\n\n");

         for(int l = 0; l < 3; l++){
            for(int c = 0; c < 3; c++){
                printf("    Índice(%d,%d) = ",l,c);
                printf("[ %.1f ] ",matriz[l][c]);
            }
            printf("\n\n");

        }
    }

}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Matriz matriz = {};
    char palavra[1];
    int det;


    printf(" ========================================\n");
    printf("       MÓDULO EXTRA - MATRIZ INVERSA\n");
    printf(" ========================================\n\n");

    printf(" Ordem da matriz (2 ou 3) =>  ");
    scanf("%d", &matriz.ordem);
    fflush(stdin);

    printf("\n ========================================\n");

    if(matriz.ordem == 2) {

        printf("\n Digite os elementos da matriz de segunda ordem =>\n\n");

        //Armazena os elementos na matriz 2x2
        for(int l = 0; l < 2; l++){
            for(int c = 0; c < 2; c++){
                printf(" Índice(%d,%d) = ",l,c);
                scanf("%f", &matriz.matriz[l][c]);
                fflush(stdin);
            }
        }

        //Exibe a matriz
        exibir(matriz.matriz, matriz.ordem);

        //Chama a funçao para achar o determinante e armazena o valor retornado na variavel det:
        det = det_segunda_ordem(matriz.matriz, 1);

        if ( det == 0){

            printf("\n    ===============================================\n");
            printf("             MATRIZ INVERSA NÃO EXISTE!! \n");
            printf("    ===============================================\n\n");

        } else {
            //Inverte a matriz de segunda ordem:
            inversa_segunda_ordem(matriz.matriz, det);
        };


    }else if(matriz.ordem == 3) {

        printf("\n Digite os elementos da matriz de terceira ordem =>\n\n");

        //Armazena os elementos na matriz 3x3
        for(int l = 0; l < 3; l++){
            for(int c = 0; c < 3; c++){
                printf(" Índice(%d,%d) = ",l,c);
                scanf("%f", &matriz.matriz[l][c]);
                fflush(stdin);
            }
        };

        //Exibe a matriz
        exibir(matriz.matriz, matriz.ordem);

        //Chama a funçao para achar o determinante e armazena o valor retornado na variavel det:
        det = det_terceira_ordem(matriz.matriz, 1);

        if ( det == 0){

            printf("\n    ==========================================================================\n");
            printf("                         MATRIZ INVERSA NÃO EXISTE!! \n");
            printf("    ==========================================================================\n\n");

        } else {

            //Inverte a matriz de terceira ordem:
            inversa_terceira_ordem(matriz.matriz, det);
        };

    };

    //FIM DE CODIGO;
    printf("\n\nDigite 'f' para encerrar.....");
    scanf("%s", &palavra);
    fflush(stdin);


    return 0;
}
