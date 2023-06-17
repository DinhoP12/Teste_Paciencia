#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    	char resposta;
    	int dif, certo[0], errado[0], nomecontrol=0,b_cq=0, cq_1=0, cq_2=0, cq_3=0,cq_4=0,cq_5=0;
    	int trof_o=0, trof_p=0, trof_b=0;
    printf("\n\n\n\n\n\n\n");
    atencao();
    SetConsoleTextAttribute(hConsole,15);
    printf("\n\t\t\t[ PARA MELHOR EXPERIENCIA DO JOGO NÃO COLOQUE EM TELA CHEIA ]");
    getch();
    carregando1 ();
    Sleep(700);printf
    ("\n\t\t\t\t\t\t   [ COMPLETO ]");
    Sleep(1000);
    system("cls");
    SetConsoleTextAttribute(hConsole,15);
    menup:
    painel();
    printf("\n\n\n");
    painelf();
        Sleep(200);
        printf("\n\n\t\t\t\t\tPreSione qualquer TECLA para COMEÇAR");
        getchar();
    while(1)
        {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            char nome[40];
            int menup,menuc,menu;
                if(nomecontrol==0)
                {
                    system("cls");
                    printf("\n\n\n");
                    painelf();
                    printf("\n\t\t\t\t\t       Digite seu Nickname\n\t\t\t\t\t\t");
                    SetConsoleTextAttribute(hConsole,10);
                    scanf("%s",&nome);
                    nomecontrol++;
                }
        system("cls");
         SetConsoleTextAttribute(hConsole,14);
         printf("\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t*======================================*\n");
        SetConsoleTextAttribute(hConsole,13);
            printf("\t\t\t\t\t              BEM VINDO\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t\t\t                %s\n",nome);
        SetConsoleTextAttribute(hConsole,13);
            printf("\t\t\t\t\t    Escolha uma Opção para continuar\n");
        SetConsoleTextAttribute(hConsole,14);
            printf("\t\t\t\t\t*=========[TESTE DE PACIENCIA]=========*\n\n");
            printf("\t\t\t\t\t          *======[MENU]======*\n");
        SetConsoleTextAttribute(hConsole,13);
            printf("\t\t\t\t\t          |                  |\n");
            printf("\t\t\t\t\t          |  [1] Play        |\n");
            printf("\t\t\t\t\t          |  [2] Créditos    |\n");
            printf("\t\t\t\t\t          |  [3] Conquistas  |\n");
            printf("\t\t\t\t\t          |  [4] Sair        |\n");
            printf("\t\t\t\t\t          |                  |\n");
        SetConsoleTextAttribute(hConsole,14);
            printf("\t\t\t\t\t          *==================*\n");
         SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t\t\t            Escolha um Opção:");
        SetConsoleTextAttribute(hConsole,15);
        scanf("%i", &menu);
                    if(menu==4)
                    {
                        system("cls");
                        SetConsoleTextAttribute(hConsole,14);
                        printf("\n\n\n\n\n\n\n\n\n");
                        printf("\t\t\t\t\t        *========[FECHANDO]========*\n");
                        SetConsoleTextAttribute(hConsole,12);
                        printf("\t\t\t\t\t        |                          |\n");
                        printf("\t\t\t\t\t        |    Obrigado por jogar    |\n");
                        printf("\t\t\t\t\t        |      Volte sempre :)     |\n");
                        printf("\t\t\t\t\t        |                          |\n");
                        SetConsoleTextAttribute(hConsole,14);
                        printf("\t\t\t\t\t        *==========================*\n");
                        Sleep(1500);
                    exit(0);
                    }
        if (menu==1||menu==2||menu==3)
        switch (menu)
            {
                case 3:
                    {
                system("cls");
                SetConsoleTextAttribute(hConsole,14);
                printf("\n\n\n\n\n\n\n");
                printf("\t\t\t\t        *========[CONQUISTAS]========*\n");
                printf("\t\t\t\t         ");if(cq_1==0)conqb();
                if(cq_1==1) conq1();
                printf("\t\t\t\t         ");if(cq_2==0)conqb();
                if(cq_2==1) conq2();
                printf("\t\t\t\t         ");if(cq_3==0)conqb();
                if(cq_3==1) conq3();
                printf("\t\t\t\t         ");if(cq_4==0)conqb();
                if(cq_4==1) conq4();
                printf("\t\t\t\t         ");if(cq_5==0)conqb();
                if(cq_5==1) conq5();
                if (b_cq==0)br_cq0();if (b_cq==1)br_cq20();if (b_cq==2)br_cq40();
                if (b_cq==3)br_cq60();if (b_cq==4)br_cq80();if (b_cq>4)br_cq100();
                printf("\t\t\t\t        *============================*\n");
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,14);
        printf("\n");
            printf("\t\t\t\t             XXXXXXXXXXX     \n");
            printf("\t\t\t\t          XXXXXXXXXXXXXXXXX  \n");
            printf("\t\t\t\t          X  XXXXXXXXXXX  X  \n");
            printf("\t\t\t\t          XX XXXXXXXXXXX XX  ");printf("%i - OURO\n",trof_o);
            printf("\t\t\t\t           XXXXXXXXXXXXXXX   ");printf("%i - PRATA\n",trof_p);
            printf("\t\t\t\t             XXXXXXXXXXX     ");printf("%i - BRONZE\n",trof_b);
            printf("\t\t\t\t              XXXXXXXXX      \n");
            printf("\t\t\t\t               XXXXXXX       \n");
            printf("\t\t\t\t                 XXX         \n");
            printf("\t\t\t\t                 XXX         \n");
            printf("\t\t\t\t                 XXX         \n");
            printf("\t\t\t\t                XXXXX        \n");
            printf("\t\t\t\t               XXXXXXX       \n");
            printf("\t\t\t\t               XXXXXXX       \n");
                getch();
                break;
                    }
                case 1:
                {
                    int vida=3,per;
                    for(per=0;per<1;)
                    { ///PERGUNTA 1
                    system("cls");
                    painelf();
                    printf ("\t\t\t\t1-) Mauricio de Sousa \n");
                    printf ("\t\t\t\tA) 12/03/1936");vidac();
                    printf ("\t\t\t\tB) 27/01/1938");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\t\tC) 12/12/1930");vidab();
                    printf ("\t\t\t\tD) 27/10/1935\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa Correta é ? :");
                        scanf ("%s",&resposta);
                            if (resposta == 'd'||resposta == 'D')
                                {
                                  acertou ();
                                  per++;
                                  if(cq_3==0){cq_3++;b_cq++;}
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 2
                    system("cls");
                    painelf();
                    printf ("\t\t\t2-) 8  ? 15 ? 7 = 113  \n");
                    printf ("\t\t\tA) X -");vidac();
                    printf ("\t\t\tB) X /");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) + X");vidab();
                    printf ("\t\t\tD) - X\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'a'||resposta == 'A')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 3
                    system("cls");
                    system("color 1f");
                    Sleep(200);
                    system("color 0f");
                    painelf();
                    printf ("\t\t\t3-)Qual a Cor que piscou?\n");
                    printf ("\t\t\tA) Azul    ");vidac();
                    printf ("\t\t\tB) Vermelho");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) Verde   ");vidab();
                    printf ("\t\t\tD) Roxo\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'a'||resposta == 'A')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 4
                    system("cls");
                    painelf();
                    printf ("\t\t\t4-)Qual NÃO pertence ao grupo?\n");
                    printf ("\t\t\tA) Baleia  ");vidac();
                    printf ("\t\t\tB) Morcego7");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) Galinha ");vidab();
                    printf ("\t\t\tD) Urso\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'c'||resposta == 'C')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 5
                    system("cls");
                    painelf();
                    printf ("\t\t\t5-)Se eu ultrapasso o 2º fico em?\n");
                    printf ("\t\t\tA) Primeiro");vidac();
                    printf ("\t\t\tB) Terceiro");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) Segundo ");vidab();
                    printf ("\t\t\tD) Nenhum\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'c'||resposta == 'C')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 6
                    system("cls");
                    painelf();
                    printf ("\t\t\t6-)Quantos animais Moisés colocou na arca?\n");
                    printf ("\t\t\tA) Nenhum           ");vidac();
                    printf ("\t\t\tB) 2 de cada espécie");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) Todos            ");vidab();
                    printf ("\t\t\tD) 8 Milhões\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'a'||resposta == 'A')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 7
                    system("cls");
                    painelf();
                    printf ("\t\t\t7-)2, 10, 12, 16, 17, 18, 19...\n");
                    printf ("\t\t\tA) 20  ");vidac();
                    printf ("\t\t\tB) 315 ");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) 26  ");vidab();
                    printf ("\t\t\tD) 200\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'd'||resposta == 'D')
                                {
                                  acertou ();
                                  per++;
                                  if (cq_2==0){cq_2++;b_cq++;}
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 8
                    system("cls");
                    painelf();
                    printf ("\t\t\t8-) “Deus está morto” \n");
                    printf ("\t\t\tA) Pitágoras       ");vidac();
                    printf ("\t\t\tB) Tales de Mileto ");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) Nietzsche       ");vidab();
                    printf ("\t\t\tD) Platão \n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'c'||resposta == 'C')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 9
                    system("cls");
                    painelf();
                    printf ("\t\t\t9-) Você tem Fósforo, vela, lampião e fogueira, qual você acende primeiro? \n");
                    printf ("\t\t\tA) Vela    ");vidac();
                    printf ("\t\t\tB) Lampião ");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) Fósforo ");vidab();
                    printf ("\t\t\tD) Fogueira \n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'c'||resposta == 'C')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 10
                    system("cls");
                    painelf();
                    printf ("\t\t\t10-)Em qual lugar estava a resposta da pergunta 3? \n");
                    printf ("\t\t\tA) A");vidac();
                    printf ("\t\t\tB) B");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) C");vidab();
                    printf ("\t\t\tD) D\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'a'||resposta == 'A')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 11
                    system("cls");
                    painelf();
                    printf ("\t\t\t11-) Quantos BIT tem um BYTE ?\n");
                    printf ("\t\t\tA) 6 ");vidac();
                    printf ("\t\t\tB) 8 ");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) 16");vidab();
                    printf ("\t\t\tD) 5\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'b'||resposta == 'B')
                                {
                                  acertou ();
                                  per++;
                                 if(cq_5==0){cq_5++;b_cq++;}
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 12
                    system("cls");
                    painelf();
                    printf ("\t\t\t12-)”Nada se cria, tudo se ....” -Antoine L.\n");
                    printf ("\t\t\tA) Copia     ");vidac();
                    printf ("\t\t\tB) Faz       ");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) Transforma");vidab();
                    printf ("\t\t\tD) Conquista\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'c'||resposta == 'C')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 13
                    system("cls");
                    painelf();
                    printf ("\t\t\t13-) Tempo do reinado de Luís XIX? \n");
                    printf ("\t\t\tA) 20 meses");vidac();
                    printf ("\t\t\tB) 20 anos ");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) 20 dias ");vidab();
                    printf ("\t\t\tD) 20 minutos \n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'd'||resposta == 'D')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 14
                    system("cls");
                    painelf();
                    printf ("\t\t\t14-)1=4, 2=8, 3=12, 4=? \n");
                    printf ("\t\t\tA) 16");vidac();
                    printf ("\t\t\tB) 1 ");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) 4 ");vidab();
                    printf ("\t\t\tD) 11\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'b'||resposta == 'B')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 15
                    system("cls");
                    painelf();
                    printf ("\t\t\t15-)New Beatle é? \n");
                    printf ("\t\t\tA) Carro");vidac();
                    printf ("\t\t\tB) Banda");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) Jóia ");vidab();
                    printf ("\t\t\tD) Animal\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'a'||resposta == 'A')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 16
                    system("cls");
                    painelf();
                    printf ("\t\t\t16-) Fobia de Prova \n");
                    printf ("\t\t\tA) Testefobia ");vidac();
                    printf ("\t\t\tB) Testofobia ");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) Provafobia ");vidab();
                    printf ("\t\t\tD) Frescura \n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'b'||resposta == 'B')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 17
                    system("cls");
                    painelf();
                    printf ("\t\t\t17-)O mais antigo? \n");
                    printf ("\t\t\tA) Barata   ");vidac();
                    printf ("\t\t\tB) Água-Vida");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) Tubarão  ");vidab();
                    printf ("\t\t\tD) Dinossauro\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'b'||resposta == 'B')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 18
                    system("cls");
                    painelf();
                    printf ("\t\t\tXX-) <- Qual o número da próxima questão?\n");
                    printf ("\t\t\tA) 20");vidac();
                    printf ("\t\t\tB) 18");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) 19");vidab();
                    printf ("\t\t\tD) 22\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'b'||resposta == 'B')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 19
                    system("cls");
                    painelf();
                    printf ("\t\t\t19-) Qual o próximo numero 0,2,3,6,7,8,9...? \n");
                    printf ("\t\t\tA) 12");vidac();
                    printf ("\t\t\tB) 14");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) 11");vidab();
                    printf ("\t\t\tD) 18\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'c'||resposta == 'C')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 20
                    system("cls");
                    painelf();
                    printf ("\t\t\t20-) Quantos segundos tem um dia? \n");
                    printf ("\t\t\tA) 36000");vidac();
                    printf ("\t\t\tB) 86400");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) 92500");vidab();
                    printf ("\t\t\tD) 24000\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'b'||resposta == 'B')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 21
                    system("cls");
                    SetConsoleTextAttribute(hConsole,8);
                    if (vida<3) printf("\t\t\t\t\t\t\t\t\t\t\t\t\tG)+1Vida\n");
                    painelf();
                    printf ("\t\t\t21-)Onde nasceu o Rei do futebol?\n");
                    printf ("\t\t\tA) Manaus-AM ");vidac();
                    printf ("\t\t\tB) Santos-SP ");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) Sana-RJ   ");vidab();
                    printf ("\t\t\tD) Três Corações-MG\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                        if (vida<3 && resposta=='g'||resposta=='G')
                        {vida++;per++;bazinga();resposta = 'd';}
                            if (resposta == 'd'||resposta == 'D')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 22
                    system("cls");
                    painelf();
                    printf ("\t\t\t22-)De onde é a invenção do chuveiro elétrico?\n");
                    printf ("\t\t\tA) França");vidac();
                    printf ("\t\t\tB) U.S.A ");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) Brasil");vidab();
                    printf ("\t\t\tD) China\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'c'||resposta == 'C')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 23
                    system("cls");
                    painelf();
                    printf ("\t\t\t??-) Qual o Numero desta questão? \n");
                    printf ("\t\t\tA) 21");vidac();
                    printf ("\t\t\tB) 22");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) 23");vidab();
                    printf ("\t\t\tD) 25\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'c'||resposta == 'C')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 24
                    system("cls");
                    painelf();
                    printf ("\t\t\t??-) Quantas questões faltam para terminar? \n");
                    printf ("\t\t\tA) 4");vidac();
                    printf ("\t\t\tB) 7");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) 6");vidab();
                    printf ("\t\t\tD) 5\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'b'||resposta == 'B')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 25
                    system("cls");
                    painelf();
                    printf ("\t\t\t25-) H2O PE/PF, respectivamente? \n");
                    printf ("\t\t\tA) 99/-1  ");vidac();
                    printf ("\t\t\tB) 97 / 57");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) 0 / 100");vidab();
                    printf ("\t\t\tD) 100 / 0 \n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'd'||resposta == 'D')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 26
                    system("cls");
                    painelf();
                    printf ("\t\t\t26-) O que é cantonês? \n");
                    printf ("\t\t\tA) Pessoa ");vidac();
                    printf ("\t\t\tB) Dialeto");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) Bebida ");vidab();
                    printf ("\t\t\tD) Comida \n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'b'||resposta == 'B')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 27
                    system("cls");
                    painelf();
                    printf ("\t\t\t27-) Quantas letras tem a maior palavra da língua portuguesa? \n");
                    printf ("\t\t\tA) 37");vidac();
                    printf ("\t\t\tB) 48");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) 46");vidab();
                    printf ("\t\t\tD) 39\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'c'||resposta == 'C')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 28
                    system("cls");
                    painelf();
                    printf ("\t\t\t28-) A metade do dobro de uma dúzia é igual a? \n");
                    printf ("\t\t\tA) 12");vidac();
                    printf ("\t\t\tB) 6 ");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) 24");vidab();
                    printf ("\t\t\tD) 0\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'a'||resposta == 'A')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 29
                    system("cls");
                    painelf();
                    printf ("\t\t\t29-) Quantos 9 existem entre 0 e 100? \n");
                    printf ("\t\t\t \n");
                    printf ("\t\t\tA) 11");vidac();
                    printf ("\t\t\tB) 19");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) 10");vidab();
                    printf ("\t\t\tD) 20\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'd'||resposta == 'D')
                                {
                                  acertou ();
                                  per++;
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                    for(per=0;per<1;)
                    { ///PERGUNTA 30
                    system("cls");
                    painelf();
                    printf ("\t\t\t30-) Qual é o mais rápido?    \n");
                    printf ("\t\t\tA) Falcão");vidac();
                    printf ("\t\t\tB) Gazela");if(vida==3) vidasss(); if(vida==2) vidass(); if(vida==1) vidas();
                    printf ("\t\t\tC) Zebra ");vidab();
                    printf ("\t\t\tD) Coiote\n\n");
                    SetConsoleTextAttribute(hConsole,10);
                    printf ("\t\t\tA Alternativa correta é :");
                        scanf ("%s",&resposta);
                            if (resposta == 'a'||resposta == 'A')
                                {
                                  acertou ();
                                  ganhou ();
                                  per++;
                                  if(cq_1==0){cq_1++;b_cq++;}
                                  if(vida==2){ trof_p++;trofeup();}
                                  if(vida==1){ trof_b++;trofeub();}
                                  if(vida==3)
                                  {
                                      trof_o++;
                                      trofeuo();
                                      if(cq_4==0){cq_4++;b_cq++;}
                                  }
                                }
                            else
                                {
                                  errou ();
                                  vida--;
                                }
                            if(vida<1) {perdeu(); break;}
                    }
                    if(vida<1)break;
                }
                break;
                case 2:
                    {
                        system("cls");
                        creditos();
                        getch();
                        break;
                    }
             goto menup;
            }
        else
            {
                system("cls");
                printf("\n\n\n\n");
                atencao();
                SetConsoleTextAttribute(hConsole,15);
                printf("\n\t\t\t\t        *=========[AVISO]==========*\n");
                SetConsoleTextAttribute(hConsole,12);
                printf("\t\t\t\t        |                          |\n");
                printf("\t\t\t\t        |  Está opção não é valída |\n");
                printf("\t\t\t\t        |   Por favor tente outra  |\n");
                printf("\t\t\t\t        |                          |\n");
                SetConsoleTextAttribute(hConsole,15);
                printf("\t\t\t\t        *==========================*\n");
            getch();
            }
      goto menup;
        }
    }
     painelf ()  //PAINEL FIXO
        {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,14);
                    printf("\t\t\t*=====================================================================*\n");
            printf("\t\t\t|");paineu1();printf("|\n");
            printf("\t\t\t|");paineu2();printf("|\n");
            printf("\t\t\t|");paineu3();printf("|\n");
            printf("\t\t\t|");paineu4();printf("|\n");
            printf("\t\t\t|");paineu5();printf("|\n");
            printf("\t\t\t|");paineu6();printf("|\n");
            printf("\t\t\t|");paineu7();printf("|\n");
            printf("\t\t\t|");paineu8();printf("|\n");
            printf("\t\t\t|");paineu9();paineu9p();paineu9c();printf("|\n");
            printf("\t\t\t|");paineu10();printf("|\n");
            printf("\t\t\t|");paineu11();printf("|\n");
            printf("\t\t\t|");paineu15();printf("|\n");
            printf("\t\t\t|");paineu12();printf("|\n");
            printf("\t\t\t|");paineu13();printf("|\n");
            printf("\t\t\t|");paineu14();printf("|\n");
            printf("\t\t\t*========================[CRIADO POR WANDERSON]=======================*\n");
        SetConsoleTextAttribute(hConsole,15);
        }

    void creditos () //CREDITOS AO CRIADOR
        {
                HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,15);
        printf("\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t     *==============[CRÉDITOS]==============*\n\n");
            SetConsoleTextAttribute(hConsole,3);
            printf("\t\t\t\t           JOGO: TESTE DE PACIENCIA 1.0      \n\n");
            SetConsoleTextAttribute(hConsole,13);
            printf("\t\t\t\t                    CRIADO POR               \n");
            SetConsoleTextAttribute(hConsole,15);
            printf("\t\t\t\t              Wanderson Souza Macedo         \n\n");
            SetConsoleTextAttribute(hConsole,13);
            printf("\t\t\t\t                   REVISADO POR              \n");
            SetConsoleTextAttribute(hConsole,15);
            printf("\t\t\t\t               Enir Da Silva Fonseca         \n\n");
            SetConsoleTextAttribute(hConsole,13);
        SetConsoleTextAttribute(hConsole,15);
            printf("\t\t\t\t     *======================================*\n");
        }
    void painel ()   //PAINEL DE COLORIDO
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,14);
        system("cls");
            printf("\t\t\t*=====================================================================*\n");
            printf("\t\t\t|  ");paineu1();printf("|\n");
            printf("\t\t\t|   ");paineu2();printf("|\n");
            printf("\t\t\t|    ");paineu3();printf("|\n");
            printf("\t\t\t|     ");paineu4();printf("|\n");
            printf("\t\t\t|      ");paineu5();printf("|\n");
            printf("\t\t\t|       ");paineu6();printf("|\n");
            printf("\t\t\t|        ");paineu7();printf("|\n");
            printf("\t\t\t|         ");paineu8();printf("|\n");
            printf("\t\t\t|        ");paineu9();paineu9p();paineu9c();printf("|\n");
            printf("\t\t\t|       ");paineu10();printf("|\n");
            printf("\t\t\t|      ");paineu11();printf("|\n");
            printf("\t\t\t|     ");paineu15();printf("|\n");
            printf("\t\t\t|    ");paineu12();printf("|\n");
            printf("\t\t\t|   ");paineu13();printf("|\n");
            printf("\t\t\t|  ");paineu14();printf("|\n");
            printf("\t\t\t*========================[CRIADO POR WANDERSON]=======================*\n");
        Sleep(60);
            system("cls");
            printf("\t\t\t*=====================================================================*\n");
            printf("\t\t\t| ");paineu1();printf("|\n");
            printf("\t\t\t|  ");paineu2();printf("|\n");
            printf("\t\t\t|   ");paineu3();printf("|\n");
            printf("\t\t\t|    ");paineu4();printf("|\n");
            printf("\t\t\t|     ");paineu5();printf("|\n");
            printf("\t\t\t|      ");paineu6();printf("|\n");
            printf("\t\t\t|       ");paineu7();printf("|\n");
            printf("\t\t\t|        ");paineu8();printf("|\n");
            printf("\t\t\t|       ");paineu9();paineu9p();paineu9c();printf("|\n");
            printf("\t\t\t|      ");paineu10();printf("|\n");
            printf("\t\t\t|     ");paineu11();printf("|\n");
            printf("\t\t\t|    ");paineu15();printf("|\n");
            printf("\t\t\t|   ");paineu12();printf("|\n");
            printf("\t\t\t|  ");paineu13();printf("|\n");
            printf("\t\t\t| ");paineu14();printf("|\n");
            printf("\t\t\t*========================[CRIADO POR WANDERSON]=======================*\n");
        Sleep(60);
            system("cls");
            printf("\t\t\t*=====================================================================*\n");
            printf("\t\t\t|");paineu1();printf("|\n");
            printf("\t\t\t| ");paineu2();printf("|\n");
            printf("\t\t\t|  ");paineu3();printf("|\n");
            printf("\t\t\t|   ");paineu4();printf("|\n");
            printf("\t\t\t|    ");paineu5();printf("|\n");
            printf("\t\t\t|     ");paineu6();printf("|\n");
            printf("\t\t\t|      ");paineu7();printf("|\n");
            printf("\t\t\t|       ");paineu8();printf("|\n");
            printf("\t\t\t|      ");paineu9();paineu9p();paineu9c();printf("|\n");
            printf("\t\t\t|     ");paineu10();printf("|\n");
            printf("\t\t\t|    ");paineu11();printf("|\n");
            printf("\t\t\t|   ");paineu15();printf("|\n");
            printf("\t\t\t|  ");paineu12();printf("|\n");
            printf("\t\t\t| ");paineu13();printf("|\n");
            printf("\t\t\t|");paineu14();printf("|\n");
            printf("\t\t\t*========================[CRIADO POR WANDERSON]=======================*\n");
        Sleep(60);
            system("cls");
            printf("\t\t\t*=====================================================================*\n");
            printf("\t\t\t|");paineu1();printf("|\n");
            printf("\t\t\t|");paineu2();printf("|\n");
            printf("\t\t\t| ");paineu3();printf("|\n");
            printf("\t\t\t|  ");paineu4();printf("|\n");
            printf("\t\t\t|   ");paineu5();printf("|\n");
            printf("\t\t\t|    ");paineu6();printf("|\n");
            printf("\t\t\t|     ");paineu7();printf("|\n");
            printf("\t\t\t|      ");paineu8();printf("|\n");
            printf("\t\t\t|     ");paineu9();paineu9p();paineu9c();printf("|\n");
            printf("\t\t\t|    ");paineu10();printf("|\n");
            printf("\t\t\t|   ");paineu11();printf("|\n");
            printf("\t\t\t|  ");paineu15();printf("|\n");
            printf("\t\t\t| ");paineu12();printf("|\n");
            printf("\t\t\t|");paineu13();printf("|\n");
            printf("\t\t\t|");paineu14();printf("|\n");
            printf("\t\t\t*========================[CRIADO POR WANDERSON]=======================*\n");
        Sleep(60);
            system("cls");
            printf("\t\t\t*=====================================================================*\n");
            printf("\t\t\t|");paineu1();printf("|\n");
            printf("\t\t\t|");paineu2();printf("|\n");
            printf("\t\t\t|");paineu3();printf("|\n");
            printf("\t\t\t| ");paineu4();printf("|\n");
            printf("\t\t\t|  ");paineu5();printf("|\n");
            printf("\t\t\t|   ");paineu6();printf("|\n");
            printf("\t\t\t|    ");paineu7();printf("|\n");
            printf("\t\t\t|     ");paineu8();printf("|\n");
            printf("\t\t\t|    ");paineu9();paineu9p();paineu9c();printf("|\n");
            printf("\t\t\t|   ");paineu10();printf("|\n");
            printf("\t\t\t|  ");paineu11();printf("|\n");
            printf("\t\t\t| ");paineu15();printf("|\n");
            printf("\t\t\t|");paineu12();printf("|\n");
            printf("\t\t\t|");paineu13();printf("|\n");
            printf("\t\t\t|");paineu14();printf("|\n");
            printf("\t\t\t*========================[CRIADO POR WANDERSON]=======================*\n");
        Sleep(60);
            system("cls");
            printf("\t\t\t*=====================================================================*\n");
            printf("\t\t\t|");paineu1();printf("|\n");
            printf("\t\t\t|");paineu2();printf("|\n");
            printf("\t\t\t|");paineu3();printf("|\n");
            printf("\t\t\t|");paineu4();printf("|\n");
            printf("\t\t\t| ");paineu5();printf("|\n");
            printf("\t\t\t|  ");paineu6();printf("|\n");
            printf("\t\t\t|   ");paineu7();printf("|\n");
            printf("\t\t\t|    ");paineu8();printf("|\n");
            printf("\t\t\t|   ");paineu9();paineu9p();paineu9c();printf("|\n");
            printf("\t\t\t|  ");paineu10();printf("|\n");
            printf("\t\t\t| ");paineu11();printf("|\n");
            printf("\t\t\t|");paineu15();printf("|\n");
            printf("\t\t\t|");paineu12();printf("|\n");
            printf("\t\t\t|");paineu13();printf("|\n");
            printf("\t\t\t|");paineu14();printf("|\n");
            printf("\t\t\t*========================[CRIADO POR WANDERSON]=======================*\n");
        Sleep(60);
            system("cls");
            printf("\t\t\t*=====================================================================*\n");
            printf("\t\t\t|");paineu1();printf("|\n");
            printf("\t\t\t|");paineu2();printf("|\n");
            printf("\t\t\t|");paineu3();printf("|\n");
            printf("\t\t\t|");paineu4();printf("|\n");
            printf("\t\t\t|");paineu5();printf("|\n");
            printf("\t\t\t| ");paineu6();printf("|\n");
            printf("\t\t\t|  ");paineu7();printf("|\n");
            printf("\t\t\t|   ");paineu8();printf("|\n");
            printf("\t\t\t|  ");paineu9();paineu9p();paineu9c();printf("|\n");
            printf("\t\t\t| ");paineu10();printf("|\n");
            printf("\t\t\t|");paineu11();printf("|\n");
            printf("\t\t\t|");paineu15();printf("|\n");
            printf("\t\t\t|");paineu12();printf("|\n");
            printf("\t\t\t|");paineu13();printf("|\n");
            printf("\t\t\t|");paineu14();printf("|\n");
            printf("\t\t\t*========================[CRIADO POR WANDERSON]=======================*\n");
        Sleep(60);
            system("cls");
            printf("\t\t\t*=====================================================================*\n");
            printf("\t\t\t|");paineu1();printf("|\n");
            printf("\t\t\t|");paineu2();printf("|\n");
            printf("\t\t\t|");paineu3();printf("|\n");
            printf("\t\t\t|");paineu4();printf("|\n");
            printf("\t\t\t|");paineu5();printf("|\n");
            printf("\t\t\t|");paineu6();printf("|\n");
            printf("\t\t\t| ");paineu7();printf("|\n");
            printf("\t\t\t|  ");paineu8();printf("|\n");
            printf("\t\t\t| ");paineu9();paineu9p();paineu9c();printf("|\n");
            printf("\t\t\t|");paineu10();printf("|\n");
            printf("\t\t\t|");paineu11();printf("|\n");
            printf("\t\t\t|");paineu15();printf("|\n");
            printf("\t\t\t|");paineu12();printf("|\n");
            printf("\t\t\t|");paineu13();printf("|\n");
            printf("\t\t\t|");paineu14();printf("|\n");
            printf("\t\t\t*========================[CRIADO POR WANDERSON]=======================*\n");
        Sleep(60);
                    system("cls");
            printf("\t\t\t*=====================================================================*\n");
            printf("\t\t\t|");paineu1();printf("|\n");
            printf("\t\t\t|");paineu2();printf("|\n");
            printf("\t\t\t|");paineu3();printf("|\n");
            printf("\t\t\t|");paineu4();printf("|\n");
            printf("\t\t\t|");paineu5();printf("|\n");
            printf("\t\t\t|");paineu6();printf("|\n");
            printf("\t\t\t|");paineu7();printf("|\n");
            printf("\t\t\t| ");paineu8();printf("|\n");
            printf("\t\t\t|");paineu9();paineu9p();paineu9c();printf("|\n");
            printf("\t\t\t|");paineu10();printf("|\n");
            printf("\t\t\t|");paineu11();printf("|\n");
            printf("\t\t\t|");paineu15();printf("|\n");
            printf("\t\t\t|");paineu12();printf("|\n");
            printf("\t\t\t|");paineu13();printf("|\n");
            printf("\t\t\t|");paineu14();printf("|\n");
            printf("\t\t\t*========================[CRIADO POR WANDERSON]=======================*\n");
        Sleep(60);
                system("cls");
            printf("\t\t\t*=====================================================================*\n");
            printf("\t\t\t|");paineu1();printf("|\n");
            printf("\t\t\t|");paineu2();printf("|\n");
            printf("\t\t\t|");paineu3();printf("|\n");
            printf("\t\t\t|");paineu4();printf("|\n");
            printf("\t\t\t|");paineu5();printf("|\n");
            printf("\t\t\t|");paineu6();printf("|\n");
            printf("\t\t\t|");paineu7();printf("|\n");
            printf("\t\t\t|");paineu8();printf("|\n");
            printf("\t\t\t|");paineu9();paineu9p();paineu9c();printf("|\n");
            printf("\t\t\t|");paineu10();printf("|\n");
            printf("\t\t\t|");paineu11();printf("|\n");
            printf("\t\t\t|");paineu15();printf("|\n");
            printf("\t\t\t|");paineu12();printf("|\n");
            printf("\t\t\t|");paineu13();printf("|\n");
            printf("\t\t\t|");paineu14();printf("|\n");
            printf("\t\t\t*========================[CRIADO POR WANDERSON]=======================*\n");
            system("cls");
        Sleep(100);
    }
    void acertou ()  // MENSAGEM DE ACERTOU
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,6);
        system("cls");
            printf("\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|   XXXXXX                                            XX      XX  |\n");
            printf("\t\t\t|  XX    XX   XXXXX  XXXXX  XXXXX   XXXXXXX   XXXXX   XX      XX  |\n");
            printf("\t\t\t|  XX    XX  X       X      X    X     X     X     X  XX      XX  |\n");
            printf("\t\t\t|  XXXXXXXX  X       XXXX   XXXXX      X     X     X  XX      XX  |\n");
            printf("\t\t\t|  XX    XX  X       X      X    X     X     X     X  XX      XX  |\n");
            printf("\t\t\t|  XX    XX   XXXXX  XXXXX  X    X     X      XXXXX     XXXXXX    |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,15);
        getch();
    }
    void bazinga ()  // EGG
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,6);
        system("cls");
            printf("\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t*=============================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t\t|           X    XX    XX                     |\n");
            printf("\t\t\t\t|          XX    XX    XX  X  XXXXX    XXXX   |\n");
            printf("\t\t\t\t|    X    X X    XX    XX  X  X    X  X    X  |\n");
            printf("\t\t\t\t|  XXXXX    X    XX    XX  X  X    X  XXXXXX  |\n");
            printf("\t\t\t\t|    X      X     XX  XX   X  X    X  X    X  |\n");
            printf("\t\t\t\t|         XXXXX     XX     X  XXXXX   X    X  |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t\t*==================[+1 Vida]==================*\n");
        SetConsoleTextAttribute(hConsole,15);
        getch();
    }
    void errou ()    // MENSAGEM DE ERROU - VIDA
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,6);
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t*===============================================*\n");
         SetConsoleTextAttribute(hConsole,12);
            printf("\t\t\t\t|  XXXXXX                           XX      XX  |\n");
            printf("\t\t\t\t|  XX      XXXXX   XXXXX    XXXXX   XX      XX  |\n");
            printf("\t\t\t\t|  XXXXX   X    X  X    X  X     X  XX      XX  |\n");
            printf("\t\t\t\t|  XX      XXXXX   XXXXX   X     X  XX      XX  |\n");
            printf("\t\t\t\t|  XX      X    X  X    X  X     X  XX      XX  |\n");
            printf("\t\t\t\t|  XXXXXX  X    X  X    X   XXXXX     XXXXXX    |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t\t*=============[Você perdeu 1 Vida]==============*\n");
        SetConsoleTextAttribute(hConsole,15);
        getch();
    }
    void vidac()     // BARRA CIMA VIDAS
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,12);
            printf("\t\t\t\t\t*===[VIDAS]===*\n");
        SetConsoleTextAttribute(hConsole,15);
    }
    void vidasss() // 3 VIDAS
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,12);
            printf("\t\t\t\t\t |   |   |   | \n");
        SetConsoleTextAttribute(hConsole,15);
    }
    void vidass() // 2 VIDAS
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,12);
            printf("\t\t\t\t\t | X |   |   | \n");
        SetConsoleTextAttribute(hConsole,15);
    }
    void vidas() // 1 VIDAS
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,12);
            printf("\t\t\t\t\t | X | X |   | \n");
        SetConsoleTextAttribute(hConsole,15);
    }
    void vidab() // BARRA BAIXO VIDAS
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,12);
            printf("\t\t\t\t\t*=============*\n");
        SetConsoleTextAttribute(hConsole,15);
    }
    void perdeu () // MENSAGEM DE ERROU - VIDA
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,6);
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t*=======================================================*\n");
        SetConsoleTextAttribute(hConsole,12);
            printf("\t\t\t\t|  XXXXXXXX                                 XX      XX  |\n");
            printf("\t\t\t\t|  XX     XX                                XX      XX  |\n");
            printf("\t\t\t\t|  XX     XX  XXXXX  XXXXX   XXXXX   XXXXX  XX      XX  |\n");
            printf("\t\t\t\t|  XXXXXXXX   X      X    X  X    X  X      XX      XX  |\n");
            printf("\t\t\t\t|  XX         XXXX   XXXXX   X    X  XXXX   XX      XX  |\n");
            printf("\t\t\t\t|  XX         X      X    X  X    X  X      XX      XX  |\n");
            printf("\t\t\t\t|  XX         XXXXX  X    X  XXXXX   XXXXX    XXXXXX    |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t\t*==================[Obrigado por jogar]=================*\n");
        SetConsoleTextAttribute(hConsole,15);
        getch();
    }
        void ganhou () // MENSAGEM DE ERROU - VIDA
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,6);
        system("cls");
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t\t*=============================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t\t|   XXXXXXXX                                      XX      XX  |\n");
            printf("\t\t\t\t|  XX      XX                                     XX      XX  |\n");
            printf("\t\t\t\t|  XX           XXXXX   XX    X  X    X   XXXXX   XX      XX  |\n");
            printf("\t\t\t\t|  XX   XXXXX  X     X  X X   X  X    X  X     X  XX      XX  |\n");
            printf("\t\t\t\t|  XX      XX  XXXXXXX  X  X  X  XXXXXX  X     X  XX      XX  |\n");
            printf("\t\t\t\t|  XX      XX  X     X  X   X X  X    X  X     X  XX      XX  |\n");
            printf("\t\t\t\t|   XXXXXXXX   X     X  X    XX  X    X   XXXXX     XXXXXX    |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t\t*=====================[Obrigado por jogar]====================*\n");
        SetConsoleTextAttribute(hConsole,15);
    }
    void conqb() //CONQUISTA BLOQUEADA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,12);
            printf("           [????]\n");
        SetConsoleTextAttribute(hConsole,14);
    }
    void conq1() //CONQUISTA - GANHAR O JOGO 1 VEZ
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,13);
            printf("           VENCEDOR         \n");
        SetConsoleTextAttribute(hConsole,14);
    }
    void conq2()//CONQUISTA - QI mais de 8000
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,13);
            printf("           QI+8000          \n");
        SetConsoleTextAttribute(hConsole,14);
    }
    void conq3()//CONQUISTA - Historiador
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,13);
            printf("         HISTORIADOR        \n");
        SetConsoleTextAttribute(hConsole,14);
    }
    void conq4()//CONQUISTA - IMORTAL
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,13);
            printf("           IMORTAL          \n");
        SetConsoleTextAttribute(hConsole,14);
    }
    void conq5()//CONQUISTA - IMORTAL
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,13);
            printf("    ANALISTA DE SISTEMA     \n");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu1 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,11);
            printf("        XXXXXXXXXXXX                            XXXXXXX              ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu2 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,11);
            printf("            XXXX                                XX                   ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu3 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,11);
            printf("             XX       XXXXXX  XXXXXX   XXXXXXX  XX                   ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu4 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,11);
            printf("             XX       X      X            X     XXXXX                ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu5 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,11);
            printf("             XX       XXXX    XXXXXX      X     XX                   ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu6 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,11);
            printf("             XX       X             X     X     XX                   ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu7 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,11);
            printf("             XX       XXXXXX  XXXXXX      X     XXXXXXX              ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu8 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,12);
            printf("                                                                     ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu9 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,13);
            printf("  XXXXXX                ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu9p () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,15);
            printf("[PERGUNTAS E RESPOSTAS]");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu9c () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,13);
            printf("            XXXXXXX   ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu10 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,13);
            printf("  XX    X                                                 XX     XX  ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu11 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,13);
            printf("  XX    X   XXXX    XXXXX   X  XXXXX  XX    X   XXXXX  X  XX     XX  ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu12 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,13);
            printf("  XX       XXXXXX  X        X  XXXX   X  X  X  X       X  XX     XX  ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu13 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,13);
            printf("  XX       X    X  X        X  X      X   X X  X       X  XX     XX  ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu14 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,13);
            printf("  XX       X    X   XXXXX   X  XXXXX  X    XX   XXXXX  X  XX     XX  ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void paineu15 () //PAINEL LINHA
    {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,13);
            printf("  XXXXXX   X    X  X           X      X X   X  X          XXXXXXXXX  ");
        SetConsoleTextAttribute(hConsole,14);
    }
    void trofeuo()//TROFEU OURO
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,14);
            printf("      XXXXXXXXXXX     \n");
            printf("   XXXXXXXXXXXXXXXXX  \n");
            printf("   X  XXXXXXXXXXX  X  \n");
            printf("   XX XXXXXXXXXXX XX  \n");
            printf("    XXXXXXXXXXXXXXX   \n");
            printf("      XXXXXXXXXXX     \n");
            printf("       XXXXXXXXX      \n");
            printf("        XXXXXXX       \n");
            printf("          XXX         \n");
            printf("          XXX         \n");
            printf("          XXX         \n");
            printf("         XXXXX        \n");
            printf("        XXXXXXX       \n");
            printf("        XXXXXXX       \n");
            getch();
    }
    void trofeup()//TROFEU PRATA
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,7);
            printf("      XXXXXXXXXXX     \n");
            printf("   XXXXXXXXXXXXXXXXX  \n");
            printf("   X  XXXXXXXXXXX  X  \n");
            printf("   XX XXXXXXXXXXX XX  \n");
            printf("    XXXXXXXXXXXXXXX   \n");
            printf("      XXXXXXXXXXX     \n");
            printf("       XXXXXXXXX      \n");
            printf("        XXXXXXX       \n");
            printf("          XXX         \n");
            printf("          XXX         \n");
            printf("          XXX         \n");
            printf("         XXXXX        \n");
            printf("        XXXXXXX       \n");
            printf("        XXXXXXX       \n");
            getch();
    }
    void trofeub()//TROFEU BRONZE
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,6);
            printf("      XXXXXXXXXXX     \n");
            printf("   XXXXXXXXXXXXXXXXX  \n");
            printf("   X  XXXXXXXXXXX  X  \n");
            printf("   XX XXXXXXXXXXX XX  \n");
            printf("    XXXXXXXXXXXXXXX   \n");
            printf("      XXXXXXXXXXX     \n");
            printf("       XXXXXXXXX      \n");
            printf("        XXXXXXX       \n");
            printf("          XXX         \n");
            printf("          XXX         \n");
            printf("          XXX         \n");
            printf("         XXXXX        \n");
            printf("        XXXXXXX       \n");
            printf("        XXXXXXX       \n");
            getch();
    }
        void atencao()//TROFEU BRONZE
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,4);
            printf("\t\t\t\t\t              X           \n");
            printf("\t\t\t\t\t             XXX          \n");
            printf("\t\t\t\t\t            XX XX         \n");
            printf("\t\t\t\t\t           XX   XX        \n");
            printf("\t\t\t\t\t          XX  X  XX       \n");
            printf("\t\t\t\t\t         XX   X   XX      \n");
            printf("\t\t\t\t\t        XX         XX     \n");
            printf("\t\t\t\t\t       XX     X     XX    \n");
            printf("\t\t\t\t\t      XX             XX   \n");
            printf("\t\t\t\t\t     XXXXXXXXXXXXXXXXXXX  \n");
    }
    void br_cq0 ()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,15);
            printf("\t\t\t\t                     [00]             \n");

        SetConsoleTextAttribute(hConsole,14);
    }
    void br_cq20 ()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,11);
            printf("\t\t\t\t                   ==[20]==           \n");
        SetConsoleTextAttribute(hConsole,14);
    }
    void br_cq40()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,3);
            printf("\t\t\t\t                 ====[40]====         \n");
        SetConsoleTextAttribute(hConsole,14);
    }
    void br_cq60 ()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,1);
            printf("\t\t\t\t              =======[60]======       \n");
        SetConsoleTextAttribute(hConsole,14);
    }
    void br_cq80 ()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,2);
            printf("\t\t\t\t            =========[80]=========    \n");
        SetConsoleTextAttribute(hConsole,14);
    }
    void br_cq100 ()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t\t         ============[100]=========== \n");
        SetConsoleTextAttribute(hConsole,14);
    }
        void carregando1 ()
   {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,6);
        system("cls");
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X          XX   |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X   X  |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X    XXX   |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,15);
            printf("\t\t\t                               [00] \n");Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X         X X   |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X   X  |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X    XXX   |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,11);
            printf("\t\t\t                            ===[07]=== \n"); Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X         XX    |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X   X  |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X    XXX   |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,11);
            printf("\t\t\t                            ===[07]=== \n");Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X         XXX   |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X      |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X    XXX   |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,11);
            printf("\t\t\t                        =======[19]======= \n"); Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X         XXX   |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X   X  |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X    XX    |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,3);
            printf("\t\t\t                     ==========[37]=========== \n");Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X         XXX   |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X   X  |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X    X X   |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,3);
            printf("\t\t\t                     ==========[37]=========== \n");Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X         XXX   |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X   X  |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X     XX   |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,3);
            printf("\t\t\t               ================[42]=============== \n"); Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X         XXX   |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX       X  |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X    XXX   |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,3);
            printf("\t\t\t               ================[42]=============== \n");Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X          XX   |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X   X  |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X    XXX   |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,1);
            printf("\t\t\t             ==================[65]=================== \n");Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X         X X   |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X   X  |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X    XXX   |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,1);
            printf("\t\t\t             ==================[65]=================== \n"); Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X         XX    |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X   X  |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X    XXX   |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,1);
            printf("\t\t\t             ==================[65]=================== \n"); Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X         XXX   |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X      |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X    XXX   |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,2);
            printf("\t\t\t         ======================[79]======================= \n"); Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X         XXX   |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X   X  |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X    XX    |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,2);
            printf("\t\t\t         ======================[79]======================= \n"); Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X         XXX   |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X   X  |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X    X X   |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,2);
            printf("\t\t\t     ==========================[99]=========================== \n"); Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X         XXX   |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X   X  |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X     XX   |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
        SetConsoleTextAttribute(hConsole,2);
            printf("\t\t\t     ==========================[99]=========================== \n");Sleep(200);
        system("cls");
        SetConsoleTextAttribute(hConsole,6);
        printf("\n\n\n\n\n\n\n");
            printf("\t\t\t*=================================================================*\n");
        SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t|  XX                                                             |\n");
            printf("\t\t\t|  XX         XXXXX    XXXXX   XXXXX   X  X    X   XXXXX          |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  XX   X  X         XXX   |\n");
            printf("\t\t\t|  XX        X     X  XXXXXXX  X    X  X  X X  X  X  XXX   X   X  |\n");
            printf("\t\t\t|  XX        X     X  X     X  X    X  X  X  X X  X    X    XXX   |\n");
            printf("\t\t\t|  XXXXXXXX   XXXXX   X     X  XXXXX   X  X   XX   XXXXX          |\n");
        SetConsoleTextAttribute(hConsole,6);
            printf("\t\t\t*=================================================================*\n\n");
            SetConsoleTextAttribute(hConsole,10);
            printf("\t\t\t*=============================[100]===============================*\n");Sleep(200);
   }


