#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declarando variáveis para armazenar países.
    char pais_A[30], pais_B[30], pais_C[30], pais_D[30], pais_E[30], pais_F[30], pais_G[30], pais_H[30];

   // Declarando variáveis para armazenar os estados.
    char estado_A01[30], estado_A02[30], estado_A03[30], estado_A04[30], estado_B01[30], estado_B02[30], estado_B03[30], estado_B04[30];
    char estado_C01[30], estado_C02[30], estado_C03[30], estado_C04[30], estado_D01[30], estado_D02[30], estado_D03[30], estado_D04[30];
    char estado_E01[30], estado_E02[30], estado_E03[30], estado_E04[30], estado_F01[30], estado_F02[30], estado_F03[30], estado_F04[30];
    char estado_G01[30], estado_G02[30], estado_G03[30], estado_G04[30], estado_H01[30], estado_H02[30], estado_H03[30], estado_H04[30];

    //Defina as variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cod_estado_A01[4], cod_estado_A02[4], cod_estado_A03[4], cod_estado_A04[4], cod_estado_B01[4], cod_estado_B02[4], cod_estado_B03[4], cod_estado_B04[4];
    char cod_estado_C01[4], cod_estado_C02[4], cod_estado_C03[4], cod_estado_C04[4], cod_estado_D01[4], cod_estado_D02[4], cod_estado_D03[4], cod_estado_D04[4];
    char cod_estado_E01[4], cod_estado_E02[4], cod_estado_E03[4], cod_estado_E04[4], cod_estado_F01[4], cod_estado_F02[4], cod_estado_F03[4], cod_estado_F04[4];
    char cod_estado_G01[4], cod_estado_G02[4], cod_estado_G03[4], cod_estado_G04[4], cod_estado_H01[4], cod_estado_H02[4], cod_estado_H03[4], cod_estado_H04[4];

    int populacao_A01, populacao_A02, populacao_A03, populacao_A04, populacao_B01, populacao_B02, populacao_B03, populacao_B04;
    int populacao_C01, populacao_C02, populacao_C03, populacao_C04, populacao_D01, populacao_D02, populacao_D03, populacao_D04;
    int populacao_E01, populacao_E02, populacao_E03, populacao_E04, populacao_F01, populacao_F02, populacao_F03, populacao_F04;
    int populacao_G01, populacao_G02, populacao_G03, populacao_G04, populacao_H01, populacao_H02, populacao_H03, populacao_H04;

    float area_km_A01, area_km_A02, area_km_A03, area_km_A04, area_km_B01, area_km_B02, area_km_B03, area_km_B04;
    float area_km_C01, area_km_C02, area_km_C03, area_km_C04, area_km_D01, area_km_D02, area_km_D03, area_km_D04;
    float area_km_E01, area_km_E02, area_km_E03, area_km_E04, area_km_F01, area_km_F02, area_km_F03, area_km_F04;
    float area_km_G01, area_km_G02, area_km_G03, area_km_G04, area_km_H01, area_km_H02, area_km_H03, area_km_H04;

    float PIB_A01, PIB_A02, PIB_A03, PIB_A04, PIB_B01, PIB_B02, PIB_B03, PIB_B04, PIB_C01, PIB_C02, PIB_C03, PIB_C04, PIB_D01, PIB_D02, PIB_D03, PIB_D04;
    float PIB_E01, PIB_E02, PIB_E03, PIB_E04, PIB_F01, PIB_F02, PIB_F03, PIB_F04, PIB_G01, PIB_G02, PIB_G03, PIB_G04, PIB_H01, PIB_H02, PIB_H03, PIB_H04;

    int pontos_turisticos_A01, pontos_turisticos_A02, pontos_turisticos_A03, pontos_turisticos_A04, pontos_turisticos_B01, pontos_turisticos_B02, pontos_turisticos_B03;
    int pontos_turisticos_B04, pontos_turisticos_C01, pontos_turisticos_C02, pontos_turisticos_C03, pontos_turisticos_C04, pontos_turisticos_D01, pontos_turisticos_D02;
    int pontos_turisticos_D03, pontos_turisticos_D04, pontos_turisticos_E01, pontos_turisticos_E02, pontos_turisticos_E03, pontos_turisticos_E04, pontos_turisticos_F01;
    int pontos_turisticos_F02, pontos_turisticos_F03, pontos_turisticos_F04, pontos_turisticos_G01, pontos_turisticos_G02, pontos_turisticos_G03, pontos_turisticos_G04;
    int pontos_turisticos_H01, pontos_turisticos_H02, pontos_turisticos_H03, pontos_turisticos_H04;
    
    // Variáveis de densidade populacional e PIB per Capita:
    float densidade_pp_A01, densidade_pp_A02, densidade_pp_A03, densidade_pp_A04, densidade_pp_B01, densidade_pp_B02, densidade_pp_B03, densidade_pp_B04;
    float densidade_pp_C01, densidade_pp_C02, densidade_pp_C03, densidade_pp_C04, densidade_pp_D01, densidade_pp_D02, densidade_pp_D03, densidade_pp_D04;
    float densidade_pp_E01, densidade_pp_E02, densidade_pp_E03, densidade_pp_E04, densidade_pp_F01, densidade_pp_F02, densidade_pp_F03, densidade_pp_F04;
    float densidade_pp_G01, densidade_pp_G02, densidade_pp_G03, densidade_pp_G04, densidade_pp_H01, densidade_pp_H02, densidade_pp_H03, densidade_pp_H04;

    float PIB_capita_A01, PIB_capita_A02, PIB_capita_A03, PIB_capita_A04, PIB_capita_B01, PIB_capita_B02, PIB_capita_B03, PIB_capita_B04;
    float PIB_capita_C01, PIB_capita_C02, PIB_capita_C03, PIB_capita_C04, PIB_capita_D01, PIB_capita_D02, PIB_capita_D03, PIB_capita_D04;
    float PIB_capita_E01, PIB_capita_E02, PIB_capita_E03, PIB_capita_E04, PIB_capita_F01, PIB_capita_F02, PIB_capita_F03, PIB_capita_F04;
    float PIB_capita_G01, PIB_capita_G02, PIB_capita_G03, PIB_capita_G04, PIB_capita_H01, PIB_capita_H02, PIB_capita_H03, PIB_capita_H04;

    // Variáveis para amazenar a soma geral do estado para exebição;
    unsigned long int total_populacao_A, total_populacao_B, total_populacao_C, total_populacao_D;
    unsigned long int total_populacao_E, total_populacao_F, total_populacao_G, total_populacao_H;
    float total_km_area_A, total_km_area_B, total_km_area_C, total_km_area_D, total_km_area_E, total_km_area_F, total_km_area_G, total_km_area_H;
    float total_PIB_A, total_PIB_B, total_PIB_C, total_PIB_D, total_PIB_E, total_PIB_F, total_PIB_G, total_PIB_H;
    int total_pontos_turisticos_A, total_pontos_turisticos_B, total_pontos_turisticos_C, total_pontos_turisticos_D;
    int total_pontos_turisticos_E, total_pontos_turisticos_F, total_pontos_turisticos_G, total_pontos_turisticos_H;
    float total_densidade_A, total_densidade_B, total_densidade_C, total_densidade_D;
    float total_densidade_E, total_densidade_F, total_densidade_G, total_densidade_H;
    float total_PIB_capita_A, total_PIB_capita_B, total_PIB_capita_C, total_PIB_capita_D;
    float total_PIB_capita_E, total_PIB_capita_F, total_PIB_capita_G, total_PIB_capita_H;

    // Variáveis de comparação das cidades;
    int populacao_vencedora_A01, populacao_vencedora_A02, populacao_vencedora_A03, populacao_vencedora_A04, populacao_vencedora_B01, populacao_vencedora_B02, populacao_vencedora_B03;
    int populacao_vencedora_B04, populacao_vencedora_C01, populacao_vencedora_C02, populacao_vencedora_C03, populacao_vencedora_C04, populacao_vencedora_D01, populacao_vencedora_D02;
    int populacao_vencedora_D03, populacao_vencedora_D04, populacao_vencedora_E01, populacao_vencedora_E02, populacao_vencedora_E03, populacao_vencedora_E04, populacao_vencedora_F01;
    int populacao_vencedora_F02, populacao_vencedora_F03, populacao_vencedora_F04, populacao_vencedora_G01, populacao_vencedora_G02, populacao_vencedora_G03, populacao_vencedora_G04;
    int populacao_vencedora_H01, populacao_vencedora_H02, populacao_vencedora_H03, populacao_vencedora_H04;
    float area_vencedora_A01, area_vencedora_A02, area_vencedora_A03, area_vencedora_A04, area_vencedora_B01, area_vencedora_B02, area_vencedora_B03, area_vencedora_B04;
    float area_vencedora_C01, area_vencedora_C02, area_vencedora_C03, area_vencedora_C04, area_vencedora_D01, area_vencedora_D02, area_vencedora_D03, area_vencedora_D04;
    float area_vencedora_E01, area_vencedora_E02, area_vencedora_E03, area_vencedora_E04, area_vencedora_F01, area_vencedora_F02, area_vencedora_F03, area_vencedora_F04;
    float area_vencedora_G01, area_vencedora_G02, area_vencedora_G03, area_vencedora_G04, area_vencedora_H01, area_vencedora_H02, area_vencedora_H03, area_vencedora_H04;
    float PIB_vencedor_A01, PIB_vencedor_A02, PIB_vencedor_A03, PIB_vencedor_A04, PIB_vencedor_B01, PIB_vencedor_B02, PIB_vencedor_B03, PIB_vencedor_B04;
    float PIB_vencedor_C01, PIB_vencedor_C02, PIB_vencedor_C03, PIB_vencedor_C04, PIB_vencedor_D01, PIB_vencedor_D02, PIB_vencedor_D03, PIB_vencedor_D04;
    float PIB_vencedor_E01, PIB_vencedor_E02, PIB_vencedor_E03, PIB_vencedor_E04, PIB_vencedor_F01, PIB_vencedor_F02, PIB_vencedor_F03, PIB_vencedor_F04;
    float PIB_vencedor_G01, PIB_vencedor_G02, PIB_vencedor_G03, PIB_vencedor_G04, PIB_vencedor_H01, PIB_vencedor_H02, PIB_vencedor_H03, PIB_vencedor_H04;
    int ponto_turistico_vencedor_A01, ponto_turistico_vencedor_A02, ponto_turistico_vencedor_A03, ponto_turistico_vencedor_A04, ponto_turistico_vencedor_B01, ponto_turistico_vencedor_B02;
    int ponto_turistico_vencedor_B03, ponto_turistico_vencedor_B04, ponto_turistico_vencedor_C01, ponto_turistico_vencedor_C02, ponto_turistico_vencedor_C03, ponto_turistico_vencedor_C04;
    int ponto_turistico_vencedor_D01, ponto_turistico_vencedor_D02, ponto_turistico_vencedor_D03, ponto_turistico_vencedor_D04, ponto_turistico_vencedor_E01, ponto_turistico_vencedor_E02;
    int ponto_turistico_vencedor_E03, ponto_turistico_vencedor_E04, ponto_turistico_vencedor_F01, ponto_turistico_vencedor_F02, ponto_turistico_vencedor_F03, ponto_turistico_vencedor_F04;
    int ponto_turistico_vencedor_G01, ponto_turistico_vencedor_G02, ponto_turistico_vencedor_G03, ponto_turistico_vencedor_G04, ponto_turistico_vencedor_H01, ponto_turistico_vencedor_H02;
    int ponto_turistico_vencedor_H03, ponto_turistico_vencedor_H04;
    float densidade_vencedora_A01, densidade_vencedora_A02, densidade_vencedora_A03, densidade_vencedora_A04, densidade_vencedora_B01, densidade_vencedora_B02, densidade_vencedora_B03, densidade_vencedora_B04;
    float densidade_vencedora_C01, densidade_vencedora_C02, densidade_vencedora_C03, densidade_vencedora_C04, densidade_vencedora_D01, densidade_vencedora_D02, densidade_vencedora_D03, densidade_vencedora_D04;
    float densidade_vencedora_E01, densidade_vencedora_E02, densidade_vencedora_E03, densidade_vencedora_E04, densidade_vencedora_F01, densidade_vencedora_F02, densidade_vencedora_F03, densidade_vencedora_F04;
    float densidade_vencedora_G01, densidade_vencedora_G02, densidade_vencedora_G03, densidade_vencedora_G04, densidade_vencedora_H01, densidade_vencedora_H02, densidade_vencedora_H03, densidade_vencedora_H04;
    float PIB_capita_vencedor_A01, PIB_capita_vencedor_A02, PIB_capita_vencedor_A03, PIB_capita_vencedor_A04, PIB_capita_vencedor_B01, PIB_capita_vencedor_B02, PIB_capita_vencedor_B03, PIB_capita_vencedor_B04;
    float PIB_capita_vencedor_C01, PIB_capita_vencedor_C02, PIB_capita_vencedor_C03, PIB_capita_vencedor_C04, PIB_capita_vencedor_D01, PIB_capita_vencedor_D02, PIB_capita_vencedor_D03, PIB_capita_vencedor_D04;
    float PIB_capita_vencedor_E01, PIB_capita_vencedor_E02, PIB_capita_vencedor_E03, PIB_capita_vencedor_E04, PIB_capita_vencedor_F01, PIB_capita_vencedor_F02, PIB_capita_vencedor_F03, PIB_capita_vencedor_F04;
    float PIB_capita_vencedor_G01, PIB_capita_vencedor_G02, PIB_capita_vencedor_G03, PIB_capita_vencedor_G04, PIB_capita_vencedor_H01, PIB_capita_vencedor_H02, PIB_capita_vencedor_H03, PIB_capita_vencedor_H04;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


    // Cadastro do País_A:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_A);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_A01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_A01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_A01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_A01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_A01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_A01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_A01 = (float) populacao_A01 / area_km_A01;
    PIB_capita_A01 = (float) PIB_A01 / populacao_A01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_A02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_A02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_A02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_A02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_A02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_A02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_A02 = (float) populacao_A02 / area_km_A02;
    PIB_capita_A02 = (float) PIB_A02 / populacao_A02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_A03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_A03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_A03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_A03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_A03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_A03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_A03 = (float) populacao_A03 / area_km_A03;
    PIB_capita_A03 = (float) PIB_A03 / populacao_A03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_A04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_A04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_A04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_A04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_A04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_A04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_A04 = (float) populacao_A04 / area_km_A04;
    PIB_capita_A04 = (float) PIB_A04 / populacao_A04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");


    // Cadastro do País_B:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_B);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_B01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_B01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_B01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_B01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_B01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_B01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_B01 = (float) populacao_B01 / area_km_B01;
    PIB_capita_B01 = (float) PIB_B01 / populacao_B01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_B02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_B02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_B02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_B02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_B02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_B02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_B02 = (float) populacao_B02 / area_km_B02;
    PIB_capita_B02 = (float) PIB_B02 / populacao_B02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_B03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_B03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_B03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_B03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_B03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_B03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_B03 = (float) populacao_B03 / area_km_B03;
    PIB_capita_B03 = (float) PIB_B03 / populacao_B03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_B04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_B04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_B04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_B04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_B04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_B04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_B04 = (float) populacao_B04 / area_km_B04;
    PIB_capita_B04 = (float) PIB_B04 / populacao_B04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");


    // Cadastro do País_C:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_C);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_C01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_C01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_C01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_C01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_C01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_C01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_C01 = (float) populacao_C01 / area_km_C01;
    PIB_capita_C01 = (float) PIB_C01 / populacao_C01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_C02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_C02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_C02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_C02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_C02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_C02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_C02 = (float) populacao_C02 / area_km_C02;
    PIB_capita_C02 = (float) PIB_C02 / populacao_C02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_C03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_C03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_C03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_C03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_C03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_C03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_C03 = (float) populacao_C03 / area_km_C03;
    PIB_capita_C03 = (float) PIB_C03 / populacao_C03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_C04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_C04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_C04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_C04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_C04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_C04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_C04 = (float) populacao_C04 / area_km_C04;
    PIB_capita_C04 = (float) PIB_C04 / populacao_C04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");


    // Cadastro do País_D:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_D);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_D01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_D01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_D01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_D01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_D01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_D01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_D01 = (float) populacao_D01 / area_km_D01;
    PIB_capita_D01 = (float) PIB_D01 / populacao_D01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_D02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_D02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_D02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_D02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_D02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_D02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_D02 = (float) populacao_D02 / area_km_D02;
    PIB_capita_D02 = (float) PIB_D02 / populacao_D02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_D03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_D03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_D03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_D03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_D03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_D03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_D03 = (float) populacao_D03 / area_km_D03;
    PIB_capita_D03 = (float) PIB_D03 / populacao_D03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_D04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_D04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_D04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_D04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_D04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_D04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_D04 = (float) populacao_D04 / area_km_D04;
    PIB_capita_D04 = (float) PIB_D04 / populacao_D04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");


    // Cadastro do País_E:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_E);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_E01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_E01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_E01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_E01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_E01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_E01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_E01 = (float) populacao_E01 / area_km_E01;
    PIB_capita_E01 = (float) PIB_E01 / populacao_E01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_E02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_E02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_E02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_E02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_E02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_E02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_E02 = (float) populacao_E02 / area_km_E02;
    PIB_capita_E02 = (float) PIB_E02 / populacao_E02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_E03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_E03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_E03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_E03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_E03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_E03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_E03 = (float) populacao_E03 / area_km_E03;
    PIB_capita_E03 = (float) PIB_E03 / populacao_E03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_E04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_E04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_E04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_E04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_E04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_E04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_E04 = (float) populacao_E04 / area_km_E04;
    PIB_capita_E04 = (float) PIB_E04 / populacao_E04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");


    // Cadastro do País_F:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_F);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_F01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_F01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_F01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_F01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_F01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_F01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_F01 = (float) populacao_F01 / area_km_F01;
    PIB_capita_F01 = (float) PIB_F01 / populacao_F01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_F02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_F02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_F02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_F02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_F02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_F02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_F02 = (float) populacao_F02 / area_km_F02;
    PIB_capita_F02 = (float) PIB_F02 / populacao_F02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_F03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_F03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_F03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_F03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_F03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_F03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_F03 = (float) populacao_F03 / area_km_F03;
    PIB_capita_F03 = (float) PIB_F03 / populacao_F03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_F04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_F04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_F04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_F04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_F04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_F04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_F04 = (float) populacao_F04 / area_km_F04;
    PIB_capita_F04 = (float) PIB_F04 / populacao_F04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");


    // Cadastro do País_G:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_G);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_G01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_G01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_G01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_G01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_G01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_G01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_G01 = (float) populacao_G01 / area_km_G01;
    PIB_capita_G01 = (float) PIB_G01 / populacao_G01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_G02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_G02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_G02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_G02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_G02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_G02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_G02 = (float) populacao_G02 / area_km_G02;
    PIB_capita_G02 = (float) PIB_G02 / populacao_G02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_G03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_G03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_G03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_G03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_G03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_G03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_G03 = (float) populacao_G03 / area_km_G03;
    PIB_capita_G03 = (float) PIB_G03 / populacao_G03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_G04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_G04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_G04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_G04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_G04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_G04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_G04 = (float) populacao_G04 / area_km_G04;
    PIB_capita_G04 = (float) PIB_G04 / populacao_G04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");


    // Cadastro do País_H:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_H);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_H01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_H01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_H01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_H01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_H01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_H01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_H01 = (float) populacao_H01 / area_km_H01;
    PIB_capita_H01 = (float) PIB_H01 / populacao_H01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_H02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_H02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_H02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_H02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_H02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_H02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_H02 = (float) populacao_H02 / area_km_H02;
    PIB_capita_H02 = (float) PIB_H02 / populacao_H02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_H03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_H03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_H03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_H03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_H03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_H03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_H03 = (float) populacao_H03 / area_km_H03;
    PIB_capita_H03 = (float) PIB_H03 / populacao_H03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_H04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_H04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_H04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_H04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_H04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_H04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_H04 = (float) populacao_H04 / area_km_H04;
    PIB_capita_H04 = (float) PIB_H04 / populacao_H04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Declarando valores gerais do País A
    total_populacao_A = populacao_A01 + populacao_A02 + populacao_A03 + populacao_A04;
    total_km_area_A = area_km_A01 + area_km_A02 + area_km_A03 + area_km_A04;
    total_PIB_A = PIB_A01 + PIB_A02 + PIB_A03 + PIB_A04;
    total_pontos_turisticos_A = pontos_turisticos_A01 + pontos_turisticos_A02 + pontos_turisticos_A03 + pontos_turisticos_A04;
    total_densidade_A = (float) total_populacao_A / total_km_area_A;
    total_PIB_capita_A = (float) total_PIB_A / total_populacao_A;

    // Declarando valores gerais do País B
    total_populacao_B = populacao_B01 + populacao_B02 + populacao_B03 + populacao_B04;
    total_km_area_B = area_km_B01 + area_km_B02 + area_km_B03 + area_km_B04;
    total_PIB_B = PIB_B01 + PIB_B02 + PIB_B03 + PIB_B04;
    total_pontos_turisticos_B = pontos_turisticos_B01 + pontos_turisticos_B02 + pontos_turisticos_B03 + pontos_turisticos_B04;
    total_densidade_B = (float) total_populacao_B / total_km_area_B;
    total_PIB_capita_B = (float) total_PIB_B / total_populacao_B;

    // Declarando valores gerais do País C
    total_populacao_C = populacao_C01 + populacao_C02 + populacao_C03 + populacao_C04;
    total_km_area_C = area_km_C01 + area_km_C02 + area_km_C03 + area_km_C04;
    total_PIB_C = PIB_C01 + PIB_C02 + PIB_C03 + PIB_C04;
    total_pontos_turisticos_C = pontos_turisticos_C01 + pontos_turisticos_C02 + pontos_turisticos_C03 + pontos_turisticos_C04;
    total_densidade_C = (float) total_populacao_C / total_km_area_C;
    total_PIB_capita_C = (float) total_PIB_C / total_populacao_C;

    // Declarando valores gerais do País D
    total_populacao_D = populacao_D01 + populacao_D02 + populacao_D03 + populacao_D04;
    total_km_area_D = area_km_D01 + area_km_D02 + area_km_D03 + area_km_D04;
    total_PIB_D = PIB_D01 + PIB_D02 + PIB_D03 + PIB_D04;
    total_pontos_turisticos_D = pontos_turisticos_D01 + pontos_turisticos_D02 + pontos_turisticos_D03 + pontos_turisticos_D04;
    total_densidade_D = (float) total_populacao_D / total_km_area_D;
    total_PIB_capita_D = (float) total_PIB_D / total_populacao_D;

    // Declarando valores gerais do País E
    total_populacao_E = populacao_E01 + populacao_E02 + populacao_E03 + populacao_E04;
    total_km_area_E = area_km_E01 + area_km_E02 + area_km_E03 + area_km_E04;
    total_PIB_E = PIB_E01 + PIB_E02 + PIB_E03 + PIB_E04;
    total_pontos_turisticos_E = pontos_turisticos_E01 + pontos_turisticos_E02 + pontos_turisticos_E03 + pontos_turisticos_E04;
    total_densidade_E = (float) total_populacao_E / total_km_area_E;
    total_PIB_capita_E = (float) total_PIB_E / total_populacao_E;

    // Declarando valores gerais do País F
    total_populacao_F = populacao_F01 + populacao_F02 + populacao_F03 + populacao_F04;
    total_km_area_F = area_km_F01 + area_km_F02 + area_km_F03 + area_km_F04;
    total_PIB_F = PIB_F01 + PIB_F02 + PIB_F03 + PIB_F04;
    total_pontos_turisticos_F = pontos_turisticos_F01 + pontos_turisticos_F02 + pontos_turisticos_F03 + pontos_turisticos_F04;
    total_densidade_F = (float) total_populacao_F / total_km_area_F;
    total_PIB_capita_F = (float) total_PIB_F / total_populacao_F;

    // Declarando valores gerais do País E
    total_populacao_G = populacao_G01 + populacao_G02 + populacao_G03 + populacao_G04;
    total_km_area_G = area_km_G01 + area_km_G02 + area_km_G03 + area_km_G04;
    total_PIB_G = PIB_G01 + PIB_G02 + PIB_G03 + PIB_G04;
    total_pontos_turisticos_G = pontos_turisticos_G01 + pontos_turisticos_G02 + pontos_turisticos_G03 + pontos_turisticos_G04;
    total_densidade_G = (float) total_populacao_G / total_km_area_G;
    total_PIB_capita_G = (float) total_PIB_G / total_populacao_G;

    // Declarando valores gerais do País E
    total_populacao_H = populacao_H01 + populacao_H02 + populacao_H03 + populacao_H04;
    total_km_area_H = area_km_H01 + area_km_H02 + area_km_H03 + area_km_H04;
    total_PIB_H = PIB_H01 + PIB_H02 + PIB_H03 + PIB_H04;
    total_pontos_turisticos_H = pontos_turisticos_H01 + pontos_turisticos_H02 + pontos_turisticos_H03 + pontos_turisticos_H04;
    total_densidade_H = (float) total_populacao_H / total_km_area_H;
    total_PIB_capita_H = (float) total_PIB_H / total_populacao_H;

    //*** Exibição de dados gerais dos países ***

    printf(" ---------- Dados dos países ---------- \n\n");

    //---- Exibição dados do país A
    printf("########## Estado: %s ##########\n\n", pais_A);
    printf("População: %lu habitantes\n", total_populacao_A);
    printf("Área: %.1f km²\n", total_km_area_A);
    printf("PIB: R$ %.2f\n", total_PIB_A);
    printf("Pontos turísticos: %d\n", total_pontos_turisticos_A);
    printf("Densidade populacional: %.2f hab/km²\n", total_densidade_A);
    printf("PIB per capita: R$ %2f\n", total_PIB_capita_A);

    //---- Exibição dados do país B
    printf("########## Estado: %s ##########\n\n", pais_B);
    printf("População: %lu habitantes\n", total_populacao_B);
    printf("Área: %.1f km²\n", total_km_area_B);
    printf("PIB: R$ %.2f\n", total_PIB_B);
    printf("Pontos turísticos: %d\n", total_pontos_turisticos_B);
    printf("Densidade populacional: %.2f hab/km²\n", total_densidade_B);
    printf("PIB per capita: R$ %.2f\n", total_PIB_capita_B);

    //---- Exibição dados do país C
    printf("########## Estado: %s ##########\n\n", pais_C);
    printf("População: %lu habitantes\n", total_populacao_C);
    printf("Área: %.1f km²\n", total_km_area_C);
    printf("PIB: R$ %.2f\n", total_PIB_C);
    printf("Pontos turísticos: %d\n", total_pontos_turisticos_C);
    printf("Densidade populacional: %.2f hab/km²\n", total_densidade_C);
    printf("PIB per capita: R$ %2f\n", total_PIB_capita_C);

    //---- Exibição dados do país D
    printf("########## Estado: %s ##########\n\n", pais_D);
    printf("População: %lu habitantes\n", total_populacao_D);
    printf("Área: %.1f km²\n", total_km_area_D);
    printf("PIB: R$ %.2f\n", total_PIB_D);
    printf("Pontos turísticos: %d\n", total_pontos_turisticos_D);
    printf("Densidade populacional: %.2f hab/km²\n", total_densidade_D);
    printf("PIB per capita: R$ %2f\n", total_PIB_capita_D);

    //---- Exibição dados do país E
    printf("########## Estado: %s ##########\n\n", pais_E);
    printf("População: %lu habitantes\n", total_populacao_E);
    printf("Área: %.1f km²\n", total_km_area_E);
    printf("PIB: R$ %.2f\n", total_PIB_E);
    printf("Pontos turísticos: %d\n", total_pontos_turisticos_E);
    printf("Densidade populacional: %.2f hab/km²\n", total_densidade_E);
    printf("PIB per capita: R$ %2f\n", total_PIB_capita_E);

    //---- Exibição dados do país F
    printf("########## Estado: %s ##########\n\n", pais_F);
    printf("População: %lu habitantes\n", total_populacao_F);
    printf("Área: %.1f km²\n", total_km_area_F);
    printf("PIB: R$ %.2f\n", total_PIB_F);
    printf("Pontos turísticos: %d\n", total_pontos_turisticos_F);
    printf("Densidade populacional: %.2f hab/km²\n", total_densidade_F);
    printf("PIB per capita: R$ %2f\n", total_PIB_capita_F);

    //---- Exibição dados do país G
    printf("########## Estado: %s ##########\n\n", pais_G);
    printf("População: %lu habitantes\n", total_populacao_G);
    printf("Área: %.1f km²\n", total_km_area_G);
    printf("PIB: R$ %.2f\n", total_PIB_G);
    printf("Pontos turísticos: %d\n", total_pontos_turisticos_G);
    printf("Densidade populacional: %.2f hab/km²\n", total_densidade_G);
    printf("PIB per capita: R$ %2f\n", total_PIB_capita_G);

    //---- Exibição dados do país H
    printf("########## Estado: %s ##########\n\n", pais_H);
    printf("População: %lu habitantes\n", total_populacao_H);
    printf("Área: %.1f km²\n", total_km_area_H);
    printf("PIB: R$ %.2f\n", total_PIB_H);
    printf("Pontos turísticos: %d\n", total_pontos_turisticos_H);
    printf("Densidade populacional: %.2f hab/km²\n", total_densidade_H);
    printf("PIB per capita: R$ %2f\n", total_PIB_capita_H);

    // Declaração de comparação de Estados
    // Comparação estado A01 com A02
    populacao_vencedora_A01 = populacao_A01 >= populacao_A02;
    area_vencedora_A01 = area_km_A01 >= area_km_A02;
    PIB_vencedor_A01 = PIB_A01 >= PIB_A02;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_A02;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_A02;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_A02;

     // Comparação estado A01 com A03
    populacao_vencedora_A01 = populacao_A01 >= populacao_A03;
    area_vencedora_A01 = area_km_A01 >= area_km_A03;
    PIB_vencedor_A01 = PIB_A01 >= PIB_A03;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_A03;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_A03;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_A03;

     // Comparação estado A01 com A04
    populacao_vencedora_A01 = populacao_A01 >= populacao_A04;
    area_vencedora_A01 = area_km_A01 >= area_km_A04;
    PIB_vencedor_A01 = PIB_A01 >= PIB_A04;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_A04;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_A04;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_A04;

    // Comparação estado A01 com B01
    populacao_vencedora_A01 = populacao_A01 >= populacao_B01;
    area_vencedora_A01 = area_km_A01 >= area_km_B01;
    PIB_vencedor_A01 = PIB_A01 >= PIB_B01;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_B01;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_B01;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_B01;

    // Comparação estado A01 com B02
    populacao_vencedora_A01 = populacao_A01 >= populacao_B02;
    area_vencedora_A01 = area_km_A01 >= area_km_B02;
    PIB_vencedor_A01 = PIB_A01 >= PIB_B02;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_B02;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_B02;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_B02;

    // Comparação estado A01 com B03
    populacao_vencedora_A01 = populacao_A01 >= populacao_B03;
    area_vencedora_A01 = area_km_A01 >= area_km_B03;
    PIB_vencedor_A01 = PIB_A01 >= PIB_B03;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_B03;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_B03;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_B03;

    // Comparação estado A01 com B04
    populacao_vencedora_A01 = populacao_A01 >= populacao_B04;
    area_vencedora_A01 = area_km_A01 >= area_km_B04;
    PIB_vencedor_A01 = PIB_A01 >= PIB_B04;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_B04;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_B04;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_B04;

     // Comparação estado A01 com C01
    populacao_vencedora_A01 = populacao_A01 >= populacao_C01;
    area_vencedora_A01 = area_km_A01 >= area_km_C01;
    PIB_vencedor_A01 = PIB_A01 >= PIB_C01;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_C01;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_C01;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_C01;

    // Comparação estado A01 com C02
    populacao_vencedora_A01 = populacao_A01 >= populacao_C02;
    area_vencedora_A01 = area_km_A01 >= area_km_C02;
    PIB_vencedor_A01 = PIB_A01 >= PIB_C02;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_C02;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_C02;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_C02;

    // Comparação estado A01 com C03
    populacao_vencedora_A01 = populacao_A01 >= populacao_C03;
    area_vencedora_A01 = area_km_A01 >= area_km_C03;
    PIB_vencedor_A01 = PIB_A01 >= PIB_C03;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_C03;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_C03;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_C03;

    // Comparação estado A01 com C04
    populacao_vencedora_A01 = populacao_A01 >= populacao_C04;
    area_vencedora_A01 = area_km_A01 >= area_km_C04;
    PIB_vencedor_A01 = PIB_A01 >= PIB_C04;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_C04;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_C04;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_C04;

     // Comparação estado A01 com D01
    populacao_vencedora_A01 = populacao_A01 >= populacao_D01;
    area_vencedora_A01 = area_km_A01 >= area_km_D01;
    PIB_vencedor_A01 = PIB_A01 >= PIB_D01;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_D01;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_D01;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_D01;

    // Comparação estado A01 com D02
    populacao_vencedora_A01 = populacao_A01 >= populacao_D02;
    area_vencedora_A01 = area_km_A01 >= area_km_D02;
    PIB_vencedor_A01 = PIB_A01 >= PIB_D02;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_D02;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_D02;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_D02;

    // Comparação estado A01 com D03
    populacao_vencedora_A01 = populacao_A01 >= populacao_D03;
    area_vencedora_A01 = area_km_A01 >= area_km_D03;
    PIB_vencedor_A01 = PIB_A01 >= PIB_D03;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_D03;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_D03;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_D03;

    // Comparação estado A01 com D04
    populacao_vencedora_A01 = populacao_A01 >= populacao_D04;
    area_vencedora_A01 = area_km_A01 >= area_km_D04;
    PIB_vencedor_A01 = PIB_A01 >= PIB_D04;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_D04;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_D04;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_D04;

     // Comparação estado A01 com E01
    populacao_vencedora_A01 = populacao_A01 >= populacao_E01;
    area_vencedora_A01 = area_km_A01 >= area_km_E01;
    PIB_vencedor_A01 = PIB_A01 >= PIB_E01;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_E01;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_E01;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_E01;

    // Comparação estado A01 com E02
    populacao_vencedora_A01 = populacao_A01 >= populacao_E02;
    area_vencedora_A01 = area_km_A01 >= area_km_E02;
    PIB_vencedor_A01 = PIB_A01 >= PIB_E02;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_E02;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_E02;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_E02;

    // Comparação estado A01 com E03
    populacao_vencedora_A01 = populacao_A01 >= populacao_E03;
    area_vencedora_A01 = area_km_A01 >= area_km_E03;
    PIB_vencedor_A01 = PIB_A01 >= PIB_E03;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_E03;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_E03;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_E03;

    // Comparação estado A01 com E04
    populacao_vencedora_A01 = populacao_A01 >= populacao_E04;
    area_vencedora_A01 = area_km_A01 >= area_km_E04;
    PIB_vencedor_A01 = PIB_A01 >= PIB_E04;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_E04;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_E04;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_E04;

     // Comparação estado A01 com F01
    populacao_vencedora_A01 = populacao_A01 >= populacao_F01;
    area_vencedora_A01 = area_km_A01 >= area_km_F01;
    PIB_vencedor_A01 = PIB_A01 >= PIB_F01;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_F01;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_F01;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_F01;

    // Comparação estado A01 com F02
    populacao_vencedora_A01 = populacao_A01 >= populacao_F02;
    area_vencedora_A01 = area_km_A01 >= area_km_F02;
    PIB_vencedor_A01 = PIB_A01 >= PIB_F02;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_F02;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_F02;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_F02;

    // Comparação estado A01 com F03
    populacao_vencedora_A01 = populacao_A01 >= populacao_F03;
    area_vencedora_A01 = area_km_A01 >= area_km_F03;
    PIB_vencedor_A01 = PIB_A01 >= PIB_F03;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_F03;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_F03;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_F03;

    // Comparação estado A01 com F04
    populacao_vencedora_A01 = populacao_A01 >= populacao_F04;
    area_vencedora_A01 = area_km_A01 >= area_km_F04;
    PIB_vencedor_A01 = PIB_A01 >= PIB_F04;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_F04;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_F04;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_F04;

     // Comparação estado A01 com G01
    populacao_vencedora_A01 = populacao_A01 >= populacao_G01;
    area_vencedora_A01 = area_km_A01 >= area_km_G01;
    PIB_vencedor_A01 = PIB_A01 >= PIB_G01;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_B01;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_B01;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_B01;

    // Comparação estado A01 com G02
    populacao_vencedora_A01 = populacao_A01 >= populacao_G02;
    area_vencedora_A01 = area_km_A01 >= area_km_G02;
    PIB_vencedor_A01 = PIB_A01 >= PIB_G02;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_G02;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_G02;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_G02;

    // Comparação estado A01 com G03
    populacao_vencedora_A01 = populacao_A01 >= populacao_G03;
    area_vencedora_A01 = area_km_A01 >= area_km_G03;
    PIB_vencedor_A01 = PIB_A01 >= PIB_G03;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_G03;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_G03;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_G03;

    // Comparação estado A01 com B04
    populacao_vencedora_A01 = populacao_A01 >= populacao_G04;
    area_vencedora_A01 = area_km_A01 >= area_km_G04;
    PIB_vencedor_A01 = PIB_A01 >= PIB_G04;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_G04;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_G04;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_G04;

     // Comparação estado A01 com H01
    populacao_vencedora_A01 = populacao_A01 >= populacao_H01;
    area_vencedora_A01 = area_km_A01 >= area_km_H01;
    PIB_vencedor_A01 = PIB_A01 >= PIB_H01;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_H01;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_H01;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_H01;

    // Comparação estado A01 com H02
    populacao_vencedora_A01 = populacao_A01 >= populacao_H02;
    area_vencedora_A01 = area_km_A01 >= area_km_H02;
    PIB_vencedor_A01 = PIB_A01 >= PIB_H02;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_H02;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_H02;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_H02;

    // Comparação estado A01 com H03
    populacao_vencedora_A01 = populacao_A01 >= populacao_H03;
    area_vencedora_A01 = area_km_A01 >= area_km_H03;
    PIB_vencedor_A01 = PIB_A01 >= PIB_H03;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_H03;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_H03;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_H03;

    // Comparação estado A01 com H04
    populacao_vencedora_A01 = populacao_A01 >= populacao_H04;
    area_vencedora_A01 = area_km_A01 >= area_km_H04;
    PIB_vencedor_A01 = PIB_A01 >= PIB_H04;
    ponto_turistico_vencedor_A01 = pontos_turisticos_A01 >= pontos_turisticos_H04;
    densidade_vencedora_A01 = densidade_pp_A01 >= densidade_pp_H04;
    PIB_capita_vencedor_A01 = PIB_capita_A01 >= PIB_capita_H04;

    // Comparação estado A02 com A01
    populacao_vencedora_A02 = populacao_A02 >= populacao_A01;
    area_vencedora_A02 = area_km_A02 >= area_km_A01;
    PIB_vencedor_A02 = PIB_A02 >= PIB_A01;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_A01;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_A01;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_A01;

    // Comparação estado A02 com A03
    populacao_vencedora_A02 = populacao_A02 >= populacao_A03;
    area_vencedora_A02 = area_km_A02 >= area_km_A03;
    PIB_vencedor_A02 = PIB_A02 >= PIB_A03;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_A03;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_A03;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_A03;

    // Comparação estado A02 com A04
    populacao_vencedora_A02 = populacao_A02 >= populacao_A04;
    area_vencedora_A02 = area_km_A02 >= area_km_A04;
    PIB_vencedor_A02 = PIB_A02 >= PIB_A04;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_A04;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_A04;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_A04;

    // Comparação estado A02 com B01
    populacao_vencedora_A02 = populacao_A02 >= populacao_B01;
    area_vencedora_A02 = area_km_A02 >= area_km_B01;
    PIB_vencedor_A02 = PIB_A02 >= PIB_B01;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_B01;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_B01;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_B01;

    // Comparação estado A02 com B02
    populacao_vencedora_A02 = populacao_A02 >= populacao_B02;
    area_vencedora_A02 = area_km_A02 >= area_km_B02;
    PIB_vencedor_A02 = PIB_A02 >= PIB_B02;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_B02;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_B02;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_B02;

    // Comparação estado A02 com B03
    populacao_vencedora_A02 = populacao_A02 >= populacao_B03;
    area_vencedora_A02 = area_km_A02 >= area_km_B03;
    PIB_vencedor_A02 = PIB_A02 >= PIB_B03;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_B03;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_B03;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_B03;

    // Comparação estado A02 com A04
    populacao_vencedora_A02 = populacao_A02 >= populacao_B04;
    area_vencedora_A02 = area_km_A02 >= area_km_B04;
    PIB_vencedor_A02 = PIB_A02 >= PIB_B04;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_B04;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_B04;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_B04;

    // Comparação estado A02 com C01
    populacao_vencedora_A02 = populacao_A02 >= populacao_C01;
    area_vencedora_A02 = area_km_A02 >= area_km_C01;
    PIB_vencedor_A02 = PIB_A02 >= PIB_C01;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_C01;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_C01;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_C01;

    // Comparação estado A02 com C02
    populacao_vencedora_A02 = populacao_A02 >= populacao_C02;
    area_vencedora_A02 = area_km_A02 >= area_km_C02;
    PIB_vencedor_A02 = PIB_A02 >= PIB_C02;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_C02;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_C02;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_C02;

    // Comparação estado A02 com C03
    populacao_vencedora_A02 = populacao_A02 >= populacao_C03;
    area_vencedora_A02 = area_km_A02 >= area_km_C03;
    PIB_vencedor_A02 = PIB_A02 >= PIB_C03;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_C03;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_C03;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_C03;

    // Comparação estado A02 com C04
    populacao_vencedora_A02 = populacao_A02 >= populacao_C04;
    area_vencedora_A02 = area_km_A02 >= area_km_C04;
    PIB_vencedor_A02 = PIB_A02 >= PIB_C04;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_C04;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_C04;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_C04;

    // Comparação estado A02 com D01
    populacao_vencedora_A02 = populacao_A02 >= populacao_D01;
    area_vencedora_A02 = area_km_A02 >= area_km_D01;
    PIB_vencedor_A02 = PIB_A02 >= PIB_D01;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_D01;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_D01;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_D01;

    // Comparação estado A02 com D02
    populacao_vencedora_A02 = populacao_A02 >= populacao_D02;
    area_vencedora_A02 = area_km_A02 >= area_km_D02;
    PIB_vencedor_A02 = PIB_A02 >= PIB_D02;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_D02;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_D02;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_D02;

    // Comparação estado A02 com D03
    populacao_vencedora_A02 = populacao_A02 >= populacao_D03;
    area_vencedora_A02 = area_km_A02 >= area_km_D03;
    PIB_vencedor_A02 = PIB_A02 >= PIB_D03;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_D03;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_D03;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_D03;

    // Comparação estado A02 com D04
    populacao_vencedora_A02 = populacao_A02 >= populacao_D04;
    area_vencedora_A02 = area_km_A02 >= area_km_D04;
    PIB_vencedor_A02 = PIB_A02 >= PIB_D04;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_D04;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_D04;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_D04;

    // Comparação estado A02 com E01
    populacao_vencedora_A02 = populacao_A02 >= populacao_E01;
    area_vencedora_A02 = area_km_A02 >= area_km_E01;
    PIB_vencedor_A02 = PIB_A02 >= PIB_E01;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_E01;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_E01;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_E01;

    // Comparação estado A02 com E02
    populacao_vencedora_A02 = populacao_A02 >= populacao_E02;
    area_vencedora_A02 = area_km_A02 >= area_km_E02;
    PIB_vencedor_A02 = PIB_A02 >= PIB_E02;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_E02;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_E02;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_E02;

    // Comparação estado A02 com E03
    populacao_vencedora_A02 = populacao_A02 >= populacao_E03;
    area_vencedora_A02 = area_km_A02 >= area_km_E03;
    PIB_vencedor_A02 = PIB_A02 >= PIB_E03;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_E03;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_E03;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_E03;

    // Comparação estado A02 com E04
    populacao_vencedora_A02 = populacao_A02 >= populacao_E04;
    area_vencedora_A02 = area_km_A02 >= area_km_E04;
    PIB_vencedor_A02 = PIB_A02 >= PIB_E04;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_E04;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_E04;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_E04;

    // Comparação estado A02 com F01
    populacao_vencedora_A02 = populacao_A02 >= populacao_F01;
    area_vencedora_A02 = area_km_A02 >= area_km_F01;
    PIB_vencedor_A02 = PIB_A02 >= PIB_F01;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_F01;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_F01;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_F01;

    // Comparação estado A02 com F02
    populacao_vencedora_A02 = populacao_A02 >= populacao_F02;
    area_vencedora_A02 = area_km_A02 >= area_km_F02;
    PIB_vencedor_A02 = PIB_A02 >= PIB_F02;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_F02;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_F02;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_F02;

    // Comparação estado A02 com F03
    populacao_vencedora_A02 = populacao_A02 >= populacao_F03;
    area_vencedora_A02 = area_km_A02 >= area_km_F03;
    PIB_vencedor_A02 = PIB_A02 >= PIB_F03;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_F03;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_F03;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_F03;

    // Comparação estado A02 com F04
    populacao_vencedora_A02 = populacao_A02 >= populacao_F04;
    area_vencedora_A02 = area_km_A02 >= area_km_F04;
    PIB_vencedor_A02 = PIB_A02 >= PIB_F04;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_F04;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_F04;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_F04;

    // Comparação estado A02 com G01
    populacao_vencedora_A02 = populacao_A02 >= populacao_G01;
    area_vencedora_A02 = area_km_A02 >= area_km_G01;
    PIB_vencedor_A02 = PIB_A02 >= PIB_G01;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_G01;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_G01;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_G01;

    // Comparação estado A02 com G02
    populacao_vencedora_A02 = populacao_A02 >= populacao_G02;
    area_vencedora_A02 = area_km_A02 >= area_km_G02;
    PIB_vencedor_A02 = PIB_A02 >= PIB_G02;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_G02;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_G02;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_G02;

    // Comparação estado A02 com G03
    populacao_vencedora_A02 = populacao_A02 >= populacao_G03;
    area_vencedora_A02 = area_km_A02 >= area_km_G03;
    PIB_vencedor_A02 = PIB_A02 >= PIB_G03;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_G03;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_G03;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_G03;

    // Comparação estado A02 com G04
    populacao_vencedora_A02 = populacao_A02 >= populacao_G04;
    area_vencedora_A02 = area_km_A02 >= area_km_G04;
    PIB_vencedor_A02 = PIB_A02 >= PIB_G04;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_G04;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_G04;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_G04;

    // Comparação estado A02 com H01
    populacao_vencedora_A02 = populacao_A02 >= populacao_H01;
    area_vencedora_A02 = area_km_A02 >= area_km_H01;
    PIB_vencedor_A02 = PIB_A02 >= PIB_H01;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_H01;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_H01;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_H01;

    // Comparação estado A02 com H02
    populacao_vencedora_A02 = populacao_A02 >= populacao_H02;
    area_vencedora_A02 = area_km_A02 >= area_km_H02;
    PIB_vencedor_A02 = PIB_A02 >= PIB_H02;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_H02;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_H02;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_H02;

    // Comparação estado A02 com H03
    populacao_vencedora_A02 = populacao_A02 >= populacao_H03;
    area_vencedora_A02 = area_km_A02 >= area_km_H03;
    PIB_vencedor_A02 = PIB_A02 >= PIB_H03;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_H03;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_H03;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_H03;

    // Comparação estado A02 com H04
    populacao_vencedora_A02 = populacao_A02 >= populacao_H04;
    area_vencedora_A02 = area_km_A02 >= area_km_H04;
    PIB_vencedor_A02 = PIB_A02 >= PIB_H04;
    ponto_turistico_vencedor_A02 = pontos_turisticos_A02 >= pontos_turisticos_H04;
    densidade_vencedora_A02 = densidade_pp_A02 >= densidade_pp_H04;
    PIB_capita_vencedor_A02 = PIB_capita_A02 >= PIB_capita_H04;

    // Comparação estado A03 com A01
    populacao_vencedora_A03 = populacao_A03 >= populacao_A01;
    area_vencedora_A03 = area_km_A03 >= area_km_A01;
    PIB_vencedor_A03 = PIB_A03 >= PIB_A01;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_A01;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_A01;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_A01;

    // Comparação estado A03 com A02
    populacao_vencedora_A03 = populacao_A03 >= populacao_A02;
    area_vencedora_A03 = area_km_A03 >= area_km_A02;
    PIB_vencedor_A03 = PIB_A03 >= PIB_A02;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_A02;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_A02;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_A02;

    // Comparação estado A03 com A04
    populacao_vencedora_A03 = populacao_A03 >= populacao_A04;
    area_vencedora_A03 = area_km_A03 >= area_km_A04;
    PIB_vencedor_A03 = PIB_A03 >= PIB_A04;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_A04;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_A04;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_A04;

    // Comparação estado A03 com B01
    populacao_vencedora_A03 = populacao_A03 >= populacao_B01;
    area_vencedora_A03 = area_km_A03 >= area_km_B01;
    PIB_vencedor_A03 = PIB_A03 >= PIB_B01;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_B01;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_B01;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_B01;

    // Comparação estado A03 com B02
    populacao_vencedora_A03 = populacao_A03 >= populacao_B02;
    area_vencedora_A03 = area_km_A03 >= area_km_B02;
    PIB_vencedor_A03 = PIB_A03 >= PIB_B02;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_B02;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_B02;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_B02;

    // Comparação estado A03 com B03
    populacao_vencedora_A03 = populacao_A03 >= populacao_B03;
    area_vencedora_A03 = area_km_A03 >= area_km_B03;
    PIB_vencedor_A03 = PIB_A03 >= PIB_B03;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_B03;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_B03;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_B03;

    // Comparação estado A03 com B04
    populacao_vencedora_A03 = populacao_A03 >= populacao_B04;
    area_vencedora_A03 = area_km_A03 >= area_km_B04;
    PIB_vencedor_A03 = PIB_A03 >= PIB_B04;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_B04;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_B04;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_B04;

    // Comparação estado A03 com C01
    populacao_vencedora_A03 = populacao_A03 >= populacao_C01;
    area_vencedora_A03 = area_km_A03 >= area_km_C01;
    PIB_vencedor_A03 = PIB_A03 >= PIB_C01;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_C01;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_C01;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_C01;

    // Comparação estado A03 com C02
    populacao_vencedora_A03 = populacao_A03 >= populacao_C02;
    area_vencedora_A03 = area_km_A03 >= area_km_C02;
    PIB_vencedor_A03 = PIB_A03 >= PIB_C02;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_C02;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_C02;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_C02;

    // Comparação estado A03 com C03
    populacao_vencedora_A03 = populacao_A03 >= populacao_C03;
    area_vencedora_A03 = area_km_A03 >= area_km_C03;
    PIB_vencedor_A03 = PIB_A03 >= PIB_C03;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_C03;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_C03;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_C03;

    // Comparação estado A03 com C04
    populacao_vencedora_A03 = populacao_A03 >= populacao_C04;
    area_vencedora_A03 = area_km_A03 >= area_km_C04;
    PIB_vencedor_A03 = PIB_A03 >= PIB_C04;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_C04;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_C04;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_C04;

    // Comparação estado A03 com D01
    populacao_vencedora_A03 = populacao_A03 >= populacao_D01;
    area_vencedora_A03 = area_km_A03 >= area_km_D01;
    PIB_vencedor_A03 = PIB_A03 >= PIB_D01;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_D01;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_D01;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_D01;

    // Comparação estado A03 com D02
    populacao_vencedora_A03 = populacao_A03 >= populacao_D02;
    area_vencedora_A03 = area_km_A03 >= area_km_D02;
    PIB_vencedor_A03 = PIB_A03 >= PIB_D02;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_D02;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_D02;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_D02;

    // Comparação estado A03 com D03
    populacao_vencedora_A03 = populacao_A03 >= populacao_D03;
    area_vencedora_A03 = area_km_A03 >= area_km_D03;
    PIB_vencedor_A03 = PIB_A03 >= PIB_D03;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_D03;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_D03;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_D03;

    // Comparação estado A03 com D04
    populacao_vencedora_A03 = populacao_A03 >= populacao_D04;
    area_vencedora_A03 = area_km_A03 >= area_km_D04;
    PIB_vencedor_A03 = PIB_A03 >= PIB_D04;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_D04;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_D04;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_D04;

    // Comparação estado A03 com E01
    populacao_vencedora_A03 = populacao_A03 >= populacao_E01;
    area_vencedora_A03 = area_km_A03 >= area_km_E01;
    PIB_vencedor_A03 = PIB_A03 >= PIB_E01;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_E01;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_E01;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_E01;

    // Comparação estado A03 com E02
    populacao_vencedora_A03 = populacao_A03 >= populacao_E02;
    area_vencedora_A03 = area_km_A03 >= area_km_E02;
    PIB_vencedor_A03 = PIB_A03 >= PIB_E02;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_E02;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_E02;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_E02;

    // Comparação estado A03 com E03
    populacao_vencedora_A03 = populacao_A03 >= populacao_E03;
    area_vencedora_A03 = area_km_A03 >= area_km_E03;
    PIB_vencedor_A03 = PIB_A03 >= PIB_E03;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_E03;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_E03;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_E03;

    // Comparação estado A03 com E04
    populacao_vencedora_A03 = populacao_A03 >= populacao_E04;
    area_vencedora_A03 = area_km_A03 >= area_km_E04;
    PIB_vencedor_A03 = PIB_A03 >= PIB_E04;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_E04;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_E04;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_E04;

    // Comparação estado A03 com F01
    populacao_vencedora_A03 = populacao_A03 >= populacao_F01;
    area_vencedora_A03 = area_km_A03 >= area_km_F01;
    PIB_vencedor_A03 = PIB_A03 >= PIB_F01;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_F01;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_F01;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_F01;

    // Comparação estado A03 com F02
    populacao_vencedora_A03 = populacao_A03 >= populacao_F02;
    area_vencedora_A03 = area_km_A03 >= area_km_F02;
    PIB_vencedor_A03 = PIB_A03 >= PIB_F02;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_F02;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_F02;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_F02;

    // Comparação estado A03 com F03
    populacao_vencedora_A03 = populacao_A03 >= populacao_F03;
    area_vencedora_A03 = area_km_A03 >= area_km_F03;
    PIB_vencedor_A03 = PIB_A03 >= PIB_F03;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A02 >= pontos_turisticos_F03;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_F03;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_F03;

    // Comparação estado A03 com F04
    populacao_vencedora_A03 = populacao_A03 >= populacao_F04;
    area_vencedora_A03 = area_km_A03 >= area_km_F04;
    PIB_vencedor_A03 = PIB_A03 >= PIB_F04;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_F04;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_F04;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_F04;

    // Comparação estado A03 com G01
    populacao_vencedora_A03 = populacao_A03 >= populacao_G01;
    area_vencedora_A03 = area_km_A03 >= area_km_G01;
    PIB_vencedor_A03 = PIB_A03 >= PIB_G01;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_G01;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_G01;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_G01;

    // Comparação estado A03 com G02
    populacao_vencedora_A03 = populacao_A03 >= populacao_G02;
    area_vencedora_A03 = area_km_A03 >= area_km_G02;
    PIB_vencedor_A03 = PIB_A03 >= PIB_G02;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_G02;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_G02;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_G02;

    // Comparação estado A03 com G03
    populacao_vencedora_A03 = populacao_A03 >= populacao_G03;
    area_vencedora_A03 = area_km_A03 >= area_km_G03;
    PIB_vencedor_A03 = PIB_A03 >= PIB_G03;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_G03;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_G03;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_G03;

    // Comparação estado A03 com G04
    populacao_vencedora_A03 = populacao_A03 >= populacao_G04;
    area_vencedora_A03 = area_km_A03 >= area_km_G04;
    PIB_vencedor_A03 = PIB_A03 >= PIB_G04;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_G04;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_G04;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_G04;

    // Comparação estado A03 com H01
    populacao_vencedora_A03 = populacao_A03 >= populacao_H01;
    area_vencedora_A03 = area_km_A03 >= area_km_H01;
    PIB_vencedor_A03 = PIB_A03 >= PIB_H01;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_H01;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_H01;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_H01;

    // Comparação estado A03 com H02
    populacao_vencedora_A03 = populacao_A03 >= populacao_H02;
    area_vencedora_A03 = area_km_A03 >= area_km_H02;
    PIB_vencedor_A03 = PIB_A03 >= PIB_H02;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_H02;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_H02;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_H02;

    // Comparação estado A03 com H03
    populacao_vencedora_A03 = populacao_A03 >= populacao_H03;
    area_vencedora_A03 = area_km_A03 >= area_km_H03;
    PIB_vencedor_A03 = PIB_A03 >= PIB_H03;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_H03;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_H03;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_H03;

    // Comparação estado A03 com H04
    populacao_vencedora_A03 = populacao_A03 >= populacao_H04;
    area_vencedora_A03 = area_km_A03 >= area_km_H04;
    PIB_vencedor_A03 = PIB_A03 >= PIB_H04;
    ponto_turistico_vencedor_A03 = pontos_turisticos_A03 >= pontos_turisticos_H04;
    densidade_vencedora_A03 = densidade_pp_A03 >= densidade_pp_H04;
    PIB_capita_vencedor_A03 = PIB_capita_A03 >= PIB_capita_H04;

     // Comparação estado A04 com A01
    populacao_vencedora_A04 = populacao_A04 >= populacao_A01;
    area_vencedora_A04 = area_km_A04 >= area_km_A01;
    PIB_vencedor_A04 = PIB_A04 >= PIB_A01;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_A01;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_A01;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_A01;

    // Comparação estado A04 com A02
    populacao_vencedora_A04 = populacao_A04 >= populacao_A02;
    area_vencedora_A04 = area_km_A04 >= area_km_A02;
    PIB_vencedor_A04 = PIB_A04 >= PIB_A02;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_A02;
    densidade_vencedora_A03 = densidade_pp_A04 >= densidade_pp_A02;
    PIB_capita_vencedor_A03 = PIB_capita_A04 >= PIB_capita_A02;

    // Comparação estado A04 com A03
    populacao_vencedora_A04 = populacao_A04 >= populacao_A03;
    area_vencedora_A04 = area_km_A04 >= area_km_A03;
    PIB_vencedor_A04 = PIB_A04 >= PIB_A03;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_A03;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_A03;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_A03;

     // Comparação estado A04 com B01
    populacao_vencedora_A04 = populacao_A04 >= populacao_B01;
    area_vencedora_A04 = area_km_A04 >= area_km_B01;
    PIB_vencedor_A04 = PIB_A04 >= PIB_B01;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_B01;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_B01;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_B01;

    // Comparação estado A04 com B02
    populacao_vencedora_A04 = populacao_A04 >= populacao_B02;
    area_vencedora_A04 = area_km_A04 >= area_km_B02;
    PIB_vencedor_A04 = PIB_A04 >= PIB_B02;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_B02;
    densidade_vencedora_A03 = densidade_pp_A04 >= densidade_pp_B02;
    PIB_capita_vencedor_A03 = PIB_capita_A04 >= PIB_capita_B02;

    // Comparação estado A04 com B03
    populacao_vencedora_A04 = populacao_A04 >= populacao_B03;
    area_vencedora_A04 = area_km_A04 >= area_km_B03;
    PIB_vencedor_A04 = PIB_A04 >= PIB_B03;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_B03;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_B03;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_B03;

    // Comparação estado A04 com B04
    populacao_vencedora_A04 = populacao_A04 >= populacao_B04;
    area_vencedora_A04 = area_km_A04 >= area_km_B04;
    PIB_vencedor_A04 = PIB_A04 >= PIB_B04;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_B04;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_B04;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_B04;

     // Comparação estado A04 com C01
    populacao_vencedora_A04 = populacao_A04 >= populacao_C01;
    area_vencedora_A04 = area_km_A04 >= area_km_C01;
    PIB_vencedor_A04 = PIB_A04 >= PIB_C01;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_C01;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_C01;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_C01;

    // Comparação estado A04 com C02
    populacao_vencedora_A04 = populacao_A04 >= populacao_C02;
    area_vencedora_A04 = area_km_A04 >= area_km_C02;
    PIB_vencedor_A04 = PIB_A04 >= PIB_C02;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_C02;
    densidade_vencedora_A03 = densidade_pp_A04 >= densidade_pp_C02;
    PIB_capita_vencedor_A03 = PIB_capita_A04 >= PIB_capita_C02;

    // Comparação estado A04 com C03
    populacao_vencedora_A04 = populacao_A04 >= populacao_C03;
    area_vencedora_A04 = area_km_A04 >= area_km_C03;
    PIB_vencedor_A04 = PIB_A04 >= PIB_C03;
    ponto_turistico_vencedor_A04 = pontos_turisticos_C04 >= pontos_turisticos_C03;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_C03;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_C03;

    // Comparação estado A04 com C04
    populacao_vencedora_A04 = populacao_A04 >= populacao_C04;
    area_vencedora_A04 = area_km_A04 >= area_km_C04;
    PIB_vencedor_A04 = PIB_A04 >= PIB_C04;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_C04;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_C04;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_C04;

     // Comparação estado A04 com D01
    populacao_vencedora_A04 = populacao_A04 >= populacao_D01;
    area_vencedora_A04 = area_km_A04 >= area_km_D01;
    PIB_vencedor_A04 = PIB_A04 >= PIB_D01;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_D01;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_D01;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_D01;

    // Comparação estado A04 com D02
    populacao_vencedora_A04 = populacao_A04 >= populacao_H02;
    area_vencedora_A04 = area_km_A04 >= area_km_D02;
    PIB_vencedor_A04 = PIB_A04 >= PIB_D02;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_D02;
    densidade_vencedora_A03 = densidade_pp_A04 >= densidade_pp_D02;
    PIB_capita_vencedor_A03 = PIB_capita_A04 >= PIB_capita_D02;

    // Comparação estado A04 com D03
    populacao_vencedora_A04 = populacao_A04 >= populacao_D03;
    area_vencedora_A04 = area_km_A04 >= area_km_D03;
    PIB_vencedor_A04 = PIB_A04 >= PIB_D03;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_D03;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_D03;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_D03;

    // Comparação estado A04 com D04
    populacao_vencedora_A04 = populacao_A04 >= populacao_D04;
    area_vencedora_A04 = area_km_A04 >= area_km_D04;
    PIB_vencedor_A04 = PIB_A04 >= PIB_D04;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_D04;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_D04;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_D04;

     // Comparação estado A04 com E01
    populacao_vencedora_A04 = populacao_A04 >= populacao_E01;
    area_vencedora_A04 = area_km_A04 >= area_km_E01;
    PIB_vencedor_A04 = PIB_A04 >= PIB_E01;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_E01;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_E01;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_E01;

    // Comparação estado A04 com E02
    populacao_vencedora_A04 = populacao_A04 >= populacao_E02;
    area_vencedora_A04 = area_km_A04 >= area_km_E02;
    PIB_vencedor_A04 = PIB_A04 >= PIB_E02;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_E02;
    densidade_vencedora_A03 = densidade_pp_A04 >= densidade_pp_E02;
    PIB_capita_vencedor_A03 = PIB_capita_A04 >= PIB_capita_E02;

    // Comparação estado A04 com E03
    populacao_vencedora_A04 = populacao_A04 >= populacao_E03;
    area_vencedora_A04 = area_km_A04 >= area_km_E03;
    PIB_vencedor_A04 = PIB_A04 >= PIB_E03;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_E03;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_E03;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_E03;

    // Comparação estado A04 com E04
    populacao_vencedora_A04 = populacao_A04 >= populacao_E04;
    area_vencedora_A04 = area_km_A04 >= area_km_E04;
    PIB_vencedor_A04 = PIB_A04 >= PIB_E04;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_E04;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_E04;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_E04;

     // Comparação estado A04 com F01
    populacao_vencedora_A04 = populacao_A04 >= populacao_F01;
    area_vencedora_A04 = area_km_A04 >= area_km_F01;
    PIB_vencedor_A04 = PIB_A04 >= PIB_F01;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_F01;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_F01;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_F01;

    // Comparação estado A04 com F02
    populacao_vencedora_A04 = populacao_A04 >= populacao_F02;
    area_vencedora_A04 = area_km_A04 >= area_km_F02;
    PIB_vencedor_A04 = PIB_A04 >= PIB_F02;
    ponto_turistico_vencedor_A04 = pontos_turisticos_F04 >= pontos_turisticos_F02;
    densidade_vencedora_A03 = densidade_pp_A04 >= densidade_pp_F02;
    PIB_capita_vencedor_A03 = PIB_capita_A04 >= PIB_capita_F02;

    // Comparação estado A04 com F03
    populacao_vencedora_A04 = populacao_A04 >= populacao_F03;
    area_vencedora_A04 = area_km_A04 >= area_km_F03;
    PIB_vencedor_A04 = PIB_A04 >= PIB_F03;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_F03;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_F03;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_F03;

    // Comparação estado A04 com F04
    populacao_vencedora_A04 = populacao_A04 >= populacao_F04;
    area_vencedora_A04 = area_km_A04 >= area_km_F04;
    PIB_vencedor_A04 = PIB_A04 >= PIB_F04;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_F04;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_F04;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_F04;

     // Comparação estado A04 com G01
    populacao_vencedora_A04 = populacao_A04 >= populacao_G01;
    area_vencedora_A04 = area_km_A04 >= area_km_G01;
    PIB_vencedor_A04 = PIB_A04 >= PIB_G01;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_G01;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_G01;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_G01;

    // Comparação estado A04 com G02
    populacao_vencedora_A04 = populacao_A04 >= populacao_G02;
    area_vencedora_A04 = area_km_A04 >= area_km_G02;
    PIB_vencedor_A04 = PIB_A04 >= PIB_G02;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_G02;
    densidade_vencedora_A03 = densidade_pp_A04 >= densidade_pp_G02;
    PIB_capita_vencedor_A03 = PIB_capita_A04 >= PIB_capita_G02;

    // Comparação estado A04 com G03
    populacao_vencedora_A04 = populacao_A04 >= populacao_G03;
    area_vencedora_A04 = area_km_A04 >= area_km_G03;
    PIB_vencedor_A04 = PIB_A04 >= PIB_G03;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_G03;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_G03;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_G03;

    // Comparação estado A04 com G04
    populacao_vencedora_A04 = populacao_A04 >= populacao_G04;
    area_vencedora_A04 = area_km_A04 >= area_km_G04;
    PIB_vencedor_A04 = PIB_A04 >= PIB_G04;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_G04;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_G04;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_G04;

     // Comparação estado A04 com H01
    populacao_vencedora_A04 = populacao_A04 >= populacao_H01;
    area_vencedora_A04 = area_km_A04 >= area_km_H01;
    PIB_vencedor_A04 = PIB_A04 >= PIB_H01;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_H01;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_H01;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_H01;

    // Comparação estado A04 com H02
    populacao_vencedora_A04 = populacao_A04 >= populacao_H02;
    area_vencedora_A04 = area_km_A04 >= area_km_H02;
    PIB_vencedor_A04 = PIB_A04 >= PIB_H02;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_H02;
    densidade_vencedora_A03 = densidade_pp_A04 >= densidade_pp_H02;
    PIB_capita_vencedor_A03 = PIB_capita_A04 >= PIB_capita_H02;

    // Comparação estado A04 com H03
    populacao_vencedora_A04 = populacao_A04 >= populacao_H03;
    area_vencedora_A04 = area_km_A04 >= area_km_H03;
    PIB_vencedor_A04 = PIB_A04 >= PIB_H03;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_H03;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_H03;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_H03;

    // Comparação estado A04 com H04
    populacao_vencedora_A04 = populacao_A04 >= populacao_H04;
    area_vencedora_A04 = area_km_A04 >= area_km_H04;
    PIB_vencedor_A04 = PIB_A04 >= PIB_H04;
    ponto_turistico_vencedor_A04 = pontos_turisticos_A04 >= pontos_turisticos_H04;
    densidade_vencedora_A04 = densidade_pp_A04 >= densidade_pp_H04;
    PIB_capita_vencedor_A04 = PIB_capita_A04 >= PIB_capita_H04;

    // Comparação estado B01 com A01
    populacao_vencedora_B01 = populacao_B01 >= populacao_A01;
    area_vencedora_B01 = area_km_B01 >= area_km_A01;
    PIB_vencedor_B01 = PIB_B01 >= PIB_A01;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_A01;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_A01;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_A01;

    // Comparação estado B01 com A02
    populacao_vencedora_B01 = populacao_B01 >= populacao_A02;
    area_vencedora_B01 = area_km_B01 >= area_km_A02;
    PIB_vencedor_B01 = PIB_B01 >= PIB_A02;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_A02;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_A02;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_A02;

    // Comparação estado B01 com A03
    populacao_vencedora_B01 = populacao_B01 >= populacao_A03;
    area_vencedora_B01 = area_km_B01 >= area_km_A03;
    PIB_vencedor_B01 = PIB_B01 >= PIB_A03;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_A03;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_A03;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_A03;

    // Comparação estado B01 com A04
    populacao_vencedora_B01 = populacao_B01 >= populacao_A04;
    area_vencedora_B01 = area_km_B01 >= area_km_A04;
    PIB_vencedor_B01 = PIB_B01 >= PIB_A04;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_A04;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_A04;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_A04;

    // Comparação estado B01 com B02
    populacao_vencedora_B01 = populacao_B01 >= populacao_B02;
    area_vencedora_B01 = area_km_B01 >= area_km_B02;
    PIB_vencedor_B01 = PIB_B01 >= PIB_B02;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_B02;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_B02;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_B02;

    // Comparação estado B01 com B03
    populacao_vencedora_B01 = populacao_B01 >= populacao_B03;
    area_vencedora_B01 = area_km_B01 >= area_km_B03;
    PIB_vencedor_B01 = PIB_B01 >= PIB_B03;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_B03;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_B03;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_B03;

    // Comparação estado B01 com B04
    populacao_vencedora_B01 = populacao_B01 >= populacao_B04;
    area_vencedora_B01 = area_km_B01 >= area_km_B04;
    PIB_vencedor_B01 = PIB_B01 >= PIB_B04;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_B04;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_B04;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_B04;

    // Comparação estado B01 com C01
    populacao_vencedora_B01 = populacao_B01 >= populacao_C01;
    area_vencedora_B01 = area_km_B01 >= area_km_C01;
    PIB_vencedor_B01 = PIB_B01 >= PIB_C01;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_C01;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_C01;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_C01;

    // Comparação estado B01 com C02
    populacao_vencedora_B01 = populacao_B01 >= populacao_C02;
    area_vencedora_B01 = area_km_B01 >= area_km_C02;
    PIB_vencedor_B01 = PIB_B01 >= PIB_C02;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_C02;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_C02;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_C02;

    // Comparação estado B01 com C03
    populacao_vencedora_B01 = populacao_B01 >= populacao_C03;
    area_vencedora_B01 = area_km_B01 >= area_km_C03;
    PIB_vencedor_B01 = PIB_B01 >= PIB_C03;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_C03;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_C03;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_C03;

    // Comparação estado B01 com C04
    populacao_vencedora_B01 = populacao_B01 >= populacao_C04;
    area_vencedora_B01 = area_km_B01 >= area_km_C04;
    PIB_vencedor_B01 = PIB_B01 >= PIB_C04;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_C04;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_C04;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_C04;

    // Comparação estado B01 com D01
    populacao_vencedora_B01 = populacao_B01 >= populacao_D01;
    area_vencedora_B01 = area_km_B01 >= area_km_D01;
    PIB_vencedor_B01 = PIB_B01 >= PIB_D01;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_D01;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_D01;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_D01;

    // Comparação estado B01 com D02
    populacao_vencedora_B01 = populacao_B01 >= populacao_D02;
    area_vencedora_B01 = area_km_B01 >= area_km_D02;
    PIB_vencedor_B01 = PIB_B01 >= PIB_D02;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_D02;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_D02;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_D02;

    // Comparação estado B01 com D03
    populacao_vencedora_B01 = populacao_B01 >= populacao_D03;
    area_vencedora_B01 = area_km_B01 >= area_km_D03;
    PIB_vencedor_B01 = PIB_B01 >= PIB_D03;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_D03;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_D03;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_D03;

    // Comparação estado B01 com D04
    populacao_vencedora_B01 = populacao_B01 >= populacao_D04;
    area_vencedora_B01 = area_km_B01 >= area_km_D04;
    PIB_vencedor_B01 = PIB_B01 >= PIB_D04;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_D04;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_D04;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_D04;

    // Comparação estado B01 com E01
    populacao_vencedora_B01 = populacao_B01 >= populacao_E01;
    area_vencedora_B01 = area_km_B01 >= area_km_E01;
    PIB_vencedor_B01 = PIB_B01 >= PIB_E01;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_E01;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_E01;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_E01;

    // Comparação estado B01 com E02
    populacao_vencedora_B01 = populacao_B01 >= populacao_E02;
    area_vencedora_B01 = area_km_B01 >= area_km_E02;
    PIB_vencedor_B01 = PIB_B01 >= PIB_E02;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_E02;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_E02;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_E02;

    // Comparação estado B01 com E03
    populacao_vencedora_B01 = populacao_B01 >= populacao_E03;
    area_vencedora_B01 = area_km_B01 >= area_km_E03;
    PIB_vencedor_B01 = PIB_B01 >= PIB_E03;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_E03;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_E03;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_E03;

    // Comparação estado B01 com E04
    populacao_vencedora_B01 = populacao_B01 >= populacao_E04;
    area_vencedora_B01 = area_km_B01 >= area_km_E04;
    PIB_vencedor_B01 = PIB_B01 >= PIB_E04;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_E04;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_E04;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_E04;

    // Comparação estado B01 com F01
    populacao_vencedora_B01 = populacao_B01 >= populacao_F01;
    area_vencedora_B01 = area_km_B01 >= area_km_F01;
    PIB_vencedor_B01 = PIB_B01 >= PIB_F01;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_F01;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_F01;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_F01;

    // Comparação estado B01 com F02
    populacao_vencedora_B01 = populacao_B01 >= populacao_F02;
    area_vencedora_B01 = area_km_B01 >= area_km_F02;
    PIB_vencedor_B01 = PIB_B01 >= PIB_F02;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_F02;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_F02;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_F02;

    // Comparação estado B01 com F03
    populacao_vencedora_B01 = populacao_B01 >= populacao_F03;
    area_vencedora_B01 = area_km_B01 >= area_km_F03;
    PIB_vencedor_B01 = PIB_B01 >= PIB_F03;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_F03;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_F03;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_F03;

    // Comparação estado B01 com F04
    populacao_vencedora_B01 = populacao_B01 >= populacao_F04;
    area_vencedora_B01 = area_km_B01 >= area_km_F04;
    PIB_vencedor_B01 = PIB_B01 >= PIB_F04;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_F04;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_F04;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_F04;

    // Comparação estado B01 com G01
    populacao_vencedora_B01 = populacao_B01 >= populacao_G01;
    area_vencedora_B01 = area_km_B01 >= area_km_G01;
    PIB_vencedor_B01 = PIB_B01 >= PIB_G01;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_G01;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_G01;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_G01;

    // Comparação estado B01 com G02
    populacao_vencedora_B01 = populacao_B01 >= populacao_G02;
    area_vencedora_B01 = area_km_B01 >= area_km_G02;
    PIB_vencedor_B01 = PIB_B01 >= PIB_G02;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_G02;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_G02;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_G02;

    // Comparação estado B01 com G03
    populacao_vencedora_B01 = populacao_B01 >= populacao_G03;
    area_vencedora_B01 = area_km_B01 >= area_km_G03;
    PIB_vencedor_B01 = PIB_B01 >= PIB_G03;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_G03;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_G03;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_G03;

    // Comparação estado B01 com G04
    populacao_vencedora_B01 = populacao_B01 >= populacao_G04;
    area_vencedora_B01 = area_km_B01 >= area_km_G04;
    PIB_vencedor_B01 = PIB_B01 >= PIB_G04;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_G04;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_G04;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_G04;

    // Comparação estado B01 com H01
    populacao_vencedora_B01 = populacao_B01 >= populacao_H01;
    area_vencedora_B01 = area_km_B01 >= area_km_H01;
    PIB_vencedor_B01 = PIB_B01 >= PIB_H01;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_H01;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_H01;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_H01;

    // Comparação estado B01 com H02
    populacao_vencedora_B01 = populacao_B01 >= populacao_H02;
    area_vencedora_B01 = area_km_B01 >= area_km_H02;
    PIB_vencedor_B01 = PIB_B01 >= PIB_H02;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_H02;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_H02;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_H02;

    // Comparação estado B01 com H03
    populacao_vencedora_B01 = populacao_B01 >= populacao_H03;
    area_vencedora_B01 = area_km_B01 >= area_km_H03;
    PIB_vencedor_B01 = PIB_B01 >= PIB_H03;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_H03;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_H03;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_H03;

    // Comparação estado B01 com H04
    populacao_vencedora_B01 = populacao_B01 >= populacao_H04;
    area_vencedora_B01 = area_km_B01 >= area_km_H04;
    PIB_vencedor_B01 = PIB_B01 >= PIB_H04;
    ponto_turistico_vencedor_B01 = pontos_turisticos_B01 >= pontos_turisticos_H04;
    densidade_vencedora_B01 = densidade_pp_B01 >= densidade_pp_H04;
    PIB_capita_vencedor_B01 = PIB_capita_B01 >= PIB_capita_H04;

    return 0;
}
