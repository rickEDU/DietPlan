typedef struct alimento Alimento;

struct alimento{
  char codAlimento[4];
  char nomeAlimento[20];
  char calorias[6];
  int status;
};


typedef struct refeicao Refeicao;

struct refeicao{
  char cpfDig[12];
  char cafe[4][4];
  char almoco[4][4];
  char jantar[4][4];
  int status;
};


char teladieta(void);

void cdtDieta(void);
void gravarDieta(Refeicao*);

Refeicao* teladietaCadastro(void);
char* teladietaPesquisa(void);
char* teladietaAtualiza(void);
char* teladietaExclui(void);
void teladietaErro(void);
char teladietaAgain(void);

Alimento* telaAcrescentaalimento(void);
void cdtAlimento(void);
void gravarAlimento(Alimento*);

void nomepacienteAtivo(char*);

void exibeAlimento(Refeicao*);
char buscarPacienteDNV(char*);
void pesquisarDieta(void);
Refeicao* buscarDieta(char*);
void exibirDieta(Refeicao*);
void buscarAlimento(char*);

void atualizarDieta(void);
void regravarDieta(Refeicao*);
void excluirDieta(void);


void listaAlimento(void);