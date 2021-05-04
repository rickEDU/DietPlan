#include "telapacient.c"
//
//// TELAS DO PACIENTE.
//



char telapaciente(void);
void cdtPaciente(void);
void gravarPaciente(Paciente*);
Paciente* telapacientecadastro(void);
char* telapacientePesquisa(void);
char* telapacienteAtualiza(void);
char* telapacienteExclui(void);
void telapacienteErro(void);



void pesquisarPaciente(void);
Paciente* buscarPaciente(char*);
char buscarPacienteAG(char*);
void exibirPaciente(Paciente*);
void regravarPaciente(Paciente*);
void atualizarPaciente(void);
void excluirPaciente(void);
