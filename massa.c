#include <stdio.h>

// Função para converter quilogramas para gramas
float kg_para_gramas(float kg) {
    return kg * 1000;
}

// Função para converter quilogramas para toneladas
float kg_para_toneladas(float kg) {
    return kg / 1000;
}

// Função para converter gramas para quilogramas
float gramas_para_kg(float gramas) {
    return gramas / 1000;
}

// Função para converter toneladas para quilogramas
float toneladas_para_kg(float toneladas) {
    return toneladas * 1000;
}

// Função para exibir as conversões possíveis
void exibir_conversoes(float valor, char unidade) {
    switch (unidade) {
        case 'k': // Quilogramas
            printf("%.2f kg equivale a %.2f gramas.\n", valor, kg_para_gramas(valor));
            printf("%.2f kg equivale a %.6f toneladas.\n", valor, kg_para_toneladas(valor));
            break;
        case 'g': // Gramas
            printf("%.2f gramas equivale a %.6f quilogramas.\n", valor, gramas_para_kg(valor));
            break;
        case 't': // Toneladas
            printf("%.2f toneladas equivale a %.2f quilogramas.\n", valor, toneladas_para_kg(valor));
            break;
        default:
            printf("Unidade inválida. Use 'k' para quilogramas, 'g' para gramas ou 't' para toneladas.\n");
    }
}
