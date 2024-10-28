#include <stdio.h>

struct aluno {
    float nota1;
    float nota2;
    float nota3;
    float media;
};

float mediaAluno(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3; 
}

int main() {
    struct aluno aluno1, aluno2, aluno3; 

    
    aluno1.nota1 = 10;
    aluno1.nota2 = 4;
    aluno1.nota3 = 6;
    aluno1.media = mediaAluno(aluno1.nota1, aluno1.nota2, aluno1.nota3);

    
    aluno2.nota1 = 10;
    aluno2.nota2 = 4;
    aluno2.nota3 = 6;
    aluno2.media = mediaAluno(aluno2.nota1, aluno2.nota2, aluno2.nota3);

    
    aluno3.nota1 = 10;
    aluno3.nota2 = 4;
    aluno3.nota3 = 6;
    aluno3.media = mediaAluno(aluno3.nota1, aluno3.nota2, aluno3.nota3);

    
    printf("Nota 1: %f\n", aluno1.nota1); 
    printf("Nota 2: %f\n", aluno2.nota2); 
    printf("Nota 3: %f\n", aluno3.nota3); 
    printf("Média 1: %f\n", aluno1.media); 
    printf("Situação: %s\n", aluno1.media >= 7.0 ? "aprovado" : "reprovado");

    return 0;
}
