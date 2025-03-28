#include <stdio.h>

int main(){
    char Estado[20], Estado2 [20];
    char Cod_carta[2], Cod_carta2[2];
    char Cidade [10], Cidade2[10];
    int Populacao, Populacao2;
    float Area1, Area2;
    float PIB, PIB2;
    int Numero_pontoTuristicos, Numero_pontoTuristicos2;
    float DensidadePopulacional;
    float PibPerCapita;
    

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
    scanf("%d", &Populacao);
    printf("A População da cidade é: %d milhões de habitantes\n", Populacao);
    
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
    scanf("%d", &Populacao2);
    printf("A População da cidade é: %d milhões de habitantes\n", Populacao2);
    
    printf("Digite a área total da cidade:\n "); // Pede a area total da cidade escolhida
    scanf("%f", &Area2);
    printf("Área total da cidade é: %.4f km2\n", Area2);

    printf("Digite o PIB da cidade:\n "); // Pede a informação do PID da cidade escolhida
    scanf("%f", &PIB2);
    printf("O PIB da cidade é: %.4f\n", PIB2);

    printf("Digite o número de pontos turísticos da cidade:\n "); // pede informação de numero existente de potos turisticos
    scanf("%d", &Numero_pontoTuristicos2);
    printf("A cidade tem %d pontos turísticos\n", Numero_pontoTuristicos2);

    DensidadePopulacional = (float) (Populacao2/Area2);
    
    printf  ("A Densidade Populacional é %.2f hab/Km2\n", DensidadePopulacional);

    PibPerCapita = (float) (PIB2 / Populacao2);
    printf  ("PIB per Capita é de %.2f reais\n ", PibPerCapita);


    printf("===================================================\n");
    printf("*****Super Trunfo*****\n");
    printf("Carta escolhida\n");
    printf("Carta 1\n");
    printf("Estado:%s\n", Estado);
    printf("Código:%s\n", Cod_carta);
    printf("Nome da cidade: %s \n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %f km2\n", Area1);
    printf("PIB, %f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Numero_pontoTuristicos);
    printf("A densidade Populacional da cidade e: %.2f hab/km2\n", DensidadePopulacional);
    printf("PIP per Capita: %.2f reais\n", PibPerCapita );

    printf("===================================================\n");
    printf("*****Super Trunfo*****\n");
    printf("Carta escolhida\n");
    printf("Carta 2\n");
    printf("Estado: %s \n", Estado2);
    printf("Código:%s\n", Cod_carta2);
    printf("Nome da cidade: %s \n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km2\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Numero_pontoTuristicos2);
    printf("A densidade Populacional da cidade e: %.2f hab/km2\n", DensidadePopulacional);
    printf("PIP per Capita: %.2f reais", PibPerCapita );
   
    return 0;


}