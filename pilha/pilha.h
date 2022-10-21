typedef int TipoItem;
//todo elemento inteiro agora pode ser chamado de TipoItem
const int max_itens = 100;

class pilha{
  private:
  int tamanho;
  TipoItem* estrutura;

  public:
  pilha(); //construtora (precisa ser o mesmo nome da classe)
  ~pilha(); ///destrutora, com ~ na frente do nome da classe
  bool estaCheia(); //verifica se a pilha está cheia (retorna true ou false)
  bool estaVazia(); //verifica se a pilha está vazia
  void inserir(TipoItem item); //insere (push)
  TipoItem remover(); //remove (pop)
  void imprimir(); //print
  int qualTamanho(); //lenght

};

//private -> somente a classe pode acessar 
//public -> fora da classe pode acessar 



//parei na aula estrutura de dados aos 12 minutos