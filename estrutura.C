#include <stdio.h>

int main(void) {

    int opcao;
    int idade;
    int fcm;
    int fc_repouso;

    do {
        printf("\n==== CALCULADORA DE FREQUENCIA CARDIACA ====\n");
        printf("1 - Calcular Frequencia Cardiaca Maxima\n");
        printf("2 - Calcular Zonas (Metodo Karvonen)\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            printf("\nInforme sua idade: ");
            scanf("%d", &idade);

            if (idade <= 0 || idade > 120) {
                printf("Idade invalida!\n");
            } else {
                fcm = 220 - idade;
                printf("Frequencia Cardiaca Maxima: %d bpm\n", fcm);
            }

        } 
        else if (opcao == 2) {

            printf("\nInforme sua idade: ");
            scanf("%d", &idade);

            printf("Informe sua frequencia cardiaca de repouso: ");
            scanf("%d", &fc_repouso);

            if (idade <= 0 || idade > 120 || fc_repouso <= 0) {
                printf("Dados invalidos!\n");
            } else {
                fcm = 220 - idade;

                int reserva = fcm - fc_repouso;

                printf("\nZonas de Treino (Metodo Karvonen):\n");

                printf("Leve (50%% - 60%%): %d - %d bpm\n",
                       (int)(reserva * 0.50 + fc_repouso),
                       (int)(reserva * 0.60 + fc_repouso));

                printf("Moderada (60%% - 70%%): %d - %d bpm\n",
                       (int)(reserva * 0.60 + fc_repouso),
                       (int)(reserva * 0.70 + fc_repouso));

                printf("Aerobica (70%% - 80%%): %d - %d bpm\n",
                       (int)(reserva * 0.70 + fc_repouso),
                       (int)(reserva * 0.80 + fc_repouso));

                printf("Anaerobica (80%% - 90%%): %d - %d bpm\n",
                       (int)(reserva * 0.80 + fc_repouso),
                       (int)(reserva * 0.90 + fc_repouso));

                printf("Maxima (90%% - 100%%): %d - %d bpm\n",
                       (int)(reserva * 0.90 + fc_repouso),
                       (int)(reserva * 1.00 + fc_repouso));
            }

        } 
        else if (opcao == 3) {
            printf("\nEncerrando o programa...\n");
        } 
        else {
            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 3);

    return 0;
}
