 #include <stdio.h>

int main(){
    char estado1[3] = "A";
    char codigo1[5] = "RJ01";      
    char nomeCidade1[50] = "Rio de Janeiro";     
    int populacao1 = 6718903;         
    float area1 = 1182.3;         
    float pib1 = 407000.0;                  
    int pontosTuristicos1 = 50;       
    
    char estado2[3] = "B";
    char codigo2[5] = "SP01";    
    char nomeCidade2[50] = "São Paulo";    
    int populacao2 = 12330000;          
    float area2 = 1521.1;        
    float pib2 = 770000.0;                
    int pontosTuristicos2 = 30;
    
    printf("=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n\n", pontosTuristicos1);

    printf("=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Novo commit\n");
    return 0;

}
