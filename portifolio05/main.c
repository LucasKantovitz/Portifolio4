#include <stdio.h>
#include "cadastros.h"

int main()
{
    struct Alunos alunos[MAX];
    struct Professores professores[MAX];
    struct Turmas turmas[MAX];
    struct Disciplinas disciplinas[MAX];
    struct Cursos cursos[MAX];
    struct Funcionarios funcionarios[MAX];

    int qtdAlunos = 0, qtdProfessores = 0, qtdTurmas = 0;
    int qtdDisciplinas = 0, qtdCursos = 0, qtdFuncionarios = 0;

    int opcao;

    do
    {
        printf("1  - Cadastrar aluno\n");
        printf("2  - Listar alunos\n");
        printf("3  - Cadastrar professor\n");
        printf("4  - Listar professores\n");
        printf("5  - Cadastrar turma\n");
        printf("6  - Listar turmas\n");
        printf("7  - Cadastrar disciplina\n");
        printf("8  - Listar disciplinas\n");
        printf("9  - Cadastrar curso\n");
        printf("10 - Listar cursos\n");
        printf("11 - Cadastrar funcionario\n");
        printf("12 - Listar funcionarios\n");
        printf("0  - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarAluno(alunos, &qtdAlunos);
            break;
        case 2:
            listarAlunos(alunos, qtdAlunos);
            break;
        case 3:
            cadastrarProfessor(professores, &qtdProfessores);
            break;
        case 4:
            listarProfessores(professores, qtdProfessores);
            break;
        case 5:
            cadastrarTurma(turmas, &qtdTurmas);
            break;
        case 6:
            listarTurmas(turmas, qtdTurmas);
            break;
        case 7:
            cadastrarDisciplina(disciplinas, &qtdDisciplinas);
            break;
        case 8:
            listarDisciplinas(disciplinas, qtdDisciplinas);
            break;
        case 9:
            cadastrarCurso(cursos, &qtdCursos);
            break;
        case 10:
            listarCursos(cursos, qtdCursos);
            break;
        case 11:
            cadastrarFuncionario(funcionarios, &qtdFuncionarios);
            break;
        case 12:
            listarFuncionarios(funcionarios, qtdFuncionarios);
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }

    } while (opcao != 0);

    return 0;
}