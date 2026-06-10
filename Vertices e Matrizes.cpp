#include <stdio.h>

    int main() {
  
        int index;

            char * CodAlunos [3][3] = {

                    {"aluno 0", "Pt: 30", "Mt: 90"},
                    {"aluno 1", "Pt: 60", "Mt: 60"},
                    {"aluno 2", "Pt: 90", "Mt: 30"}
            };
        
            printf("Ditite o numero do aluno que queira ver as notas. \n");
                printf("Aluno 0, digite 0 \n");
                printf("Aluno 1, digite 1 \n");
                printf("Aluno 2, digite 2 \n");
            
            scanf("%d", &index);

            printf("As notas do %s são: %s, %s \n", CodAlunos[index][0], CodAlunos[index][1], CodAlunos[index][2]);

        return 0;
        
    }