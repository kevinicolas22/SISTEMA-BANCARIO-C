//REVER PARTE DO USARIO QUE ACABU DE SE CADASTRAR//
//BIBLIOTECAS//

#include <stdio.h>
#include <string.h>
#include <time.h>

//VARIAVEIS//

int banco, retornoincio, opcoes0, deposito0, opcoes, investimento, cadastro, nascimentod, nascimentom, nascimentoa, pos_cadastro,numcontainicial,numcontafinal, numcontames, extrato, valorextrato, retornarextrato, segundodeposito0, opcoesposdeposito, extratoposdesposito, segundosaque0, retornarextratopos,saquepos, deposito = 0, saque, segundosaque, segundodeposito, horaInvestimento; 

float valordeposito0, primeirodeposito, valordeposito02, saque1pos,valorsaque02, valordeposito, deposito1, valordeposito2, deposito2,  valorsaque0,valorsaque,saque02, saque1, valorsaque2, saque2, localInvestido, valorInvestimento, valorResgate, jurosTotal; 

char usuario, entrada, nomecadastro[100], nome[100], CPF[11], CPFconta[2];

int main() {


//INCIO//
  
printf("\n                 ------- BANCO C -------\n\n              ------- Seja Bem Vindo ------- \n\n"); 

//TODOS OS DEFAULTS DOS SWITCHS USADOS NO PROGRAMA SÃO TRATAMENTOS DE ERRO//
  
//INFORMAÇÕES DO BANCO//

banco:
printf("                 ------- Sistema -------\n\n");
printf("\nDigite 1 Para: Entrar no Sistema\n\nDigite 2 Para: Sobre o Banco C\n\nDigite 3 Para: Acessar o Sistema de Conta\n\nDigite 4 para: Sair\n\n\n\n       Se é sua primeira vez aqui, recomendamos \n          que acesse o Sistema de Contas =) \n\n");
scanf("%d", &banco);

  switch(banco){
    case 1:
/*ENTRAR NO SISTEMA OU SAIR*/
  
entrada:
printf("\nDeseja realizar alguma operação? \nSim - S\nNão - N\n");
scanf("%s", &entrada);

/*SE CADASTRAR OU ACESSAR CONTA*/
  
  switch (entrada) {
    case 'S' : case 's': 
usuario:
printf(" \nVocê é um novo usuário?\nSim - S\nNão - N\n");
scanf("%s", &usuario);

      
/*CADASTRO*/
      
  switch (usuario) {
    case 'S' : case 's': 
      printf("\n\nDigite 1 para se cadastrar.\nDigite 2 para retornar.\n");
      scanf("%d", &cadastro); {
        switch (cadastro) {
            case 1:
              printf("\n                 ------ Cadastramento ------\n");
              letra:
              printf("\nInforme seu nome: ");
              scanf("%s", nomecadastro);
              //TRATAMENTO DE ERRO NOME//
              if (*nomecadastro != 'a' && *nomecadastro != 'b' && *nomecadastro != 'c'&& *nomecadastro != 'd'&& *nomecadastro != 'e'&& *nomecadastro != 'f'&& *nomecadastro != 'j'&& *nomecadastro != 'h'&& *nomecadastro != 'l'&& *nomecadastro != 'm'&& *nomecadastro != 'n'&& *nomecadastro != 'o'&& *nomecadastro != 'p'&& *nomecadastro != 'q'&& *nomecadastro != 'g'&& *nomecadastro != 'i'&& *nomecadastro != 'k'&& *nomecadastro != 'r'&& *nomecadastro != 's'&& *nomecadastro != 'w'&& *nomecadastro != 'x' && *nomecadastro != 'y' && *nomecadastro != 'z' && *nomecadastro != 'A' && *nomecadastro != 'B' && *nomecadastro != 'C'&& *nomecadastro != 'D'&& *nomecadastro != 'E'&& *nomecadastro != 'F'&& *nomecadastro != 'J'&& *nomecadastro != 'H'&& *nomecadastro != 'L'&& *nomecadastro != 'M'&& *nomecadastro != 'N'&& *nomecadastro != 'O'&& *nomecadastro != 'P'&& *nomecadastro != 'Q'&& *nomecadastro != 'G'&& *nomecadastro != 'I'&& *nomecadastro != 'K'&& *nomecadastro != 'R'&& *nomecadastro != 'S'&& *nomecadastro != 'W'&& *nomecadastro != 'X' && *nomecadastro != 'Y' && *nomecadastro != 'Z' ){
                printf("\nInforme um nome válido!\nDigite novamente\n\n");
                goto letra;
              }          
              cpf:
              printf("\nInforme seu CPF: ");
              scanf("%s", CPF);
              //TRATAMENTO DE ERRO CPF//
              if (strlen(CPF) != 11){
                printf("\nCPF inválido!\nDigite novamente\n\n");
                goto cpf;
              }
              datanascimento:
              printf("\nDATA DE NASCIMENTO EX: xx xx xxxx\n\nInforme sua data de nascimento separada por espaço:\n");
              scanf("%d%d%d", &nascimentod,&nascimentom, &nascimentoa);
              //TRATAMENTO DE ERRO DATA NASCIMENTO//
              if(nascimentod <= 0 || nascimentod >= 32){
                printf("\nDigite uma data válida\n\n");
                goto datanascimento;
              }
              if(nascimentom <= 0 || nascimentom >= 13){
                printf("\nDigite uma data válida\n\n");
                goto datanascimento;
              }
              if(nascimentoa <= 1910 || nascimentoa >= 2004){
                printf("\nDigite uma data válida\n\n");
                goto datanascimento;
              }
              printf("\n                    ---- Dados ----");
              printf("\n\nCadastrando... por favor aguarde\n\n");
              printf("Usuário: %s\nCPF: %s\nData de nascimento: %d/%d/%d\n",nomecadastro,CPF,nascimentod, nascimentom, nascimentoa);
              
            /*APOS O CADASTRO VAMOS PARA AS OPÇÕES DE OPERAÇÃO*/
              
            printf("\nUsuário Cadastrado com sucesso!\n\n");
            acesso:
            printf("Digite 1 para acessar conta\nDigite 2 para encerrar a operação\n\n");
            scanf("%d", &pos_cadastro);{
              switch (pos_cadastro){
               /*ACESSAR SISTEMA COMO USUARIO JA CADASTRADO*/
                case 1:
                //SISTEMA DE CONTA//
                numconta0:
 printf("\n\nO CLIENTE DEVE INFORMAR OS SEGUINTES DIGITOS:\n\n1 - O ANO EM QUE SE VINCULOU AO BANCO\n2 - O ANO ATUAL\n3 - OS ÚLTIMOS 2 DIGITOS DO CPF\n4 - O n° MÊS ATUAL\n\nEx: xxxx xxxx xx xx\n\nInforme o número da sua conta separado por espaço: \n");                scanf("%d%d%s%d", &numcontainicial, &numcontafinal,CPFconta, &numcontames);
                  //TRATAMENTO DE ERRO DO NUMERO INICIAL DA CONTA BASEADO NO INFORME//
                  if(numcontainicial != 2022){
                     printf("\nDigite um número válido!\n\n");
                  goto numconta0;
                  break;
                  }
                  //TRATAMENTO DE ERRO DO NUMERO FINAL DA CONTA BASEADO NO INFORME//
                   if(numcontafinal != 2022){
                     printf("\nDigite um número válido!\n\n");
                  goto numconta0;
                  break;
                  }
                  //TRATAMENTO DE ERRO DO N° DE DIGITOS DO CPF BASEADO NO INFORME//
                  if(strlen(CPFconta) != 2){
                     printf("\nDigite um número válido!\n\n");
                  goto numconta0;
                  break;
                  }
                  //TRATAMENTO DE ERRO DO MÊS ATUAL DA CONTA BASEADO NO INFORME//
                  if(numcontames <= 0 || numcontames >= 13){
                     printf("\nDigite um número válido!\n\n");
                  goto numconta0;
                  break;
                  }
                  //OPERAÇÕES PÓS CADASTRO//
                  printf("\nOlá %s, vejo que acabou de realizar seu cadastro\n\nPara liberar o acesso a sua conta deposite o valor fixo e inicie suas operações.\n", nomecadastro);
              printf("\n                    ---- MENU ----\n\n");
                 //é NECESSÁRIO DEPOSITAR QUANTIA MINIMA PARA LIBERRAR CONTA//
                  operacao:
                  printf("Digite 1 para depósito. \n\nDigite 2 para sair e finalizar a operação.\n\n");
                  scanf("%d", &opcoes0);
                  switch (opcoes0) {
                    case 1:
                  //PRIMEIRO DEPOSITO POS CADASTRO//
              printf("\n                    ---- DEPÓSITOS ----\n");
                  operacao0:
                  printf("\nDigite 1 Para realizar um deposito \n\nDigite 2 para Retornar\n\n");
                  scanf("%d", &deposito0); { 
                    //deposito//  
            switch (deposito0) {
            case 1:
              valordeposito0:
              valorextrato = (((numcontafinal - numcontainicial) * 0.35) * 500000) + 500000;
              printf("\nInforme o valor do deposito: ");
              scanf("%f", &valordeposito0); 
              if(valordeposito0 < 500000){
                printf("\nvalor invalido\n\nDigite Novamente!\n\n");
                goto valordeposito0;
              }
              else{
                printf("\nVocê depositou R$%.2f na sua conta\n\n", valordeposito0);
                primeirodeposito =  valordeposito0;
                printf("O novo valor da sua conta é de R$%.2f\n\n", primeirodeposito);
              }
              novodeposito0:
              printf("Digite 1 para realizar um novo deposito\n\nDigite 2 para retornar ao menu\n\n");
              scanf("%d", &segundodeposito0);
              {
              //SEGUNDO DEPOSITO//
              switch (segundodeposito0){
                case 1:
                  valordeposito02:
                  printf("\nInforme o valor do deposito: ");
                  scanf("%f", &valordeposito02);
                  if (valordeposito02 < 50){
                    printf("\nvalor invalido\n\nDigite Novamente!\n\n");
                    goto valordeposito02;
                    }
                  else {
                  printf("\nVocê depositou mais R$%.2f na sua conta\n\n", valordeposito02);
                  deposito2 = primeirodeposito + valordeposito02;
                  printf("O novo valor da sua conta é de R$%.2f\n\nVocê chegou ao limite de depositos por operação!\n\nFinalizando está operação por questões de segurança...\n\nFim", deposito2);
                    return 0;
                   //NOVAS OPCOES APOS DEPOSITO POS CADASTRO//
                    opcoesposdposito:
                    iniciopos:
                    printf("\n                    ---- MENU ----\n\nDigite 1 para consultar extrato\n\nDigtite 2 para reazlizar saque\n\nDigite 3 para Finalizar operação\n\n");
                    scanf("%d", &opcoesposdeposito);
                    {
                      switch(opcoesposdeposito){
                        //EXTRATO POS CADASTRO//
                        case 1:
                        extratoinicio:
                        printf("\n                    ---- EXTRATO ----\n");
                        printf("\nDigite 1 Para exibir extrato \n\nDigite 2 para Retornar\n\n");
          scanf("%d", &extratoposdesposito);{
            switch(extratoposdesposito){
              case 1:
                extratopos:
                printf("\nO valor do extrtato é de R$%.2f\n", primeirodeposito);
              printf("\n\nDigite 1 para retornar\n\n");
              scanf("%d", &retornarextratopos);{
                switch(retornarextratopos){
                  case 1:
                  goto iniciopos;
                  
                  default:
                  printf("\nDigite uma opção válida!\n");
              goto extratopos;
              break;
                }
              }
              break;
              case 2: 
              goto iniciopos;
              break;

              default:
              printf("\n Digite uma opção válida!\n");
              goto extratoinicio;
              break;
            }
            break;
          }
                        //SAQUE POS CADASTRO//
                        case 2:
                        printf("\n                    ---- SAQUES ----\n");
                        novosaque0:
                        printf("\nDigite 1 Para realizar um saque \n\nDigite 2 para Retornar\n\n");
                        scanf("%d", &saquepos);{
                          switch(saquepos){
                            case 1:
                            valorsaque0:
                            printf("\nInforme o valor do saque: ");
                            scanf("%f", &valorsaque0);
                            if(valorsaque0 > primeirodeposito){
                            printf("\nVocê não Possui essa quantia na conta\n\nDigite Novamente!\n\n");
                            goto valorsaque0;
                            }
                            else{
                              printf("\nVocê retirou R$%.2f da sua conta\n\n", valorsaque0);
                            saque1pos = primeirodeposito - valorsaque0;
                            printf("O novo valor da sua conta é de R$%.2f\n\n", saque1pos);
                            }
                            novosaque01:
                            printf("Digite 1 para realizar novo saque\n\nDigite 2 para retornar ao menu\n\n");
              scanf("%d", &segundosaque0);
                            if(saque1pos == 0){
                               printf("\nVocê zerou a conta\n\nFinalizando sistema por questões de segurança...\n\nFim");
                  return 0;
                            }
                              {
                                switch (segundosaque0){
                                  case 1:
                                    valorsaque02:
                                    printf("\nInforme o valor do saque: ");
                                    scanf("%f", &valorsaque02);
                                    if (valorsaque02 > saque1pos){
                                       printf("\nVocê não Possui essa quantia na conta\n\nDigite Novamente!\n\n");
                                    goto valorsaque02;
                                    }
                                  else {
                                  printf("\nVocê retirou mais R$%.2f da sua conta\n\n", valorsaque02);
                                    saque02 = saque1pos - valorsaque02;
                                    printf("O novo valor da sua conta é de R$%.2f\n\nVocê chegou ao limite de saques por operação!\n\nFinalizando sistema por questões de segurança...\n\nFim", saque02);
                                    return 0;
                                }
                                case 2: 
                                  goto iniciopos;
                                  break;
                                  default:
                                  printf("\n\nDigite uma opção válida!\n");
                  goto novosaque01;
                              }
                          }
                            case 2:
                                goto iniciopos;
                                break;
                                
                              default:
                                printf("\n Digite uma opção válida!\n");
                                goto iniciopos;
                        }
                      }
                
                        //FINALIZAR A OPERAÇÃO//
                        case 3:
                        printf("\nFinalizando a operação... \n\nAté a próxima!"); 
                  return 0;
                        
                        default :
                        goto opcoesposdposito;
                      }
                    }
                    }
                  
                case 2:
                  goto iniciopos;
                  break;
                default:
                 printf("\n\nDigite uma opção válida!\n");
                  goto valordeposito02;
              }
            }
            case 2:
              goto operacao;
              break;
              
            default:
              printf("\n Digite uma opção válida!\n");
              goto operacao0;
            }
          }
                    case 2:
                    printf("\nFinalizando a operação... \n\nAté a próxima!"); 
                  return 0;
                default:
                  printf("\nDigite uma opção válida!\n\n");
                  goto operacao;
                  }
                 /*ENCERRAR OPERAÇÃO PÓS CADASTRO*/
                case 2:    
                  printf("\nFinalizando a operação... \n\nAté a próxima!"); 
                  return 0;
                default:
                  printf("\nDigite uma opção válida!\n\n");
                  goto acesso;
                
                }
            }
          //RETORNAR PARA SE CADASTRAR OU ACESSAR CONTA//
          case 2:             
              goto usuario;
              break;
          default:
            printf("\nDigite uma opção válida!\n");
            goto usuario;
            }
        }
      break;

    //USUARIO JA TEM CADASTRO ENTRA DIRETO NO SISTEMA//
    case 'N' : case 'n':   
      printf("\nInforme seu nome: \n");
      scanf("%s", nome);
      //TRATAMENTO DE ERRO NOME DE USUARIO QUE JA TEM CONTA//
       if (*nome != 'a' && *nome != 'b' && *nome != 'c'&& *nome != 'd'&& *nome != 'e'&& *nome != 'f'&& *nome != 'j'&& *nome != 'h'&& *nome != 'l'&& *nome != 'm'&& *nome != 'n'&& *nome != 'o'&& *nome != 'p'&& *nome != 'q'&& *nome != 'g'&& *nome != 'i'&& *nome != 'k'&& *nome != 'r'&& *nome != 's'&& *nome != 'w'&& *nome != 'x' && *nome != 'y' && *nome != 'z' && *nome != 'A' && *nome != 'B' && *nome != 'C'&& *nome != 'D'&& *nome != 'E'&& *nome != 'F'&& *nome != 'J'&& *nome != 'H'&& *nome != 'L'&& *nome != 'M'&& *nome != 'N'&& *nome != 'O'&& *nome != 'P'&& *nome != 'Q'&& *nome != 'G'&& *nome != 'I'&& *nome != 'K'&& *nome != 'R'&& *nome != 'S'&& *nome != 'W'&& *nome != 'X' && *nome != 'Y' && *nome != 'Z' ){
                printf("\nInforme um nome válido!\nDigite novamente\n\n");
                goto letra;
              }      
      //SISTEMA DE CONTA//
      numconta:
      printf("\n\nO CLIENTE DEVE INFORMAR OS SEGUINTES DIGITOS:\n\n1 - O ANO EM QUE SE VINCULOU AO BANCO\n2 - O ANO ATUAL\n3 - OS ÚLTIMOS 2 DIGITOS DO CPF\n4 - O n° MÊS ATUAL\n\nEx: xxxx xxxx xx xx\n\nInforme o número da sua conta separado por espaço: \n");
      scanf("%d%d%s%d", &numcontainicial, &numcontafinal,CPFconta, &numcontames);
        //TRATAMENTO DE ERRO DO NUMERO INICIAL DA CONTA BASEADO NO INFORME//
        if(numcontainicial < 2015 && numcontainicial > 2022){
           printf("\nDigite um número válido!\n\n");
        goto numconta;
        break;
        }
        //TRATAMENTO DE ERRO DO NUMERO FINAL DA CONTA BASEADO NO INFORME//
         if(numcontafinal != 2022){
           printf("\nDigite um número válido!\n\n");
        goto numconta;
        break;
        }
        //TRATAMENTO DE ERRO DO N° DE DIGITOS DO CPF BASEADO NO INFORME//
        if(strlen(CPFconta) != 2){
           printf("\nDigite um número válido!\n\n");
        goto numconta;
        break;
        }
        //TRATAMENTO DE ERRO DO MÊS ATUAL DA CONTA BASEADO NO INFORME//
        if(numcontames <= 0 || numcontames >= 13){
           printf("\nDigite um número válido!\n\n");
        goto numconta;
        break;
        }

      //CONTA CORRETA VAMOS ENTRAR NO SISTEMA//
      printf("\nOlá %s, o que deseja fazer hoje?\n", nome);
     inicio:
      printf("\n                    ---- MENU ---- \n\nDigite 1 Para extrato. \n\nDigite 2 para depósito. \n\nDigite 3 para saque. \n\nDigite 4 para investimentos. \n\nDigite 5 para sair e finalizar a operação.\n\n");
        
      scanf("%d", &opcoes);
        
      if (opcoes >= 1 && opcoes <= 4){
       
        switch (opcoes) {
        //EXTRATO DA CONTA//
        case 1:
          extrato1:
          printf("\n                    ---- EXTRATO ----\n");
          printf("\nDigite 1 Para exibir extrato \n\nDigite 2 para Retornar\n\n");
          scanf("%d", &extrato);
          //VALOR DO EXTRATO//
          valorextrato = (((numcontafinal - numcontainicial) * 0.35) * 500000) + 500000;
            {  
            switch (extrato) {
            case 1:
              extrato2:
              printf("\nO valor do extrtato é de R$%d,00\n", valorextrato);
              printf("\n\nDigite 1 para retornar\n\n");
              scanf("%d", &retornarextrato);
              {
              switch(retornarextrato)
                {
                  case 1:
                  goto inicio;

                  default:
                  printf("\nDigite uma opção válida!\n");
              goto extrato2;
              break;
                }
              }
              break;
            
            case 2:
              goto inicio;
              break;
              
            default:
              printf("\n Digite uma opção válida!\n");
              goto extrato1;
              break;
            }
          break;
        }
        //DEPÓSTITOS//
        case 2:
          printf("\n                    ---- DEPÓSITOS ----\n");
          printf("\nDigite 1 Para realizar um deposito \n\nDigite 2 para Retornar\n\n");
          scanf("%d", &deposito);
          //deposito//
            {  
            switch (deposito) {
            case 1:
              valordeposito:
              valorextrato = (((numcontafinal - numcontainicial) * 0.35) * 500000) + 500000;
              printf("\nInforme o valor do deposito: ");
              scanf("%f", &valordeposito);
              if(valordeposito < 50){
                printf("\nvalor invalido\n\nDigite Novamente!\n\n");
                goto valordeposito;
              }
              else{
                printf("\nVocê depositou R$%.2f na sua conta\n\n", valordeposito);
                deposito1 =  valordeposito + valorextrato;
                printf("O novo valor da sua conta é de R$%.2f\n\n", deposito1);
              }
              novodeposito:
              printf("Digite 1 para realizar um novo deposito\n\nDigite 2 para retornar ao menu\n\n");
              scanf("%d", &segundodeposito);
              {
              switch (segundodeposito){
                case 1:
                  valordeposito2:
                  printf("\nInforme o valor do deposito: ");
                  scanf("%f", &valordeposito2);
                  if (valordeposito2 < 10){
                    printf("\nvalor invalido\n\nDigite Novamente!\n\n");
                    goto valordeposito2;
                    }
                  else {
                  printf("\nVocê depositou mais R$%.2f na sua conta\n\n", valordeposito2);
                  deposito2 = deposito1 + valordeposito2;
                  printf("O novo valor da sua conta é de R$%.2f\n\nVocê chegou ao limite de depositos por operação!\n\nFinalizando sistema por questões de segurança...\n\nFim", deposito2);
                  return 0;
                    }
                  
                case 2:
                  goto inicio;
                  break;
                default:
                 printf("\n\nDigite uma opção válida!\n");
                  goto novodeposito;
              }
            }
            case 2:
              goto inicio;
              break;
              
            default:
              printf("\n Digite uma opção válida!\n");
              goto inicio;
            }
          }
           
          
        case 3:
          saques:
          printf("\n                    ---- SAQUES ----\n");
         
          printf("\nDigite 1 Para realizar um saque \n\nDigite 2 para Retornar\n\n");
          scanf("%d", &saque);
          //SAQUE//
            {  
            switch (saque) {
            case 1:
              valorsaque:
              valorextrato = (((numcontafinal - numcontainicial) * 0.35) * 500000) + 500000;
              printf("\nInforme o valor do saque: ");
              scanf("%f", &valorsaque);
              if(valorsaque > valorextrato){
                printf("\nVocê não Possui essa quantia na conta\n\nDigite Novamente!\n\n");
                goto valorsaque;
              }
              else{
                printf("\nVocê retirou R$%.2f da sua conta\n\n", valorsaque);
                saque1 =  valorextrato - valorsaque;
                printf("O novo valor da sua conta é de R$%.2f\n\n", saque1);
              }
              novosaque:
              printf("Digite 1 para realizar novo saque\n\nDigite 2 para retornar ao menu\n\n");
              scanf("%d", &segundosaque);
              if(saque1 == 0){
                    printf("\nVocê zerou a conta\n\nFinalizando sistema por questões de segurança...\n\nFim");
                  return 0;
                  }
              {
              switch (segundosaque){
                case 1:
                  valorsaque2:
                  printf("\nInforme o valor do saque: ");
                  scanf("%f", &valorsaque2);
                  if (valorsaque2 > saque1){
                    printf("\nVocê não Possui essa quantia na conta\n\nDigite Novamente!\n\n");
                    goto valorsaque2;
                    }
                  
                  else {
                  printf("\nVocê retirou mais R$%.2f da sua conta\n\n", valorsaque2);
                  saque2 = saque1 - valorsaque2;
                  printf("O novo valor da sua conta é de R$%.2f\n\nVocê chegou ao limite de saques por operação!\n\nFinalizando sistema por questões de segurança...\n\nFim", saque2);
                  return 0;
                    }
                  
                case 2:
                  goto inicio;
                  break;
                default:
                 printf("\n\nDigite uma opção válida!\n");
                  goto novosaque;
              }
            }
            case 2:
              goto inicio;
              break;
              
            default:
              printf("\n Digite uma opção válida!\n");
              goto inicio;
            }
          }
        case 4:
        
          printf("\n               ---- INVESTIMENTOS ----\n");
          
          aporteresgaste:
          printf("\n Digite 1 Para Aporte \n\n Digite 2 Para Resgate \n\n Digite 3 para Retornar\n\n");
          
          scanf("%d", &investimento);{  

            switch (investimento) {
            case 1:
              printf("\n \n               ----- APORTES ----- \n\n");
              investimento:
              printf("Insira o valor que você quer investir: \n");
              scanf("%f", &valorInvestimento);
              valorextrato = (((numcontafinal - numcontainicial) * 0.35) * 500000) + 500000;

              if (valorInvestimento <= valorextrato){
                localInvestido += valorInvestimento;
                
                time_t tempo;
                time(&tempo);
                horaInvestimento = tempo;

                printf("\n\nVocê investiu %.2f, a porcentagem de juros é de 0,5%% por minuto\n ", localInvestido); 
                opcaoinvestimento:
                printf("\nDigite 1 para retornar ao menu\n\nDigite 2 para encerrar a operação\n\n");
                int investimentoescolha;
                scanf("%d", &investimentoescolha);{
                  switch(investimentoescolha){
                    case 1:
                    goto aporteresgaste;
                    case 2:
                    printf("Encerrando operação...\n\nAté mais");
                    return 0;
                    default:
                    printf("\n\nInforme uma opção válida!");
                    goto opcaoinvestimento;
                  }
                }
                
                }

              else {
                printf("\n\nVocê não tem dinheiro suficiente para esta operação. \n\n");                      goto investimento;
              }
              break;

            case 2:
              
              printf("\n\n             ----- RESGATE ----- \n\n");
              
              time_t tempoAtual;
              time(&tempoAtual);
              jurosTotal = ((tempoAtual - horaInvestimento)/60) * 0.005;
              localInvestido += localInvestido * jurosTotal; 
              resgate:
              printf("Quanto você deseja resgatar do investimento? \n");
              scanf("%f", &valorResgate);
              
              if (valorResgate > localInvestido) {
                printf("\nVocê não investiu o suficiente \n\n");
                goto resgate;
              }
              else {
              localInvestido -= valorResgate;
                
              printf("\n\nVocê resgatou R$%2.f. \n\nE você ainda possui R$%2.f sendo investidos! \n", valorResgate, localInvestido);
                opcaoinvestimentoresgate:
                printf("\nDigite 1 para retornar ao menu\n\nDigite 2 para encerrar a operação\n\n");
                int resgateescolha;
                scanf("%d", &resgateescolha);{
                  switch(resgateescolha){
                    case 1:
                    goto aporteresgaste;
                    case 2:
                    printf("\nEncerrando operação...\n\nAté mais");
                    return 0;
                    default:
                    printf("\n\nInforme uma opção válida!");
                    goto opcaoinvestimentoresgate;
                  }
                }
              
              }
              break;
              
            default:
              goto inicio; 
            }
        }
        default:
          break;
        }
      }
      //ENCERRAR OPERAÇÃO JA DENTRO DO BANCO E SAIR DO SISTEMA//
      else if (opcoes == 5) {       
        printf("\nFinalizando a operação... \n\nAté a próxima!"); 
        return 0; 
      }
      else{
        printf("\n Digite uma opção válida!\n");
        goto inicio;
      } 
      default:
        printf("\nInforme uma opção válida!\n\n");
        goto usuario;
        break;
    }
    

    //ENCERRAR PROGRAMA DO DESEJA REALIZAR UMA OPERAÇÃO//
    case 'N' : case 'n': 
      
      printf("\nEntão estaremos encerrando o programa\n\nEncerrando...\n\nAté mais!");
      return 0;
    
        default:
      printf("\nInforme uma opção válida!\n\n");
      goto entrada;
      break;
    }
    break;
    
    //SOBRE O BANCO//
    case 2:
    somosobanco:
    printf("\n           ------ BANCO C O BANCO DO FUTURO -------\n\nO NOSSO FOCO É:\n\n1 - PRATICIDADE\n2 - CUSTO BENEFÍCIO\n3 - TECNOLOGIA\n\nATUANDO NO MERCADO DESDE 2015. \nAJUDANDO E FACILITANDO A VIDA DO CLIENTE C.\n\nSER UM CLIENTE C TEM UMA SERIE DE VANTAGENS:\n\nA NOSSA PLATAFORMA DE INVESTIMENTOS FAZ O SEU DINHEIRO\nRENDER ANUALMENTE COM UMA PORCENTAGEM ACIMA DO MERCADO DE 35 POR CENTO\nTRADICIONAL\n\nTÁ ESPERANDO O QUE PARA SER BANCO C?");
    printf("\n\n\n\nDigite 1 para retornar\n\n");
    scanf("%d", &retornoincio);
      switch(retornoincio){
        case 1:
        goto banco;
        
        default:
        printf("\nInforme uma opção válida!\n\n");
        goto somosobanco;
        }    
    //SOBRE O SISTEMA DE CONTAS//
    case 3:
    nossosistemdecontas:
    printf("\n                 ---- Conta C ----\n\nO NOSSO SISTEMA DE CONTAS:\n\nAPRESENTANDO O QUE HÁ DE MAIS NOVO, PARA ABRIR UMA \nCONTA EM NOSSO BANCO É NECESSARIO OS SEGUINTES \nPRÉ-REQUISITOS:\n\n1 - TER NO MÍNIMO 18 ANOS\n2 - ENTRAR COM UM VALOR INICIAL DE: R$500.000,00\n3 - REFERÊNCIA BANCÁRIA DO BANCO/CONTA ATUAL\n\nO SISTEMA DE ACESSO COM O NUMERO DA CONTA FUNCIONA \nATRAVÉS DO SISTEMA DE SEGURANÇA ADOTADO PELO BANCO \nQUE É ATUALIZADO AUTOMATICAMENTE TODOS OS MESES\n\nO CLIENTE DEVE INFORMAR OS SEGUINTES DIGITOS:\n\n1 - O ANO EM QUE SE VINCULOU AO BANCO\n2 - O ANO ATUAL\n3 - OS ÚLTIMOS 2 DIGITOS DO CPF\n4 - O n° MÊS ATUAL\n\nEx: xxxx xxxx xx xx");
    printf("\n\n\nDigite 1 para retornar\n\n");
    scanf("%d", &retornoincio);
      switch(retornoincio){
        case 1:
        goto banco;
        default:
        printf("\nInforme uma opção válida!\n");
        goto nossosistemdecontas;
        break;
      }
    //ENCERRAR OPERAÇÃO INICIAL
    case 4:
    printf("\nEntão estaremos encerrando o programa\n\nEncerrando...\n\nAté mais!");
      return 0;
    
    default:
    printf("\nInforme uma opção válida!\n\n");
    goto banco;
    }
 
}