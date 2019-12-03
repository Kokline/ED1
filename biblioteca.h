#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

#define RANDOM rand() % 1000
#define MAX 2

struct cliente {
	char nome [50];
	char codigo[100];
	char dataNascimento[10];
	float limite;
	char tipoDeCartao;
	int dependentes;
	struct cliente *proximo;
};

struct dependente{
    char nome[50];
    char codigo[100];
    char dataNascimento[10];
    char tipoDep;
    struct dependente *anterior;
	struct dependente *proximo;
};

typedef struct cliente cliente;
typedef struct dependente dependente;

void menu();
void cadastrarNome(char *nome);
bool validaNome (char *nome);
char* cadastrarNascimentoCliente();
char* cadastrarNascimentoDependente();
bool ehValidaData(char *dataDeAniversario, bool x);
int idadeStringToInteger(char *dataNascimento);
void cadastrarLimite(float *limite, int idade);
char cadastrarTipo();
void cadastrarTipoDependente(char *tipoDependente);

cliente* inserirSimplismenteEncPeloFimCliente(cliente *lista);
dependente* inserirDuplamenteEncPeloInicioDependente(dependente* lista);
dependente* excluirDependente(dependente *lista, char *codigo);
cliente* excluirCliente(cliente* lista, char *codigo);
int tamanhoRand(int x);
char gerarCodigoCliente(char *nome);
char* gerarCodigoDependente(char *codigoCliente);

#endif
