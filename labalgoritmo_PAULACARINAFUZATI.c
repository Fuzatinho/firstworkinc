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
        printf("O último benefício de Seguro Desemprego recebido, faz mais de 16 meses?[1]SIM ou [2]NAO:\n"); /*pergunta1.1*/
        scanf("%d", &triagem_1);
            switch(triagem_1)
            {
                case 2: /*pessoa recebeu a menos de 16 meses não pode */
                printf("Voce nao tem direito ao beneficio pois o recebeu em periodo inferior a 16 meses.\n");
                system("PAUSE");
                
                case 1: /*pessoa recebeu a mais de 16 meses, continua questionario*/
                printf("Em seu ultimo emprego foi dispensado SEM justa causa?[1]SIM ou [2]NAO:\n"); /*pergunta2*/
                scanf("%d", &triagem_2);
                    switch (triagem_2)
                    {
                    case 2: /*saiu por justa causa, não pode*/
                    printf("Voce nao tem direito ao beneficio pois saiu por justa causa do seu ultimo emprego.\n");
                    system("PAUSE");
                    case 1: /*saiu sem justa causa, continua questionario*/
                    printf("Atualmente possui renda propria de qualquer natureza suficiente a?sua manutencao e a de sua familia? [1]SIM ou [2]NAO:\n"); /*pergunta3*/
                    scanf("%d", &triagem_3);
                        switch (triagem_3)
                        {
                            case 1: /*pessoa possui renda não pode */
                            printf("Voce nao tem direito ao beneficio pois possui renda propria.\n");
                            system("PAUSE");
                            case 2: /*pessoa não possui renda, continua questionario */
                            printf("Recebe beneficio previdenciario de prestacao continuada? (exceto auxilio acidente e pensao por morte)[1]SIM ou [2]NAO:\n"); /*pergunta4*/
                            scanf("%d", &triagem_4);
                                switch (triagem_4)
                                {
                                case 1: /*pessoa recebe benefício previdenciário, não pode */
                                printf("Voce não tem direito ao beneficio pois ja recebe beneficio de prestação continuada.\n");
                                system("PAUSE");
                                case 2: /*não recebe previdenciário, fim triagem, respondeu tudo ok até aqui*/
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
        case 2: /*pessoa não recebeu sd antes, continua questionario */
        printf("Em seu último emprego foi dispensado SEM justa causa?[1]SIM ou [2]NAO:\n");
        scanf("%d", &triagem_2);
            switch (triagem_2)
            {
            case 1: /*saiu sem justa causa, continua questionario*/
            printf("Atualmente possui renda propria de qualquer natureza suficiente à sua manutenção e a de sua família? [1]SIM ou [2]NAO:\n");
            scanf("%d", &triagem_3);
                switch (triagem_3)
                {
                case 1: /*pessoa possui renda não pode */
                printf("Voce não tem direito ao beneficio pois possui renda própria.\n");
                system("PAUSE");
                case 2: /*pessoa não possui renda, continua questionario */
                printf("Recebe beneficio previdenciário de prestação continuada? (exceto auxílio acidente e pensão por morte)[1]SIM ou [2]NAO:\n");
                scanf("%d", &triagem_4);
                    switch (triagem_4)
                    {
                    case 1: /*pessoa recebe benefício previdenciário, não pode */
                    printf("Voce não tem direito ao beneficio pois já recebe benefício de prestação continuada.\n");
                    system("PAUSE");
                    case 2: /*não recebe previdenciário, fim triagem, respondeu tudo ok até aqui*/
                    printf("Obrigada pelas respostas! Agora vamos traçar que tipo de trabalhador você é.\n");
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
            case 2: /*saiu por justa causa não pode*/
            printf("Voce não tem direito ao beneficio pois foi dispensado por justa causa.\n");
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
  
        printf("E trabalhador formal? [1]SIM ou [2]NÃO: \n");
        scanf("%d", &tformal);
        switch (tformal) 
            {
                case 1: /*é trabalhador formal */
                    printf("Recebeu  salarios de PJ ou PF, no periodo de 6 meses anteriores a data de dispensa? [1]SIM ou [2]NAO:\n");
                    scanf("%d", &tformal_1); /* 1ª condição tformal*/
                    switch (tformal_1) 
                        {
                            case 2: /*não recebeu salario de pf ou pj, não pode */
                                printf("Voce nao atende as condicoes para receber o beneficio.\n");
                                system("PAUSE");
                            case 1: /*recebeu salario de pf ou pj, continua questionario */
                                printf("Esta desempregado atualmente? [1]SIM ou [2]NÃO:\n"); /*2ª condição */
                                scanf("%d", &tformal_2); 
                                
                            switch (tformal_2)
                            {
                                case 2: /*não está desempregado, não pode */
                                    printf("Voce nao atende as condicoes para receber o beneficio.\n");
                                    system("PAUSE");
                                case 1: /* está desempregado, continua questionario */
                                    printf("Foi empregado de pessoa juridica ou de pessoa fisica equiparada à juridica, pelo menos 12 meses nos ultimos 36 meses que antecedem a data de dispensa? [1]SIM ou [2]NAO:\n");
                                    scanf("%d", &tformal_3); /*3ª condição */
                                    
                                switch (tformal_3)
                                {
                                    case 2: /*não foi empregado, não pode */
                                        printf("Voce nao atende as condicoes para receber o beneficio.\n");
                                        system("PAUSE");
                                    case 1: /* foi empregado, até aqui tudo ok */
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
                case 2: /*não é trabalhador formal, outra pergunta */ 
                    printf("E empregado doméstico? [1]SIM ou [2]N?O: \n");
                    scanf("%d", &tdomest);
                switch (tdomest)
                {
                    case 1: /*é domestico, continua questionario */
                        printf("Trabalhou exclusivamente como empregado domestico por no minimo 15 meses nos ultimos 24 meses que antecederam a data de dispensa? [1]SIM ou [2]NAO:\n");
                        scanf("%d", &tdomest_1);
                    switch (tdomest_1) 
                    {
                        case 1: /*atende condição 1, final questionario */
                            printf("Voce atende as condicoes para receber o beneficio, vamos agora calcular o número de parcelas e valor:\n");
                            iniciocalculo == 1;
                            break;
                        case 2: /*não atende condição, não pode */ 
                            printf("Voce nao atende as condicoes para receber o beneficio.\n");
                            system("PAUSE");
                        default:
                            printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NÃO\n");
                    system("PAUSE");
					}
                    break;
                    case 2: /*não é domestico, continua questionario */
                        printf("Teve contrato de trabalho suspenso em virtude de participacao em curso ou programa de qualificacao profissional oferecida pelo empregador? [1]SIM ou [2]NAO: \n");
                        scanf("%d", &tqualif);
                        switch(tqualif)
                            {
                                case 1: /*é tqualif, vai para condição 1 */
                                    printf("Esta devidamente matriculado em curso ou programa de qualificacao profissional oferecido pelo empregador? [1]SIM ou [2]NAO:");
                                    scanf("%d", &tqualif_1);
                                    switch(tqualif_1)
                                {
                                    case 2: /* não está matriculado, não pode */
                                        printf("Voce nao atende as condicoes para receber o beneficio.\n");
                                    system("PAUSE");
                                    case 1: /*atende a condição, vai para calculo de valor */
                                        printf("Voce atende as condicoes para receber o beneficio, vamos agora calcular o numero de parcelas e valor:\n");
                                        iniciocalculo == 1;
                                        break;
                                    default:
                                    printf("Resposta invalida, por favor digite apenas [1]SIM ou [2]NAO\n");
                                system("PAUSE");
								}
                                    break;
                                case 2: /*não é tqualif continua questionario tipo trabalhador */
                                    printf("E pescador profissional durante periodo de defeso: [1]SIM ou [2]NAO: \n");
                                    scanf("%d", &tpesc);
                                    switch(tpesc)
                                    {
                                        case 1: /*é pescador vai para condição 1 */
                                            printf("Possui inscricao no INSS como segurado especial? [1]SIM ou [2]NAO:\n");
                                            scanf("%d", &tpesc_1);
                                            switch(tpesc_1)
                                            {
                                                case 2: /*não atende condição 1, não pode */
                                                    printf("Voce nao atende as condicoes para receber o beneficio.\n"); 
                                                    system("PAUSE");
                                                case 1: /*atende condição 1, continua questionario */
                                                    printf("Possui comprovacao de venda do pescado a adquirinte pessoa juridica ou cooperativa, no periodo correspondente aos ultimos 12 meses que antecederam o periodo do defeso? [1]SIM ou [2]NAO:\n");
                                                    scanf("%d", &tpesc_2);
                                                switch (tpesc_2)
                                                {
                                                    case 2: /*não atende condição 2, não pode */
                                                        printf("Voce nao atende as condicoes para receber o beneficio.\n"); 
                                                        system("PAUSE");
                                                    case 1: /*atende a condição 2, continua */
                                                        printf("Pode comprovar o exercicio profissional da atividade de pesca artesanal objeto do defeso e que se dedicou a pesca, em carater ininterrupto, durante o periodo compreendido entre o defeso anterior e o em curso? [1]SIM ou [2]NAO \n");
                                                        scanf("%d", &tpesc_3);
                                                    switch (tpesc_3)
                                                    {
                                                        case 2: /*não atende condição 3, não pode */
                                                            printf("Voce nao atende as condicoes para receber o beneficio.\n"); 
                                                            system("PAUSE");
                                                        case 1: /* atende a condição 3, continua */
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
        printf("Fim da execução.\n");
    }
    	if (rVESO == 1) {
    		printf("Antes da data de demissão, você recebeu o salário por três ou dois meses? \n1) Três meses \n2) Dois meses\n");
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
       printf("\nVocê receberá %d parcelas de %lf\n\n", parcelas, valorParcela);
      	}}	
 return 0;
}
