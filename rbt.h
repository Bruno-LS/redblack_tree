typedef struct TNoRB {
    int chave;
    int cor;
    struct TNoRB *pai;
    struct TNoRB *esq;
    struct TNoRB *dir;
} TNoRB;

void insereNo(TNoRB **arvore, TNoRB *pPai, TNoRB **pMain, int k);//é usada para inserir um nó em uma árvore Red-Black (RB) 

TNoRB *avo(TNoRB *arvore);// Procura o avo de um determinado nó

TNoRB *tio(TNoRB *arvore);//encontrar o tio de um nó

void rotacaoDireita(TNoRB **no);// rotaciona à direita a subarvore

void rotacaoEsquerda(TNoRB **no);//rotaciona à esquerda a subarvore

void consertaRB(TNoRB **arvore, TNoRB **pMain);

void inOrder(TNoRB *raiz);// realiza uma travessia in-order (em ordem) em uma árvore rubro-negra e imprime detalhes sobre cada nó.

void dRotacaoDireita(TNoRB **no);//realiza a rotação direita dupla, que é a rotação esquerda e depois direita 

void dRotacaoEsquerda(TNoRB **no);//realiza a rotação esquerda dupla, que é a rotação direita e depois esquerda 

void removeNo(TNoRB **arvore, int k);//função responsavel pela remoção

void nBlackIBlackFRed(TNoRB *aRemover, TNoRB **arvore);

void nBlackIBlackFBlack(TNoRB *aRemover, TNoRB **arvore);

void nBlackIRed(TNoRB *aRemover, TNoRB **arvore);

TNoRB *buscaNo(TNoRB *arvore, int k);//busca o nó

TNoRB *irmao(TNoRB *pai, TNoRB *noAtual);// busca e retorna o irmão de um "nó noAtual" em relação ao seu pai pai em uma árvore

int filhoEsquerdo(TNoRB *arvore);//determina se um nó específico é o filho esquerdo ou direito de seu pai em uma árvore

TNoRB **maiorEsq(TNoRB **pMaiorEsq);//encontrar o nó com o maior valor na subárvore esquerda de um nó dado em uma árvore 
