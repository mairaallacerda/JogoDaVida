<h1 align="center"> JOGO DA VIDA </h1>

</div>

<div style="display: inline-block;">
<img align="center" height="20px" width="60px" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/> 
<img align="center" height="20px" width="80px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
</a> 
</div>



<h2 align="center"> Tópicos </h2>
    <h4 align="center"> 
        
 [Descrição do projeto](#descrição-do-projeto)

 [Regras do Jogo](#regras-do-jogo)

 [Objetivo do Código](#objetivo-do-código)
  
 [Funcionamento](#funcionamento)

[Resoluções](#resoluções)

 [Compilação e Execução](#compilação-e-execução)
 <h4>


<h2 align="center"> <strong><em>Descrição do Projeto</em></strong> </h2>
<p align="justify">
 O Jogo da Vida é um autômato celular fascinante que evolui de acordo com regras simples, mas gera padrões complexos. Inspirado pelo matemático John Conway, esse jogo é representado por uma matriz 2D de células, onde cada célula pode estar viva ou morta. A evolução das células é determinada por um conjunto de regras simples baseadas no número de células vizinhas vivas ou mortas.

 <h2 align="center"> Regras do Jogo </h2>
       <p>
 As células do Jogo da Vida seguem as seguintes regras de evolução:
           
- Solidão: Qualquer célula viva com menos de dois vizinhos vivos morre de solidão.
           
- Superpopulação: Qualquer célula viva com mais de três vizinhos vivos morre de superpopulação.
  
- Uma célula viva com dois ou três vizinhos vivos sobrevive
  
- Reprodução: Qualquer célula morta com exatamente três vizinhos vivos se torna uma célula viva.

  
Essas regras simples criam uma dinâmica surpreendentemente complexa e são a base para a fascinante evolução dos padrões no Jogo da Vida.

<h2 align="center"> Objetivo do código</h2>
       <p align="justify">
O objetivo deste código é revisar e aplicar conceitos de manipulação de matrizes, controle de fluxo e lógica de jogo, através da implementação do Jogo da Vida. Para alcançar este objetivo, considere as seguintes tarefas:
 
1. *Leitura da Matriz de Entrada:* Ler a matriz de entrada de um arquivo chamado input.mps localizado na pasta datasets do projeto. A matriz deve ter um tamanho mínimo de 5x5.
   
2. *Composição da Matriz de Entrada:* Compor a matriz de entrada considerando uma fração de 2 para 1 para os valores 0s e 1s. Garanta que o número de 1s seja menor para produzir um melhor espalhamento.
   
3. *Avaliação e Geração de Novas Matrizes:* A cada interação do jogo, avaliar a matriz atual de acordo com as regras do Jogo da Vida e produzir os resultados da avaliação em uma nova matriz.
      - Salvar cada matriz avaliada como parte dos resultados em um arquivo chamado geracoes.mps.
  
4. *Organização do Arquivo geracoes.mps:* Organizar o arquivo geracoes.mps para mostrar todas as evoluções do jogo, incluindo a matriz de origem da execução.
   
5. *Entrada do Usuário:* Solicitar ao usuário apenas o número de gerações a serem avaliadas.

Por dessas implementações, o código busca proporcionar uma revisão prática e aplicada dos conceitos mencionados, enquanto oferece uma execução interativa do Jogo da Vida.

<h2 align="center"> Funcionamento </h2>
      <p>
Em primeiro lugar, é relevante destacar que o programa possui uma interface simplificada, composta apenas por uma pergunta, que tem a função de facilitar a interação entre o software e o usuário. Essa interface pode ser visualizada na imagem a seguir:
  <p align="center">
  <img height="100rem" src="/imagens/imagem1.png">
          </p>

Também é importante compreender que todas as implementações estão distribuídas em três arquivos, os quais estão detalhados na figura abaixo, juntamente com a funcionalidade de cada um deles.

 <p align="center">
  <img height="100rem" src="/imagens/imagem2.png">
  </p>
      </p>
      
- **_main.cpp_**: contém a função principal do programa, que executa o Jogo da Vida. Ele inclui o header _jogoDaVida.hpp_ para acessar as funcionalidades da classe _MatrizOperations_. Além disso, são incluídas as bibliotecas **_iostream_** e **_vector_** para operações de entrada/saída e manipulação de vetores, respectivamente.
   
- **_jogoDaVida.hpp_**: define a classe MatrizOperations, a qual encapsula as operações principais do Jogo da Vida. Esta classe fornece métodos para ler uma matriz de um arquivo, imprimir uma matriz na tela, criar uma nova geração de células com base nas regras do jogo, salvar uma matriz em um arquivo e limpar uma matriz para prepará-la para uma nova utilização.

  </p> Além disso, este arquivo inclui as bibliotecas necessárias para o funcionamento dessas operações, como **_iostream_** e **_vector_**. O uso de um header guard (#ifndef JOGODAVIDA_HPP) é empregado para evitar a inclusão múltipla deste arquivo em diferentes partes do código. O código está contido no namespace "modificado" para garantir a modularidade e reutilização do código.

- **_jogoDaVida.cpp_**: contém a implementação das operações principais do Jogo da Vida. Ele fornece funcionalidades essenciais para ler uma matriz de um arquivo, imprimir uma matriz na tela, criar uma nova geração de células com base nas regras do jogo, salvar uma matriz em um arquivo e limpar uma matriz para prepará-la para uma nova utilização. Essas operações são encapsuladas dentro do namespace "modificado" para garantir a modularidade e reutilização do código.

 <h2 align="center"> Resoluções</h2>
       <p align="justify">  
           
### Implementando
Inicialmente, foi definida a classe MatrizOperations, que encapsula as operações relacionadas à manipulação de matrizes para o Jogo da Vida.
Logo depois, cria o Método leraMatriz:

* Este método é responsável por ler uma matriz a partir de um arquivo. Ele recebe o nome do arquivo como argumento.
* O método abre o arquivo especificado e lê o tamanho da matriz.
* Em seguida, ele dimensiona a matriz e preenche seus valores com base nos dados do arquivo.
* Por fim, retorna a matriz lida

```c++
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

```
Depois de ler o arquivo, são impletados os métodos _imprimir_, _criarNovaGeracao_, _salvar_ e _limpar_
1. Método imprimir
   Este método recebe uma matriz como argumento e imprime seus valores na saída padrão (console)
   
```c++
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
    
```
2. Método criarNovaGeracao
   * Este método recebe duas matrizes como argumento: a matriz de entrada (atual) e a matriz de saída (próxima geração).
   * Ele itera sobre cada célula da matriz de entrada e aplica as regras do Jogo da Vida para determinar o estado da célula na próxima geração.
   * As regras são aplicadas contando o número de células vizinhas vivas e mortas, e atualizando o estado da célula na matriz de saída de acordo com essas regras.
     
  ```c++
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


```
3. Método salvar
   * Este método recebe uma matriz, um nome de arquivo e um contador como argumentos.
   * Ele abre o arquivo especificado em modo de apêndice e salva a matriz formatada com o número de geração correspondente.
   * Após salvar a matriz, ele fecha o arquivo e imprime uma mensagem indicando o sucesso da operação.
     
  ```c++
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

```
4. Método limpar
   Este método recebe uma matriz como argumento e a preenche com zeros, limpando-a para prepará-la para uma nova utilização.
   
```c++
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
```

Fim da implementação do jogoDaVida.cpp


  <h2 align="center"> Compilação e Execução</h2>
       <p align="justify">

O código disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:

       
| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |


<a style="color:black" href="mailto:mairaallacerda@gmail.com?subject=[GitHub]%20Source%20Dynamic%20Lists">
✉️ <i>mairaallacerda@gmail.com</i>
</a>
