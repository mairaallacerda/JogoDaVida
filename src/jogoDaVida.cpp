#include "jogoDaVida.hpp"
#include <iostream>
#include <fstream>

using namespace std;

namespace modificado
{

    vector<vector<int>> MatrizOperations::leraMatriz(string nomeArquivo)
    {
        ifstream file(nomeArquivo);
        vector<vector<int>> matriz;

        if (file.is_open())
        {
            int size;
            file >> size;
            file.ignore();
            matriz.resize(size, vector<int>(size));
            for (int i = 0; i < size; ++i)
            {
                for (int j = 0; j < size; ++j)
                {
                    char character;
                    file >> character;
                    matriz[i][j] = character - '0';
                }
                file.ignore();
            }

            file.close();
        }
        else
        {
            cerr << "Erro ao abrir o arquivo." << endl;
        }
        return matriz;
    }

    void MatrizOperations::imprimir(const vector<vector<int>> &matriz)
    {
        for (size_t i = 0; i < matriz.size(); ++i)
        {
            for (size_t j = 0; j < matriz[i].size(); ++j)
            {
                cout << matriz[i][j] << " ";
            }
            cout << endl
                 << endl;
        }
    }

    void MatrizOperations::criarNovaGeracao(const vector<vector<int>> &entrada, vector<vector<int>> &saida)
    {
        size_t tamanho = entrada.size();
        saida = entrada;
        for (size_t i = 0; i < tamanho; ++i)
        {
            for (size_t j = 0; j < entrada[i].size(); ++j)
            {
                int countZero = 0, countOne = 0;
                for (int di = -1; di <= 1; ++di)
                {
                    for (int dj = -1; dj <= 1; ++dj)
                    {
                        if (di == 0 && dj == 0)
                            continue;
                        size_t ni = i + di;
                        size_t nj = j + dj;
                        if (ni < tamanho && nj < entrada[i].size())
                        {
                            if (entrada[ni][nj] == 0)
                                countZero++;
                            else
                                countOne++;
                        }
                    }
                }
                // Regras
                if (entrada[i][j] == 1 && (countOne < 2 || countOne > 3))
                {
                    saida[i][j] = 0; // Morte por solidão ou superpopulação
                }
                else if (entrada[i][j] == 0 && countOne == 3)
                {
                    saida[i][j] = 1; // Nascimento por reprodução
                }
                else
                {
                    saida[i][j] = entrada[i][j]; // Mantem o atual
                }
            }
        }
    }

    void MatrizOperations::salvar(const vector<vector<int>> &matriz, const string &nomeArquivo, const int cont)
    {
        ofstream arquivo(nomeArquivo, ios::app);
        if (!arquivo.is_open())
        {
            cerr << "Erro ao abrir o arquivo de saída." << endl;
            return;
        }
        arquivo << "GERAÇÃO [" << cont << "]" << endl
                << endl;
        for (size_t i = 0; i < matriz.size(); ++i)
        {
            for (size_t j = 0; j < matriz[i].size(); ++j)
            {
                arquivo << matriz[i][j] << " ";
            }
            arquivo << endl
                    << endl;
        }
        arquivo.close();
        cout << "Matriz registrada com sucesso no arquivo: " << nomeArquivo << endl;
    }

    void MatrizOperations::limpar(vector<vector<int>> &matriz)
    {
        for (size_t i = 0; i < matriz.size(); ++i)
        {
            for (size_t j = 0; j < matriz[i].size(); ++j)
            {
                matriz[i][j] = 0;
            }
        }
    }

}
