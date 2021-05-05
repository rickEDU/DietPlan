
//
//// TELAS DO PACIENTE.
//


typedef struct paciente Paciente;

struct paciente{
  char cpf[12];
  char nome[51];
  char peso[7];
  char altura[5];
  char email[31];
  char tel[16];
  char nivel[6];
  int status;
};



char telapaciente(void);
void cdtPaciente(void);
void gravarPaciente(Paciente*);
Paciente* telapacienteCadastro(void);
char* telapacientePesquisa(void);
char* telapacienteAtualiza(void);
char* telapacienteExclui(void);
void telapacienteErro(void);



void pesquisarPaciente(void);
Paciente* buscarPaciente(char*);
int buscarPacienteAG(char*);
void exibirPaciente(Paciente*);
void regravarPaciente(Paciente*);
void atualizarPaciente(void);
void excluirPaciente(void);
