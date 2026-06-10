#ifndef CADASTROS_H
#define CADASTROS_H

#define MAX 100

struct Alunos
{
    int codigoAluno;
    char nomeAluno[100];
    int idade;
    char turma[10];
};

struct Professores
{
    int codigoProfessor;
    char nomeProfessor[100];
    char disciplina[50];
    char telefone[30];
};

struct Turmas
{
    int codigoTurma;
    char nomeTurma[100];
    char periodo[10];
    char sala[5];
};

struct Disciplinas
{
    int codigoDisciplina;
    char nomeDisciplina[100];
    float cargaHoraria;
    char professorResponsavel[100];
};

struct Cursos
{
    int codigoCurso;
    char nomeCurso[100];
    float duracao;
    char turno[15];
};

struct Funcionarios
{
    int codigoFuncionario;
    char nomeFuncionario[100];
    char cargo[50];
    char telefone[30];
};

int cadastrarAluno(struct Alunos alunos[], int *qtd);
int listarAlunos(struct Alunos alunos[], int qtd);

int cadastrarProfessor(struct Professores professores[], int *qtd);
int listarProfessores(struct Professores professores[], int qtd);

int cadastrarTurma(struct Turmas turmas[], int *qtd);
int listarTurmas(struct Turmas turmas[], int qtd);

int cadastrarDisciplina(struct Disciplinas disciplinas[], int *qtd);
int listarDisciplinas(struct Disciplinas disciplinas[], int qtd);

int cadastrarCurso(struct Cursos cursos[], int *qtd);
int listarCursos(struct Cursos cursos[], int qtd);

int cadastrarFuncionario(struct Funcionarios funcionarios[], int *qtd);
int listarFuncionarios(struct Funcionarios funcionarios[], int qtd);

#endif