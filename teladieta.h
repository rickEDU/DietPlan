#include "teladieta.c"

char teladieta(void);
;
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

void pesquisarDieta(void);
Refeicao* buscarDieta(char*);
void exibirDieta(Refeicao*);
Alimento* buscarAlimento(int*);
void exibirAL1(Alimento*);
void exibirAL2(Alimento*);
void atualizarDieta(void);
void regravarDieta(Refeicao*);
void excluirDieta(void);