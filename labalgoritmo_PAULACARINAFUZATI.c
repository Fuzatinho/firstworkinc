#include <stdio.h>

int main()
{
    int triagem, triagem_1, triagem_2, triagem_3, triagem_4;
    int tformal, tformal_1, tformal_2, tformal_3;
    int tdomest, tdomest_1;
    int tpesc, tpesc_1, tpesc_2, tpesc_3, tpesc_4;
    int tqualif, tqualif_1;
    int tescravo, tescravo_1;
    int iniciocalculo;
    int temDireitoAoSeguroDesemprego = 1;
    int resposta, rI, parcelas;
    double salario1, salario2, salario3;
    double salarioMedio;
    double valorInvariante = 1911.84;
    double valorParcela = 1;
    double resto;
    int vinculoEmpregaticio;
    
    
    //variaveis respostas p/ calculo de parcelas
    int rVESO, rVEDV, rVEVT, rSTD;
    
    //variaveis do calculo de parcelas

        
    printf("Bem vindo ao Simulador de Seguro Desemprego!\n");
    printf("Vamos verificar se tem direito ao beneficio. \n");
    printf("Vamos la, responda 1 para sim, ou 2 para nao:\n\n");
    printf("Voce ja recebeu o beneficio Seguro desemprego antes? [1]SIM ou [2]NAO: \n"); /*triagem, pergunta 1*/
    scanf("%d", &triagem);
        switch (triagem)
    	{
        case 1: /*pessoa recebeu sd antes*/
        printf("O �ltimo benef�cio de Seguro Desemprego recebido, faz mais de 16 meses?[1]SIM ou [2]NAO:\n"); /*pergunta1.1*/
        scanf("%d", &triagem_1);
            switch(triagem_1)
            {
                case 2: /*pessoa recebeu a menos de 16 meses n�o pode */
                printf("Voce nao tem direito ao beneficio pois o recebeu em periodo inferior a 16 meses.\n");
                system("PAUSE");
                
                case 1: /*pessoa recebeu a mais de 16 meses, continua questionario*/
                printf("Em seu ultimo emprego foi dispensado SEM justa causa?[1]SIM ou [2]NAO:\n"); /*pergunta2*/
                scanf("%d", &triagem_2);
                    switch (triagem_2)
                    {
                    case 2: /*saiu por justa causa, n�o pode*/
                    printf("Voce nao tem direito ao beneficio pois saiu por justa causa do seu ultimo emprego.\n");
                    system("PAUSE");
                    case 1: /*saiu sem justa causa, continua questionario*/
                    printf("Atualmente possui renda propria de qualquer natureza suficiente a?sua manutencao e a de sua familia? [1]SIM ou [2]NAO:\n"); /*pergunta3*/
                    scanf("%d", &triagem_3);
                        switch (triagem_3)
                        {
                            case 1: /*pessoa possui renda n�o pode */
                            printf("Voce nao tem direito ao beneficio pois possui renda propria.\n");
                            system("PAUSE");
                            case 2: /*pessoa n�o possui renda, continua questionario */
                            printf("Recebe beneficio previdenciario de prestacao continuada? (exceto auxilio acidente e pensao por morte)[1]SIM ou [2]NAO:\n"); /*pergunta4*/
                            scanf("%d", &triagem_4);
                                switch (triagem_4)
                                {
                                case 1: /*pessoa recebe benef�cio previdenci�rio, n�o pode */
                                printf("Voce n�o tem direito ao beneficio pois ja recebe beneficio de presta��o continuada.\n");
                                system("PAUSE");
                                case 2: /*n�o recebe previdenci�rio, fim triagem, respondeu tudo ok at� aqui*/
                                printf("Obrigada pelas respostas! Agora vamos tracar que tipo de trabalhador voce e.\n");
                                break;
                                default:
                                printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO");
                                system("PAUSE");
								}
                            break;
                            default:
                            printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO");
                        system("PAUSE");
						}
                    break;
                    default:
                    printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO");
                system("PAUSE");
				}
                break;
                default:
                printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO");   
            system("PAUSE");
			}
        break;
        case 2: /*pessoa n�o recebeu sd antes, continua questionario */
        printf("Em seu �ltimo emprego foi dispensado SEM justa causa?[1]SIM ou [2]NAO:\n");
        scanf("%d", &triagem_2);
            switch (triagem_2)
            {
            case 1: /*saiu sem justa causa, continua questionario*/
            printf("Atualmente possui renda propria de qualquer natureza suficiente � sua manuten��o e a de sua fam�lia? [1]SIM ou [2]NAO:\n");
            scanf("%d", &triagem_3);
                switch (triagem_3)
                {
                case 1: /*pessoa possui renda n�o pode */
                printf("Voce n�o tem direito ao beneficio pois possui renda pr�pria.\n");
                system("PAUSE");
                case 2: /*pessoa n�o possui renda, continua questionario */
                printf("Recebe beneficio previdenci�rio de presta��o continuada? (exceto aux�lio acidente e pens�o por morte)[1]SIM ou [2]NAO:\n");
                scanf("%d", &triagem_4);
                    switch (triagem_4)
                    {
                    case 1: /*pessoa recebe benef�cio previdenci�rio, n�o pode */
                    printf("Voce n�o tem direito ao beneficio pois j� recebe benef�cio de presta��o continuada.\n");
                    system("PAUSE");
                    case 2: /*n�o recebe previdenci�rio, fim triagem, respondeu tudo ok at� aqui*/
                    printf("Obrigada pelas respostas! Agora vamos tra�ar que tipo de trabalhador voc� �.\n");
                    break;
                    default:
                    printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO");
                    }
                break;
                default:
                printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO");
                system("PAUSE");
				}
            break;
            case 2: /*saiu por justa causa n�o pode*/
            printf("Voce n�o tem direito ao beneficio pois foi dispensado por justa causa.\n");
            system("PAUSE");
            default:
            printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO");
            system("PAUSE");}
        break;
        default:
        printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO");   
    system("PAUSE");
	}

    if(triagem_4 == 2) {
        printf("\n\nTIPO DE TRABALHADOR\n"); /*INICIO QUESTIONARIO TIPO TRABALHADOR */
        printf("\nPor favor responda as perguntas a seguir com 1 para sim ou 2 para nao:\n");
  
        printf("E trabalhador formal? [1]SIM ou [2]N�O: \n");
        scanf("%d", &tformal);
        switch (tformal) 
            {
                case 1: /*� trabalhador formal */
                    printf("Recebeu  salarios de PJ ou PF, no periodo de 6 meses anteriores a data de dispensa? [1]SIM ou [2]NAO:\n");
                    scanf("%d", &tformal_1); /* 1� condi��o tformal*/
                    switch (tformal_1) 
                        {
                            case 2: /*n�o recebeu salario de pf ou pj, n�o pode */
                                printf("Voce nao atende as condicoes para receber o beneficio.\n");
                                system("PAUSE");
                            case 1: /*recebeu salario de pf ou pj, continua questionario */
                                printf("Esta desempregado atualmente? [1]SIM ou [2]N�O:\n"); /*2� condi��o */
                                scanf("%d", &tformal_2); 
                                
                            switch (tformal_2)
                            {
                                case 2: /*n�o est� desempregado, n�o pode */
                                    printf("Voce nao atende as condicoes para receber o beneficio.\n");
                                    system("PAUSE");
                                case 1: /* est� desempregado, continua questionario */
                                    printf("Foi empregado de pessoa juridica ou de pessoa fisica equiparada � juridica, pelo menos 12 meses nos ultimos 36 meses que antecedem a data de dispensa? [1]SIM ou [2]NAO:\n");
                                    scanf("%d", &tformal_3); /*3� condi��o */
                                    
                                switch (tformal_3)
                                {
                                    case 2: /*n�o foi empregado, n�o pode */
                                        printf("Voce nao atende as condicoes para receber o beneficio.\n");
                                        system("PAUSE");
                                    case 1: /* foi empregado, at� aqui tudo ok */
                                        printf("Voce atende as condicoes para receber o beneficio, vamos agora calcular o numero de parcelas e valor:\n");
                                        iniciocalculo == 1;
                                        break;
                                    default:
                                        printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO\n");
                                system("PAUSE");
								}
                                    break;
                                default:
                                printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO\n");
                            system("PAUSE");
							}
                                break;
                            default:
                                printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO\n");
                        system("PAUSE");
						}
                    break;    
                case 2: /*n�o � trabalhador formal, outra pergunta */ 
                    printf("E empregado dom�stico? [1]SIM ou [2]N?O: \n");
                    scanf("%d", &tdomest);
                switch (tdomest)
                {
                    case 1: /*� domestico, continua questionario */
                        printf("Trabalhou exclusivamente como empregado domestico por no minimo 15 meses nos ultimos 24 meses que antecederam a data de dispensa? [1]SIM ou [2]NAO:\n");
                        scanf("%d", &tdomest_1);
                    switch (tdomest_1) 
                    {
                        case 1: /*atende condi��o 1, final questionario */
                            printf("Voce atende as condicoes para receber o beneficio, vamos agora calcular o n�mero de parcelas e valor:\n");
                            iniciocalculo == 1;
                            break;
                        case 2: /*n�o atende condi��o, n�o pode */ 
                            printf("Voce nao atende as condicoes para receber o beneficio.\n");
                            system("PAUSE");
                        default:
                            printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]N�O\n");
                    system("PAUSE");
					}
                    break;
                    case 2: /*n�o � domestico, continua questionario */
                        printf("Teve contrato de trabalho suspenso em virtude de participacao em curso ou programa de qualificacao profissional oferecida pelo empregador? [1]SIM ou [2]NAO: \n");
                        scanf("%d", &tqualif);
                        switch(tqualif)
                            {
                                case 1: /*� tqualif, vai para condi��o 1 */
                                    printf("Esta devidamente matriculado em curso ou programa de qualificacao profissional oferecido pelo empregador? [1]SIM ou [2]NAO:");
                                    scanf("%d", &tqualif_1);
                                    switch(tqualif_1)
                                {
                                    case 2: /* n�o est� matriculado, n�o pode */
                                        printf("Voce nao atende as condicoes para receber o beneficio.\n");
                                    system("PAUSE");
                                    case 1: /*atende a condi��o, vai para calculo de valor */
                                        printf("Voce atende as condicoes para receber o beneficio, vamos agora calcular o numero de parcelas e valor:\n");
                                        iniciocalculo == 1;
                                        break;
                                    default:
                                    printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO\n");
                                system("PAUSE");
								}
                                    break;
                                case 2: /*n�o � tqualif continua questionario tipo trabalhador */
                                    printf("E pescador profissional durante periodo de defeso: [1]SIM ou [2]NAO: \n");
                                    scanf("%d", &tpesc);
                                    switch(tpesc)
                                    {
                                        case 1: /*� pescador vai para condi��o 1 */
                                            printf("Possui inscricao no INSS como segurado especial? [1]SIM ou [2]NAO:\n");
                                            scanf("%d", &tpesc_1);
                                            switch(tpesc_1)
                                            {
                                                case 2: /*n�o atende condi��o 1, n�o pode */
                                                    printf("Voce nao atende as condicoes para receber o beneficio.\n"); 
                                                    system("PAUSE");
                                                case 1: /*atende condi��o 1, continua questionario */
                                                    printf("Possui comprovacao de venda do pescado a adquirinte pessoa juridica ou cooperativa, no periodo correspondente aos ultimos 12 meses que antecederam o periodo do defeso? [1]SIM ou [2]NAO:\n");
                                                    scanf("%d", &tpesc_2);
                                                switch (tpesc_2)
                                                {
                                                    case 2: /*n�o atende condi��o 2, n�o pode */
                                                        printf("Voce nao atende as condicoes para receber o beneficio.\n"); 
                                                        system("PAUSE");
                                                    case 1: /*atende a condi��o 2, continua */
                                                        printf("Pode comprovar o exercicio profissional da atividade de pesca artesanal objeto do defeso e que se dedicou a pesca, em carater ininterrupto, durante o periodo compreendido entre o defeso anterior e o em curso? [1]SIM ou [2]NAO \n");
                                                        scanf("%d", &tpesc_3);
                                                    switch (tpesc_3)
                                                    {
                                                        case 2: /*n�o atende condi��o 3, n�o pode */
                                                            printf("Voce nao atende as condicoes para receber o beneficio.\n"); 
                                                            system("PAUSE");
                                                        case 1: /* atende a condi��o 3, continua */
                                                            printf("Possui vinculo de emprego ou outra relacao de trabalho ou outra fonte de renda diversa da decorrente da atividade pesqueira? [1]SIM ou [2]NAO:\n");
                                                            scanf("%d", &tpesc_4);
                                                        switch(tpesc_4)
                                                        {
                                                            case 1:
                                                                printf("Voce nao atende as condicoes para receber o beneficio.\n"); 
                                                                system("PAUSE");
                                                            case 2:
                                                                printf("Voce atende as condicoes para receber o beneficio, vamos agora calcular o numero de parcelas e valor:\n");
                                                                iniciocalculo ==1;
                                                                break;
                                                            default:
                                                            printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO\n");
                                                        }
                                                            break;
                                                        default:
                                                            printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO\n");
                                                    system("PAUSE");
													
													}
                                                        break;
                                                    default:
                                                        printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO\n");
                                                system("PAUSE");
												}
                                                    break;
                                                default:
                                                    printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO\n");
                                            system("PAUSE");
											}
                                        break;    
                                        case 2:
                                        printf("E trabalhador resgatado da condicao semelhante a de escravo? [1]SIM ou [2]N?O: \n");
                                        scanf("%d", &tescravo);
                                            switch (tescravo)
                                            {
                                            case 2:
                                                printf("Voce nao atende as condicoes para receber o beneficio.\n"); 
                                                system("PAUSE");
                                            case 1:
                                                printf("E comprovadamente resgatado do regime de trabalho forcado ou da condicao analoga a de escravo em decorrencia de fiscalizacao do MTE? [1]SIM ou [2]N?O: \n");
                                                scanf("%d", &tescravo_1);
                                                switch (tescravo_1)
                                                {
                                                case 2:
                                                    printf("Voce nao atende as condicoes para receber o beneficio.\n"); 
                                                    system("PAUSE");
                                                case 1:
                                                    printf("Voce atende as condicoes para receber o beneficio, vamos agora calcular o numero de parcelas e valor:\n");
                                                    iniciocalculo == 1;
                                                    break;
                                                default:
                                                    printf("Resposta inva?ida, por favor digite apenas [1]SIM ou [2]N?O\n");
                                                system("PAUSE");
												}
                                                break;
                                            default:
                                                printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]N?O\n");
                                                system("PAUSE");
                                                
                                            }
                                        break;
                                        default:
                                        printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]N?O\n");
                                        system("PAUSE");
                                        }
                            }
                }
            } /*FIM questionario TIPO trabalhador*/     
        
    }     
            
            /*INICIO CALCULO DE PARCELAS E VALOR */
            
	//perguntas sobre vinculo empregaticio
    if (iniciocalculo = 1) {
    printf("\nAgora queremos saber sobre seu vinculo empregaticio para o calculo das parcelas.");
    
	printf("\nVoc? comprova ter tido vinculo empregaticio de no minimo seis meses e no maximo onze meses nos ultimos trinta a seis meses? \n[1]SIM ou [2]N?O\n");
    	scanf("%d", &rVESO);
    }
    else {
        printf("Fim da execu��o.\n");
    }
    	if (rVESO == 1) {
    		printf("Antes da data de demiss�o, voc� recebeu o sal�rio por tr�s ou dois meses? \n1) Tr�s meses \n2) Dois meses\n");
  			scanf("%d", &rI);
    	}    
  
  if (temDireitoAoSeguroDesemprego == 1) {
    // definir quantidade de parcelas
    printf("Quantos meses voce trabalhou? ");
    scanf("%d", &vinculoEmpregaticio); }
    if (vinculoEmpregaticio >= 6 && vinculoEmpregaticio<=11) {
        parcelas = 3;
    }
    else if (vinculoEmpregaticio >= 12 && vinculoEmpregaticio<=23) {
        parcelas = 4;
    }
    else if (vinculoEmpregaticio >= 24 && vinculoEmpregaticio<=100) {
        parcelas = 5;
    }
    
  if (salarioMedio >= 2811.60) {
    printf("valor parcela: %lf", valorInvariante);
  } else {
    if (salarioMedio > 1100 && salarioMedio < 1686.79) {
      valorParcela = salarioMedio * 0.8;
    } else if (salarioMedio > 1686.79) {
      valorParcela = salarioMedio * 0.5; 
    
      resto = 1100 - salarioMedio;
      valorParcela = salarioMedio + resto;
     
    }

    
    if (rI == 1) {
      printf("\nDigite o primeiro salario: ");
      scanf("%lf", &salario1);
      printf("Digite o segundo salario: ");
      scanf("%lf", &salario2);
      printf("Digite o terceiro salario: ");
      scanf("%lf", &salario3);

      salarioMedio = ((salario1 + salario2 + salario3)/3);
    }else {
      printf("\nDigite o primeiro salario: ");
      scanf("%lf", &salario1);
      printf("Digite o segundo salario: ");
      scanf("%lf", &salario2);
      salarioMedio = ((salario1 + salario2)/2);
    }

    if (salarioMedio >= 2811.60) {
      printf("\nparcelas: %d x %lf", parcelas, valorInvariante);
    } 
		else {
      		if (salarioMedio > 1100 && salarioMedio < 1686.79) {
        valorParcela = salarioMedio * 0.8;
      			} else if (salarioMedio > 1686.79) {
        valorParcela = salarioMedio * 0.5;
      } else {
        resto = 1100 - salarioMedio;
        valorParcela = salarioMedio + resto;
     
	
          
      }
       printf("\nVoc� receber� %d parcelas de %lf\n\n", parcelas, valorParcela);
      	}}	
 return 0;
}
