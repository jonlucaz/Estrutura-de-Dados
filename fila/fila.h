// fila = queue
typedef int TipoItem;
const int max_itens = 100;

class fila
{
private:
  int primeiro, ultimo;
  TipoItem* estrutura;

public:
  fila(); //construtor
  ~fila(); //destrutor
  bool estaVazio ();
  bool estaCheio();
  void inserir(TipoItem item);
  TipoItem remover();
  void imprimir ();
};