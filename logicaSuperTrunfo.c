#include <stdio.h>

typedef struct {
    char estado[30];
    int codigo;
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

void exibirCarta(Carta carta) {
    printf("\n📍 Cidade: %s (%s)\n", carta.nome, carta.estado);
    printf("Código: %d\n", carta.codigo);
    printf("População: %d habitantes\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2f bilhões\n", carta.pib);
    printf("Pontos turísticos: %d\n", carta.pontos_turisticos);
}

void compararCartas(Carta c1, Carta c2) {
    int escolha;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        if (c1.populacao > c2.populacao)
            printf("\n%s vence com maior população!\n", c1.nome);
        else if (c1.populacao < c2.populacao)
            printf("\n%s vence com maior população!\n", c2.nome);
        else
            printf("\nEmpate em população!\n");
    } else if (escolha == 2) {
        if (c1.area > c2.area)
            printf("\n%s vence com maior área!\n", c1.nome);
        else if (c1.area < c2.area)
            printf("\n%s vence com maior área!\n", c2.nome);
        else
            printf("\nEmpate em área!\n");
    } else if (escolha == 3) {
        if (c1.pib > c2.pib)
            printf("\n%s vence com maior PIB!\n", c1.nome);
        else if (c1.pib < c2.pib)
            printf("\n%s vence com maior PIB!\n", c2.nome);
        else
            printf("\nEmpate em PIB!\n");
    } else if (escolha == 4) {
        if (c1.pontos_turisticos > c2.pontos_turisticos)
            printf("\n%s vence com mais pontos turísticos!\n", c1.nome);
        else if (c1.pontos_turisticos < c2.pontos_turisticos)
            printf("\n%s vence com mais pontos turísticos!\n", c2.nome);
        else
            printf("\nEmpate em pontos turísticos!\n");
    } else {
        printf("\nOpção inválida.\n");
    }
}

int main() {
    Carta carta1 = {
        "RJ", 1, "Rio de Janeiro", 6700000, 1200.0, 400.0, 15
    };

    Carta carta2 = {
        "SP", 2, "São Paulo", 12300000, 1500.0, 700.0, 20
    };

    printf("\n--- Cartas cadastradas ---\n");
    exibirCarta(carta1);
    exibirCarta(carta2);

    compararCartas(carta1, carta2);

    return 0;
}