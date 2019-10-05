#include <iostream>
#include <string>
#include "arquivo.h"
#include "interacao.h"

using namespace std;

Arquivo arvore;
Arquivo livros;


void inicializarArquivos(string liv, string arv){
    arvore = Arquivo(arv,arv);
    livros = Arquivo(liv,liv);

    arvore.escreverArquivoArvoreVazio();
    livros.escreverArquivoLivrosVazio();
}

int main(){
    inicializarArquivos("livros.bin","arvore.bin");
    return 0;
}