#include <iostream>
#include "pilha.h"

using namespace std;

  pilha::pilha() //construtora (precisa ser o mesmo nome da classe)
  {
    tamanho = 0;
    estrutura = new TipoItem[max_itens];
  }

  pilha::~pilha() ///destrutora, com ~ na frente do nome da classe
  {
    delete [] estrutura;
  }

  bool pilha::estaCheia() //verifica se a pilha está cheia (retorna true ou false)
  {
    return(tamanho == max_itens);
  }

  bool pilha::estaVazia() //verifica se a pilha está vazia
  {
    return(tamanho == 0);
  }

  void pilha::inserir(TipoItem item) //insere (push)
  {
    if (estaCheia()){
      cout << "A pilha está cheia";    
      }else {
      estrutura[tamanho] = item;
      tamanho++;
    }
  }

  TipoItem pilha::remover() //remove (pop)
  {
    if(estaVazia()){
      cout<< "A pilha está vazia";
      return 0;
    } else {
      tamanho--;
      return estrutura[tamanho];
    }
  }

  void pilha::imprimir() //print
  {
    cout << "Pilha: [ ";
    for (int i=0; i<tamanho ; i++){
      cout << estrutura[i] << " ";
    }
    cout << "]\n";
  }

  int pilha::qualTamanho() //lenght
  {
    return tamanho;
  }
