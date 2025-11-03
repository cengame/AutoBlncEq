#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define binbash system("reset"); //PROCEDURAL GEDANKENEXPERIMENT RESTORE

int main() {

        setlocale(LC_ALL, "");

        printf("Digite o número de ÁTOMOS DE CARBONO na molécula de combustível:\n");
        int x = 0, y = 0;
        scanf("%d", &x);

        printf("Digite o número de ÁTOMOS DE HIDROGÊNIO na molécula de combustível:\n");
        scanf("%d", &y);
        binbash

        printf("Fórmula do Combustível:\n");
        printf("C H \n");
        printf(" %d %d", x , y);
        printf("\n");

        int C = x;
        int D = y / 2;
        int B = (C * 2 + D);

        if(B == 1 && C == 1 && D == 1)
        {
                printf("C H (g) + O (g) -> CO (g) + H O (l)\n");
                printf(" %d %d     2         2       2 ", x, y);
        }else if (B == 1 && C == 1)
        {
                printf("C H (g) + O (g) -> CO (g) + %d H O (l)\n", D);
                printf(" %d %d     2         2          2", x, y);
        }else if(B == 1)
        {
                printf("C H (g) + O (g) -> %d CO (g) + %d H O (l)\n", C, D);
                printf(" %d %d     2            2          2", x, y);
        }else printf("C H (g) + %d O (g) -> %d CO (g) + %d H O (l)\n", B, C, D);
                printf(" %d %d      2            2          2\n", x, y);

        return 0;
}

/*Créditos: ALGORITMO: ATLAS::ED.Moderna.*/
/*COMPILADO SOB G++ ARCH LINUX ISO-8859-1*/
/*LIVRE PARA DEMONSTRAÇÃO, ENSINO E PESQUISA*/

//--help O PROGRAMA CALCULA A EQUAÇÃO QUÍMICA BALANCEADA DA COMBUSTÃO DE UM HIDROCARBONETO SIMPLES (CxHy)
//EXIBE O RESULTADO NO TERMINAL EM LINGUAGEM NATURAL

//O ESCOPO PERMITE A EXTENSÃO PARA OUTROS TIPOS DE COMBUSTÍVEIS E REAÇÕES QUÍMICAS 
