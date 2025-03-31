#include <stdio.h>

int main(){
    char Estado[20], Estado2 [20];
    char Cod_carta[2], Cod_carta2[2];
    char Cidade [10], Cidade2[10];
    unsigned long int Populacao, Populacao2;
    float Area1, Area2;
    float PIB, PIB2;
    int Numero_pontoTuristicos, Numero_pontoTuristicos2;
    float DensidadePopulacional, DensidadePopulacional2;
    float PibPerCapita, PibPerCapita2, SuperPoder, SuperPoder2;
    

    printf("Carta 1\n"); // aponta o número da carta
    
    printf("Digite um Estado: \n"); //Requisita que seja escolhido um estado
    scanf(" %s", &Estado);
    printf("Estado: %s\n", Estado);
   
    printf("Inserir um Código  para a carta de 01-02:\n"); //inserir um codigo de carta podendo ser A01-A02, B01-B02 etc.
    scanf("%s", &Cod_carta);
    printf("Código da carta: %s\n", Cod_carta);    
    
    printf("Digite o nome da cidade:\n "); // Pede para informar uma cidade
    scanf("%s", &Cidade);
    printf("Nome da Cidade: %s \n", Cidade);

    printf("Digite a população da cidade: \n"); //Pede a inserção da população da cidade escolhida até 32767 (int)
    scanf("%u", &Populacao);
    printf("A População da cidade é: %u milhões de habitantes\n", Populacao);
    
    printf("Digite a área total da cidade:\n "); // Pede a area total da cidade escolhida
    scanf("%f", &Area1);
    printf("Área total da cidade é: %.4f km2\n", Area1);

    printf("Digite o PIB da cidade:\n "); // Pede a informação do PID da cidade escolhida
    scanf("%f", &PIB);
    printf("O PIB da cidade é: %.4f\n", PIB);

    printf("Digite o número de pontos turísticos da cidade:\n "); // pede informação de numero existente de potos turisticos
    scanf("%d", &Numero_pontoTuristicos);
    printf("A cidade tem %d pontos turísticos\n\n", Numero_pontoTuristicos);

    DensidadePopulacional = (float)(Populacao/Area1);
    
    printf  ("A Densidade Populacional é %.2f hab/Km2\n", DensidadePopulacional);

    PibPerCapita = (float) (PIB / Populacao);
    printf  ("PIB per Capita é de %.2f reais \n", PibPerCapita);

    SuperPoder = (float) (Populacao, Area1, PIB, Numero_pontoTuristicos, PibPerCapita, (DensidadePopulacional/1));
    printf("O Super Poder da Carta 1 é: %f\n", SuperPoder);


    //carta2
    printf("Carta 2\n"); // aponta o número da nova carta
    
    printf("Digite um Segundo Estado: \n"); //Requisita que seja escolhio um estado
    scanf(" %s", &Estado2);
    printf("Estado: %c\n", Estado2);
    
    printf("Inserir um Código  para a carta de 01-02:\n"); //inserir um codigo de carta podendo ser A01-A02, B01-B02 etc.
    scanf("%s", &Cod_carta2);
    printf("Código da carta: %s\n", Cod_carta2);  
    
    printf("Digite o nome de outra cidade:\n "); // Pede para informar uma cidade
    scanf("%s", &Cidade2);
    printf("Nome da Cidade: %s \n", Cidade2);

    printf("Digite a população da cidade: \n"); //Pede a inserção da população da cidade escolhida até 32767 (int)
    scanf("%u", &Populacao2);
    printf("A População da cidade é: %u milhões de habitantes\n", Populacao2);
    
    printf("Digite a área total da cidade:\n "); // Pede a area total da cidade escolhida
    scanf("%f", &Area2);
    printf("Área total da cidade é: %.4f km2\n", Area2);

    printf("Digite o PIB da cidade:\n "); // Pede a informação do PID da cidade escolhida
    scanf("%f", &PIB2);
    printf("O PIB da cidade é: %.4f\n", PIB2);

    printf("Digite o número de pontos turísticos da cidade:\n "); // pede informação de numero existente de potos turisticos
    scanf("%d", &Numero_pontoTuristicos2);
    printf("A cidade tem %d pontos turísticos\n", Numero_pontoTuristicos2);

    DensidadePopulacional2 = (float) (Populacao2/Area2);
    
    printf  ("A Densidade Populacional é %.2f hab/Km2\n", DensidadePopulacional2);

    PibPerCapita2 = (float) (PIB2 / Populacao2);
    printf  ("PIB per Capita é de %.2f reais\n ", PibPerCapita2);

    /* calcule o SP somando todos os atributos numérico (população, área, PIB, numero pontos turísticos,
    PIB per capita e o inverso da densidade populacional - quanto menor a desindade, maior o "poder"), 
    ARMAZE como float*/

   SuperPoder2 = (float) (Populacao2, Area2, PIB2, Numero_pontoTuristicos2, PibPerCapita2, (DensidadePopulacional2/1));
   printf("O Super Poder da Carta 2 é: %f\n", SuperPoder2);

    printf("===================================================\n");
    printf("*****Super Trunfo*****\n");
    printf("Carta escolhida\n");
    printf("Carta 1\n");
    printf("Estado:%s\n", Estado);
    printf("Código:%s\n", Cod_carta);
    printf("Nome da cidade: %s \n", Cidade);
    printf("População: %u\n", Populacao);
    printf("Área: %f km2\n", Area1);
    printf("PIB, %f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Numero_pontoTuristicos);
    printf("A densidade Populacional da cidade e: %.2f hab/km2\n", DensidadePopulacional);
    printf("PIP per Capita: %.2f reais\n", PibPerCapita );
    printf("Super Poder:%.2f\n", SuperPoder);

    printf("===================================================\n");
    printf("*****Super Trunfo*****\n");
    printf("Carta escolhida\n");
    printf("Carta 2\n");
    printf("Estado: %s \n", Estado2);
    printf("Código:%s\n", Cod_carta2);
    printf("Nome da cidade: %s \n", Cidade2);
    printf("População: %u\n", Populacao2);
    printf("Área: %f km2\n", Area2);
    printf("PIB, %f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Numero_pontoTuristicos2);
    printf("A densidade Populacional da cidade e: %.2f hab/km2\n", DensidadePopulacional2);
    printf("PIP per Capita: %.2f reais\n", PibPerCapita2 );
    printf("Super Poder:%.2f\n", SuperPoder2);

    //coparadores 
   //Escolhida o Atributo População para efetuar a comparação

   printf("\n#############Comparadores#############\n");
   
    printf("Carta 1- %s (%s): (%u)\n", Cidade, Estado, Populacao);
    printf("Carta 2 - %s (%s): (%u)\n", Cidade2, Estado2, Populacao2);
    if (Populacao > Populacao2){
        printf("Resultado: Carta %s Venceu!: %u\n", Cidade, Populacao);
    }else{
        printf("Resultado Carta 2 %s Venceu!\n", Cidade2);
    }   
   
    return 0;


}