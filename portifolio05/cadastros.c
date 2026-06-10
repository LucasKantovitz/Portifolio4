#include <stdio.h>
#include "cadastros.h"

int cadastrarAluno(struct Alunos alunos[], int *qtd)
{
    if (*qtd >= MAX)
    {
        printf("Limite atingido!\n");
        return 0;
    }

    printf("Codigo do aluno: ");
    scanf("%d", &alunos[*qtd].codigoAluno);
    printf("Nome do aluno: ");
    scanf(" %[^\n]", alunos[*qtd].nomeAluno);
    printf("Idade: ");
    scanf("%d", &alunos[*qtd].idade);
    printf("Turma: ");
    scanf(" %[^\n]", alunos[*qtd].turma);

    (*qtd)++;
    return 1;
}

int listarAlunos(struct Alunos alunos[], int qtd)
{
    if (qtd == 0)
    {
        printf("Nenhum aluno cadastrado.\n");
        return 0;
    }

    for (int i = 0; i < qtd; i++)
    {
        printf("\nAluno %d\n", i + 1);
        printf("Codigo: %d\n", alunos[i].codigoAluno);
        printf("Nome: %s\n", alunos[i].nomeAluno);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Turma: %s\n", alunos[i].turma);
    }
    return 1;
}

int cadastrarProfessor(struct Professores professores[], int *qtd)
{
    if (*qtd >= MAX)
    {
        printf("Limite atingido!\n");
        return 0;
    }

    printf("Codigo do professor: ");
    scanf("%d", &professores[*qtd].codigoProfessor);
    printf("Nome do professor: ");
    scanf(" %[^\n]", professores[*qtd].nomeProfessor);
    printf("Disciplina: ");
    scanf(" %[^\n]", professores[*qtd].disciplina);
    printf("Telefone: ");
    scanf(" %[^\n]", professores[*qtd].telefone);

    (*qtd)++;
    return 1;
}

int listarProfessores(struct Professores professores[], int qtd)
{
    if (qtd == 0)
    {
        printf("Nenhum professor cadastrado.\n");
        return 0;
    }

    for (int i = 0; i < qtd; i++)
    {
        printf("\nProfessor %d\n", i + 1);
        printf("Codigo: %d\n", professores[i].codigoProfessor);
        printf("Nome: %s\n", professores[i].nomeProfessor);
        printf("Disciplina: %s\n", professores[i].disciplina);
        printf("Telefone: %s\n", professores[i].telefone);
    }
    return 1;
}

int cadastrarTurma(struct Turmas turmas[], int *qtd)
{
    if (*qtd >= MAX)
    {
        printf("Limite atingido!\n");
        return 0;
    }

    printf("Codigo da turma: ");
    scanf("%d", &turmas[*qtd].codigoTurma);
    printf("Nome da turma: ");
    scanf(" %[^\n]", turmas[*qtd].nomeTurma);
    printf("Periodo: ");
    scanf(" %[^\n]", turmas[*qtd].periodo);
    printf("Sala: ");
    scanf(" %[^\n]", turmas[*qtd].sala);

    (*qtd)++;
    return 1;
}

int listarTurmas(struct Turmas turmas[], int qtd)
{
    if (qtd == 0)
    {
        printf("Nenhuma turma cadastrada.\n");
        return 0;
    }

    for (int i = 0; i < qtd; i++)
    {
        printf("\nTurma %d\n", i + 1);
        printf("Codigo: %d\n", turmas[i].codigoTurma);
        printf("Nome: %s\n", turmas[i].nomeTurma);
        printf("Periodo: %s\n", turmas[i].periodo);
        printf("Sala: %s\n", turmas[i].sala);
    }
    return 1;
}

int cadastrarDisciplina(struct Disciplinas disciplinas[], int *qtd)
{
    if (*qtd >= MAX)
    {
        printf("Limite atingido!\n");
        return 0;
    }

    printf("Codigo da disciplina: ");
    scanf("%d", &disciplinas[*qtd].codigoDisciplina);
    printf("Nome da disciplina: ");
    scanf(" %[^\n]", disciplinas[*qtd].nomeDisciplina);
    printf("Carga horaria: ");
    scanf("%f", &disciplinas[*qtd].cargaHoraria);
    printf("Professor responsavel: ");
    scanf(" %[^\n]", disciplinas[*qtd].professorResponsavel);

    (*qtd)++;
    return 1;
}

int listarDisciplinas(struct Disciplinas disciplinas[], int qtd)
{
    if (qtd == 0)
    {
        printf("Nenhuma disciplina cadastrada.\n");
        return 0;
    }

    for (int i = 0; i < qtd; i++)
    {
        printf("\nDisciplina %d\n", i + 1);
        printf("Codigo: %d\n", disciplinas[i].codigoDisciplina);
        printf("Nome: %s\n", disciplinas[i].nomeDisciplina);
        printf("Carga horaria: %.1f h\n", disciplinas[i].cargaHoraria);
        printf("Professor: %s\n", disciplinas[i].professorResponsavel);
    }
    return 1;
}

int cadastrarCurso(struct Cursos cursos[], int *qtd)
{
    if (*qtd >= MAX)
    {
        printf("Limite atingido!\n");
        return 0;
    }

    printf("Codigo do curso: ");
    scanf("%d", &cursos[*qtd].codigoCurso);
    printf("Nome do curso: ");
    scanf(" %[^\n]", cursos[*qtd].nomeCurso);
    printf("Duracao (em anos): ");
    scanf("%f", &cursos[*qtd].duracao);
    printf("Turno: ");
    scanf(" %[^\n]", cursos[*qtd].turno);

    (*qtd)++;
    return 1;
}

int listarCursos(struct Cursos cursos[], int qtd)
{
    if (qtd == 0)
    {
        printf("Nenhum curso cadastrado.\n");
        return 0;
    }

    for (int i = 0; i < qtd; i++)
    {
        printf("\nCurso %d\n", i + 1);
        printf("Codigo: %d\n", cursos[i].codigoCurso);
        printf("Nome: %s\n", cursos[i].nomeCurso);
        printf("Duracao: %.1f anos\n", cursos[i].duracao);
        printf("Turno: %s\n", cursos[i].turno);
    }
    return 1;
}

int cadastrarFuncionario(struct Funcionarios funcionarios[], int *qtd)
{
    if (*qtd >= MAX)
    {
        printf("Limite atingido!\n");
        return 0;
    }

    printf("Codigo do funcionario: ");
    scanf("%d", &funcionarios[*qtd].codigoFuncionario);
    printf("Nome do funcionario: ");
    scanf(" %[^\n]", funcionarios[*qtd].nomeFuncionario);
    printf("Cargo: ");
    scanf(" %[^\n]", funcionarios[*qtd].cargo);
    printf("Telefone: ");
    scanf(" %[^\n]", funcionarios[*qtd].telefone);

    (*qtd)++;
    return 1;
}

int listarFuncionarios(struct Funcionarios funcionarios[], int qtd)
{
    if (qtd == 0)
    {
        printf("Nenhum funcionario cadastrado.\n");
        return 0;
    }

    for (int i = 0; i < qtd; i++)
    {
        printf("\nFuncionario %d\n", i + 1);
        printf("Codigo: %d\n", funcionarios[i].codigoFuncionario);
        printf("Nome: %s\n", funcionarios[i].nomeFuncionario);
        printf("Cargo: %s\n", funcionarios[i].cargo);
        printf("Telefone: %s\n", funcionarios[i].telefone);
    }
    return 1;
}