#include <stdio.h>

//1- qual o menor índice de acidentes de trânsito

//2- a que cidades pertencem o menor índice de acidentes de trânsito;

//3- qual o maior índice de acidentes de trânsito

//4- e a que cidades pertencem o maior índice de acidentes de trânsito

//5- qual a média de veículos nas cidades juntas;

//6- qual a média de acidentes de trânsito nas cidades com menos de 2000 veículos de passeio.



int main() {

   // VARIAVEIS DO PROGRAMA

   int idCidadeMaiorAcidentes = 0;

   int idCidadeMenorAcidentes = 0;


   float indiceMaiorAcidentes = 0;

   float indiceMenorAcidentes = 0;


   int somaVeiculos = 0;


   float mediaVeiculos = 0;


   int somaAcidentesMenor2000 = 0;

   float mediaAcidentesMenor2000 = 0;

   int totalCidades = 0;

   int totalCidadesVeiculosMenos2000 = 0;



   int i = 1;

   int contadorCidades = 1;

   int idCidade, totalVeiculos, totalAcidentes;


   float indicadorAcidentes = 0;

    printf("\n---------------------------------------------------------------------------------\n");

    printf("          INSTRUÇÕES DE USO DO PROGRAMA\n");
    printf("          1. Informe quantas cidades deseja cadastrar\n");
    printf("          2. Você deve cadastrar o total de cidades selecionado\n");
    printf("          3. Os dados das cidades serão usados na análise\n");

    printf("---------------------------------------------------------------------------------\n\n");

    printf("Informe quantas cidades quer cadastrar: ");

    scanf("%i", &contadorCidades);

    printf("\n---------------------------------------------------------------------------------\n\n");

    printf("OK, serão cadastradas %d cidades\n", contadorCidades);

    printf("\n---------------------------------------------------------------------------------\n");


     for (i = 1; i <= contadorCidades; ++i) {

       printf("\n---------------------------------------------------------------------------------\n");

       printf("          INFORME OS DADOS DA CIDADE NÚMERO #%d\n", i);

       printf("---------------------------------------------------------------------------------\n");

       printf(" 1- Informe o ID da Cidade que deseja cadastrar: ");

       scanf("%i", &idCidade);

       printf(" 2- Insira o Número de Veículos na cidade de ID %d: ", idCidade);

       scanf("%i", &totalVeiculos);

       printf(" 3- Insira o Número de Acidentes na cidade de ID %d: ", idCidade);

       scanf("%i", &totalAcidentes);

       indicadorAcidentes = ((float) totalAcidentes/(float) totalVeiculos)*100.0;

       printf("\n---------------------------------------------------------------------------------\n");

       printf("          O INDICE DE ACIDENTES (%%) É DE %.2f!\n", indicadorAcidentes);

       printf("---------------------------------------------------------------------------------\n\n");

       printf("\n---------------------------------------------------------------------------------\n");

       printf("          CIDADE DE ID %d CADASTRADA COM SUCESSO!\n", idCidade);

       printf("---------------------------------------------------------------------------------\n");

       somaVeiculos += totalVeiculos;

       totalCidades += 1;

       if(indicadorAcidentes < indiceMenorAcidentes || indiceMenorAcidentes == 0) {
         idCidadeMenorAcidentes = idCidade;
         indiceMenorAcidentes = indicadorAcidentes;
       }

       if(indicadorAcidentes > indiceMaiorAcidentes || indiceMaiorAcidentes ==0){
         idCidadeMaiorAcidentes = idCidade;
         indiceMaiorAcidentes = indicadorAcidentes;
       }

       if(totalVeiculos < 2000) {
         somaAcidentesMenor2000 += totalAcidentes;
         totalCidadesVeiculosMenos2000 += 1;
       }

   }


   printf("\n\n\n\n");

   printf("---------------------------------------------------------------------------------\n");

   printf("          RESULTADO PARA AS %i CIDADES CADASTRADAS\n", contadorCidades);

   printf("---------------------------------------------------------------------------------\n\n\n");

   mediaVeiculos = (somaVeiculos/totalCidades); // CALCULA A MÉDIA DE VEICULOS PELAS CIDADES

   mediaAcidentesMenor2000 = ((float) somaAcidentesMenor2000 / (float) totalCidadesVeiculosMenos2000);

   printf("          VALOR DO MENOR INDICE (%%) DE ACIDENTES: %.2f!\n", indiceMenorAcidentes);

   printf("          ID DA CIDADE COM MENOR INDICE DE ACIDENTES: %d\n\n", idCidadeMenorAcidentes);

   printf("---------------------------------------------------------------------------------\n\n");

   printf("          VALOR DO MAIOR INDICE (%%) DE ACIDENTES: %.2f!\n", indiceMaiorAcidentes);

   printf("          ID DA CIDADE COM MAIOR INDICE DE ACIDENTES: %d\n\n", idCidadeMaiorAcidentes);

   printf("---------------------------------------------------------------------------------\n\n");

   printf("          MÉDIA DE VEÍCULOS EM TODAS AS CIDADES: %.2f\n", mediaVeiculos); // MÉDIA

   printf("          MÉDIA DE ACIDENTES NAS CIDADES COM MENOS DE 2000 VEICULOS: %.2f\n\n", mediaAcidentesMenor2000);



   printf("---------------------------------------------------------------------------------\n");

   printf("---------------------------------------------------------------------------------\n");

   return 0;

}
