#include <iostream>
#include "fila.h"

using namespace std;

  fila::fila() //construtor
  {
    primeiro = 0;
    ultimo = 0;
    estrutura = new TipoItem[max_itens];
  }
  
  fila::~fila() //destrutor
  {
    delete [] estrutura;
  }

  bool fila::estaVazio ()
  {
    return (primeiro == ultimo);
  }

  bool fila::estaCheio()
  {
    return (ultimo-primeiro == max_itens);
  }

  void fila::inserir(TipoItem item)
  {
    if (estaCheio){
      cout << "A fila está cheia";
    } else {
      estrutura[ultimo % max_itens] =  item;
      ultimo ++;
    }
  }

  TipoItem  fila::remover()
  {
    if (estaVazio){
      cout << "A fila está vazia";
      return 0;
    } else{
      primeiro++;
      return estrutura[primeiro-1 % max_itens];
    }
  }

  void  fila::imprimir ()
  {
    cout << "fila: [";
    for (int i=primeiro ; i<ultimo ; i++){
      cout << estrutura[i % max_itens] << " ";
    }
    cout << "]\n";
  }
