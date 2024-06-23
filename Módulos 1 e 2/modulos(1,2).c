/*
Atividade Prática Supervisionada - APS
Módulo 1 e 2
Disciplina: Álgebra Linear
Professor: Manuel Martins Filho
Aluno: Vinícius do Nascimento Marinho
Matrícula: 2022200398
Turma: 926
*/

/*
Como podemos melhorar a segurança do algoritmo de criptografia ?

Para aprimorar a segurança de um algoritmo de criptografia, podemos adotar diversas abordagens, implementar
práticas de segurança adequadas e considerar fatores cruciais como integridade e autenticidade dos dados:

Técnicas de Ofuscação
A ofuscação de código é uma técnica utilizada para proteger o código-fonte de um programa, tornando-o mais
difícil de entender, analisar e modificar. Essa prática é especialmente eficaz para dificultar a engenharia
reversa e aumentar a segurança contra ataques.

*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>


//VARIAVEIS GLOBAIS:

//Matriz 3x2 que armazena a palavra original antes de ser codificada(elementos sao letras):
char m_original[3][2];

//Matriz 3x2 que armazena a palavra original apos ser codificada(elementos sao numeros):
int m_codificado[3][2];

//Vetor que armazena a palavra original apos ser codificada(elementos sao numeros):
int v_codificado[6];

 //Matriz 3x2 que armazena a criptografia de m_original:
int mc[3][2];

 //Matriz 3x2 que armazena a descriptografia de mc:
int m_dscrpto[3][2];

//Matriz 3x3 de descriptografia invertida;
const c_inversa[3][3] = {3, -2, 1, -1, 1, 0, -2, 2, -1};

//Matriz 3x3 de descriptografia:
const c[3][3] = {1, 0, 1, 1, 1, 1, 0, 2, -1};

//Sinal que indica para funçao exibir qual sera a matriz a ser exibida:
int sign;




void codificar(char c[]){

    int x;

    //Codifica a palavra e armazena no vetor v_codificado:
    for (int i = 0; i<6; i++){                    //
        switch (c[i]) {
            case 'a':
            case 'A':
                x = 1;
                break;
            case 'b':
            case 'B':
                x = 2;
                break;
            case 'c':
            case 'C':
                x = 3;
                break;
            case 'd':
            case 'D':
                x = 4;
                break;
            case 'e':
            case 'E':
                x = 5;
                break;
            case 'f':
            case 'F':
                x = 6;
                break;
            case 'g':
            case 'G':
                x = 7;
                break;
            case 'h':
            case 'H':
                x = 8;
                break;
            case 'i':
            case 'I':
                x = 9;
                break;
            case 'j':
            case 'J':
                x = 10;
                break;
            case 'k':
            case 'K':
                x = 11;
                break;
            case 'l':
            case 'L':
                x = 12;
                break;
            case 'm':
            case 'M':
                x = 13;
                break;
            case 'n':
            case 'N':
                x = 14;
                break;
            case 'o':
            case 'O':
                x = 15;
                break;
            case 'p':
            case 'P':
                x = 16;
                break;
            case 'q':
            case 'Q':
                x = 17;
                break;
            case 'r':
            case 'R':
                x = 18;
                break;
            case 's':
            case 'S':
                x = 19;
                break;
            case 't':
            case 'T':
                x = 20;
                break;
            case 'u':
            case 'U':
                x = 21;
                break;
            case 'v':
            case 'V':
                x = 22;
                break;
            case 'w':
            case 'W':
                x = 23;
                break;
            case 'x':
            case 'X':
                x = 24;
                break;
            case 'y':
            case 'Y':
                x = 25;
                break;
            case 'z':
            case 'Z':
                x = 26;
                break;
            default:
                x = 0;
                break;
        }
        v_codificado[i] = x;
    };

    //Armazena v_codificado(palavra codificada) na matriz m_codificado:
    int cont;
    for (int c = 0; c < 2; c++){
        for (int l = 0; l < 3; l++, cont++){
            m_codificado[l][c] = v_codificado[cont];
        }
    }

}

void descodificar(int m[3][2]){

    char x[3];
    int cont;

    for (int c = 0; c<2; c++){
        for (int l = 0; l<3; l++, cont++){

            switch (m[l][c]) {

                case 1:
                    x[cont] = 'A';
                    break;
                case 2:
                    x[cont] = 'B';
                    break;
                case 3:
                    x[cont] = 'C';
                    break;
                case 4:
                    x[cont] = 'D';
                    break;
                case 5:
                    x[cont] = 'E';
                    break;
                case 6:
                    x[cont] = 'F';
                    break;
                case 7:
                    x[cont] = 'G';
                    break;
                case 8:
                    x[cont] = 'H';
                    break;
                case 9:
                    x[cont] = 'I';
                    break;
                case 10:
                    x[cont] = 'J';
                    break;
                case 11:
                    x[cont] = 'K';
                    break;
                case 12:
                    x[cont] = 'L';
                    break;
                case 13:
                    x[cont] = 'M';
                    break;
                case 14:
                    x[cont] = 'N';
                    break;
                case 15:
                    x[cont] = 'O';
                    break;
                case 16:
                    x[cont] = 'P';
                    break;
                case 17:
                    x[cont] = 'Q';
                    break;
                case 18:
                    x[cont] = 'R';
                    break;
                case 19:
                    x[cont] = 'S';
                    break;
                case 20:
                    x[cont] = 'T';
                    break;
                case 21:
                    x[cont] = 'U';
                    break;
                case 22:
                    x[cont] = 'V';
                    break;
                case 23:
                    x[cont] = 'W';
                    break;
                case 24:
                    x[cont] = 'X';
                    break;
                case 25:
                    x[cont] = 'Y';
                    break;
                case 26:
                    x[cont] = 'Z';
                    break;
                default:
                    x[cont] = 0;
                    break;
            }
        };
    };
    printf("        ===============");
    printf(" A PALAVRA É: %s ", x);
    printf("===========\n\n");
};

void criptografar( int m[3][2]){

    //Multiplica c x m
    int t1 = (c[0][0] * m[0][0]) + (c[0][1] * m[1][0]) + (c[0][2] * m[2][0]);
    int t2 = (c[1][0] * m[0][0]) + (c[1][1] * m[1][0]) + (c[1][2] * m[2][0]);
    int t3 = (c[2][0] * m[0][0]) + (c[2][1] * m[1][0]) + (c[2][2] * m[2][0]);
    int t4 = (c[0][0] * m[0][1]) + (c[0][1] * m[1][1]) + (c[0][2] * m[2][1]);
    int t5 = (c[1][0] * m[0][1]) + (c[1][1] * m[1][1]) + (c[1][2] * m[2][1]);
    int t6 = (c[2][0] * m[0][1]) + (c[2][1] * m[1][1]) + (c[2][2] * m[2][1]);

    //Armazena os elementos criptografados em mc:
    mc[0][0] = t1; mc[0][1] = t4;
    mc[1][0] = t2; mc[1][1] = t5;
    mc[2][0] = t3; mc[2][1] = t6;

}

void descriptografar(int mc[3][2]){

    int t1 = (c_inversa[0][0] * mc[0][0]) + (c_inversa[0][1] * mc[1][0]) + (c_inversa[0][2] * mc[2][0]);
    int t2 = (c_inversa[1][0] * mc[0][0]) + (c_inversa[1][1] * mc[1][0]) + (c_inversa[1][2] * mc[2][0]);
    int t3 = (c_inversa[2][0] * mc[0][0]) + (c_inversa[2][1] * mc[1][0]) + (c_inversa[2][2] * mc[2][0]);
    int t4 = (c_inversa[0][0] * mc[0][1]) + (c_inversa[0][1] * mc[1][1]) + (c_inversa[0][2] * mc[2][1]);
    int t5 = (c_inversa[1][0] * mc[0][1]) + (c_inversa[1][1] * mc[1][1]) + (c_inversa[1][2] * mc[2][1]);
    int t6 = (c_inversa[2][0] * mc[0][1]) + (c_inversa[2][1] * mc[1][1]) + (c_inversa[2][2] * mc[2][1]);

    m_dscrpto[0][0] = t1; m_dscrpto[0][1] = t4;
    m_dscrpto[1][0] = t2; m_dscrpto[1][1] = t5;
    m_dscrpto[2][0] = t3; m_dscrpto[2][1] = t6;

}

void exibir(int m[3][2], char m_char[3][2], int cc[3][3], int sign){

    if(sign == 0){

        printf("\n        ===============================================\n");
        printf("    A)              MATRIZ M - ORIGINAL\n");
        printf("        ===============================================\n\n");

    }else if(sign == 1){

        printf("\n        ===============================================\n");
        printf("    B)              MATRIZ M - CODIFICADA\n");
        printf("        ===============================================\n\n");

    }else if( sign == 2) {

        printf("\n        ===============================================\n");
        printf("    C)              MATRIZ M - CRIPTOGRAFADA\n");
        printf("        ===============================================\n\n");

    }else if( sign == 3) {

        printf("\n        ===============================================\n");
        printf("    A)              MATRIZ M - DESCRIPTOGRAFADA\n");
        printf("        ===============================================\n\n");

        descodificar(m_dscrpto);

    }else if( sign == 4) {

        printf("\n        ===============================================\n");
        printf("    B)             MATRIZ C - ORIGINAL\n");
        printf("        ===============================================\n\n");

    }else if( sign == 5) {

        printf("\n        ===============================================\n");
        printf("    C)             MATRIZ C - INVERSA\n");
        printf("        ===============================================\n\n");

    }


    if(sign == 0){

        for (int l = 0; l < 3; l++){
            for (int c = 0; c < 2; c++){
                printf("        Índice(%d,%d): ",l, c);
                printf("[ %c ] ",m_char[l][c]);
            }
            printf("\n\n");
        }

    }else if( sign == 4 || sign == 5 ){

        for (int l = 0; l < 3; l++){
            for (int c = 0; c < 3; c++){
                printf("        Índice(%d,%d): ",l, c);
                printf("[ %d ] ", cc[l][c]);
            }
            printf("\n\n");
        }

    }else {
        for (int l = 0; l < 3; l++){
            for (int c = 0; c < 2; c++){
                printf("        Índice(%d,%d): ",l, c);
                printf("[ %d ] ",m[l][c]);
            }
            printf("\n\n");
        }
    };

}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char palavra[6];
    int m[3][2];
    int cont;

    printf(" ========================================\n");
    printf("        MÓDULO 1 - CRIPTOGRAFAR\n");
    printf(" ========================================\n\n");


    printf("  Digite a palavra (6 dígitos)=> ");
    scanf("%s", &palavra);
    fflush(stdin);

     //Insere a palavra em uma matriz 3x2:
    for (int c = 0; c < 2; c++){
        for (int l = 0; l < 3; l++, cont++){
            m_original[l][c] = palavra[cont];
        }
    } cont = 0;

    //Chama a funçao para exibir m_original(matriz original):
    exibir("", m_original,"", sign = 0);

     //Chama a funçao para codificar a palavra:
    codificar(palavra);

    //Chama a funcao para exibir m_codificado(matriz codificada):
    exibir(m_codificado,"","", sign = 1);

    //Chama a funcao para criptografar m_codificado:
    criptografar(m_codificado);

    //Chama a funcao para exibir mc:
    exibir(mc,"","", sign = 2);

    printf(" ========================================\n");
    printf("        MÓDULO 2 - DESCRIPTOGRAFAR\n");
    printf(" ========================================\n\n");

    printf("  Digite a matriz a ser descriptografada =>\n\n");

    //Armazena os elementos em m:
    for(int l = 0; l < 3; l++){
            for(int c = 0; c < 2; c++){
                printf("  Índice(%d,%d) = ",l,c);
                scanf("%d", &m[l][c]);
                fflush(stdin);
        }
    }

    //Chama a funcao para descriptografar m:
    descriptografar(m);

    //Exibe e descodifica m_dscrpto(matriz descriptografada):
    exibir(m_dscrpto, "","", sign = 3);

    //Exibe a matriz c:
    exibir("", "", c, sign = 4);

    //Exibe a matriz c invertida:
    exibir("", "", c_inversa, sign = 5);



    //FIM DE CODIGO;
    printf("\n\nDigite 'f' para encerrar.....");
    scanf("%s", &palavra);
    fflush(stdin);

    return 0;
}
