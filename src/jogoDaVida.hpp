#ifndef JOGODAVIDA_HPP
#define JOGODAVIDA_HPP
#include <iostream>
#include <vector>

using namespace std;

namespace modificado
{

    class MatrizOperations
    {
    public:
        vector<vector<int>> leraMatriz(string nomeArquivo);
        void imprimir(const vector<vector<int>> &matriz);
        void criarNovaGeracao(const vector<vector<int>> &entrada, vector<vector<int>> &saida); // Correção de declaração
        void salvar(const vector<vector<int>> &matriz, const string &nomeArquivo, const int cont);
        void limpar(vector<vector<int>> &matriz);
    };

}

#endif
