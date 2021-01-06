//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

int main(void) {//começo do codigo
	setlocale(LC_ALL, "Portuguese"); //Habilita acentos e sinais
	struct ponto2d {//struct-estrutura principal
		float x;//variavel
		float y;//variavel
	}ponto2d;

	struct ponto2d
		ponto_inicial, * prtx, *prty;//declaração da struct inicial apontando para a ponto2d
	prtx = &ponto_inicial;//leitura de dados 
	prty = &ponto_inicial;//leitura de dados
	
	struct ponto2d
		ponto_final, * pont2y, *pont2x;//declaração da struct final apontando para a ponto2d
	pont2y = &ponto_final;//leitura de dados
	pont2x = &ponto_final;//leitura de dados

	int menu;
	do {//laço de repetição
		printf("______________________________________________________________________________________________________________________");//apenas para ficar mais bonito
		printf("\t\t\t\tCalculador de distancia entre pontos\n");//titulo
		printf("______________________________________________________________________________________________________________________");//apenas para ficar mais bonito
		printf("\n[1] Digitar os valores do primeiro ponto.");//instruçãõ
		printf("\n[2] Digitar os valores do segundo ponto.");//instrução
		printf("\n[3] Mostrar a distancia entre os pontos.");//intrução
		printf("\n[4] Sair.");//instrução
		printf("\nEscolha uma das opções: ");
		scanf_s("%d", &menu);

		switch (menu) {

		case 1://pega os valores iniciais dos pontos x e y  e guarda
			printf("\nInforme o valor do 1° ponto inicial x: \n");
			scanf_s("%f", &prtx->x);
			printf("\nInforme o valor do 2° ponto inicial y: \n");
			scanf_s("%f", &prty->y);
			break;//pausa
		case 2://pega os valores finais dos pontos x e y
			printf("\nInforme o valor do 1° ponto final x: \n");
			scanf_s("%f", &pont2x->x);
			printf("\nInforme o valor do 2° ponto final y: \n");
				scanf_s("%f", &pont2y->y);
			break;//pausa
		case 3://faz a conta da distancia entre os pontos
			double d;
			double po1, po2;
			double soma, pot;
			po1 = prtx->x - pont2x->x;
			po2 = prty->y - pont2y->y;
			pot = pow(po1, 2) + pow(po2, 2);
			d = sqrt(pot);
			printf("\n Calculo de distancia dos pontos é: %.2f \n", d);
			break;

		case 4://case de fim de calculos usado para sair no programa

			system("pause");
			return 0;
		}

	} while (menu >0 || menu <5);//laço de repetição com os parametros de escolha do menu (de 1 a 4)
}