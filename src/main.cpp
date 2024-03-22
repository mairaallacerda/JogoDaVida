#include "jogoDaVida.hpp"
#include <iostream>
#include <vector>

using namespace std;

void menu(modificado::MatrizOperations &jogodaVida)
{
    int geracoes;
    cout << endl
         << endl
         << "Quantas [GERAÇÕES] serão geradas e registradas ? ";
    cin >> geracoes;
    vector<vector<int>> matriz1 = jogodaVida.leraMatriz("datasets/input.mps"); // Corrigido o nome do arquivo de entrada
    vector<vector<int>> matriz2;
    jogodaVida.salvar(matriz1, "datasets/geracoes.mps", 0); // Corrigido o nome do arquivo de saída
    for (int a = 0; a < geracoes; a++)
    {
        if (a % 2 == 0)
        {
            cout << endl
                 << endl
                 << "Primeira Matriz" << endl
                 << endl;
            jogodaVida.imprimir(matriz1);
            jogodaVida.criarNovaGeracao(matriz1, matriz2); // Corrigido o nome da função
            cout << endl
                 << endl
                 << "Segunda Matriz" << endl
                 << endl;
            jogodaVida.imprimir(matriz2);
            jogodaVida.salvar(matriz2, "datasets/geracoes.mps", a + 1); // Corrigido o nome do arquivo de saída
            jogodaVida.limpar(matriz1);
        }
        else
        {
            jogodaVida.criarNovaGeracao(matriz2, matriz1); // Corrigido o nome da função
            cout << endl
                 << endl
                 << "Primeira Matriz" << endl
                 << endl;
            jogodaVida.imprimir(matriz1);
            jogodaVida.salvar(matriz1, "datasets/geracoes.mps", a + 1); // Corrigido o nome do arquivo de saída
            jogodaVida.limpar(matriz2);
        }
    }
}

int main()
{
    modificado::MatrizOperations matriz;
    menu(matriz);
    return 0;
}
