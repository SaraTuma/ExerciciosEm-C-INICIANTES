#include <stdio.h>


int main() {
    float nota1 = 0.0, nota2 = 0.0, media = 0.0, mediaGeralTurma = 0.0;
    float maiorMedia = -1.0;
    int contadorAluno = 0, flagRodarPrograma = 1, idAlunoMelhorMedia = 0;

    while (flagRodarPrograma) {
        printf("\nAluno %d\n", contadorAluno + 1);
        printf("\nNota 1: ");
        scanf("%f", &nota1);

        if (nota1 == 50) {
            flagRodarPrograma = 0;
            continue;
        } else {
            while (nota1 < 0 || nota1 > 10) {
                printf("\nInseriu uma nota errada, intervalo de notas [0 ... 10]");
                printf("\nNota 1: ");
                scanf("%f", &nota1);
            }

            printf("\nNota 2: ");
            scanf("%f", &nota2);

            while (nota2 < 0 || nota2 > 10) {
                printf("\nInseriu uma nota errada, intervalo de notas [0 ... 10]");
                printf("\nNota 2: ");
                scanf("%f", &nota2);
            }

            media = (nota1 + nota2) / 2;
            mediaGeralTurma += media;

            if (media > maiorMedia) {
                idAlunoMelhorMedia = contadorAluno + 1;
                maiorMedia = media;
            }

            printf("\nAluno %d\nNota 1: %.2f vals\nNota 2: %.2f vals\nMédia: %.2f\n", (contadorAluno + 1), nota1, nota2, media);
        }
        contadorAluno += 1;
    }
    mediaGeralTurma = mediaGeralTurma / (contadorAluno + 1);
    printf("\nQuant alunos processados: %d", contadorAluno);
    printf("\nMédia Geral Turma: %.2f", mediaGeralTurma);
    printf("\nMaior Média: %.2f", maiorMedia);
    printf("\nID Aluno com melhor média: %d\n", idAlunoMelhorMedia);
    return 0;
}