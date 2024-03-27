<h1 align="center"> JOGO DA VIDA </h1>

</div>

<div style="display: inline-block;">
<img align="center" height="20px" width="60px" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/> 
<img align="center" height="20px" width="80px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
</a> 
</div>



### Tópicos 

- [Descrição do projeto](#descrição-do-projeto)

- [Regras Básicas](#regras-básicas)

- [Objetivo do Código](#objetivo-do-código)
  
- [Funcionamento](#funcionamento)


- [Compilação e Execução](#compilação-e-execução)

## Descrição do projeto 

<p align="justify">
 O Jogo da Vida é um autômato celular fascinante que evolui de acordo com regras simples, mas gera padrões complexos. Inspirado pelo matemático John Conway, esse jogo é representado por uma matriz 2D de células, onde cada célula pode estar viva ou morta. A evolução das células é determinada por um conjunto de regras simples baseadas no número de células vizinhas vivas ou mortas.

 # :hammer: Regras Básicas
 As células do Jogo da Vida seguem as seguintes regras de evolução:
- `1 - Solidão`: Qualquer célula viva com menos de dois vizinhos vivos morre de solidão.
- `2 - Superpopulação`: Qualquer célula viva com mais de três vizinhos vivos morre de superpopulação.
- `3`: Uma célula viva com dois ou três vizinhos vivos sobrevive
- `4 - Reprodução`: Qualquer célula morta com exatamente três vizinhos vivos se torna uma célula viva.

  
Essas regras simples criam uma dinâmica surpreendentemente complexa e são a base para a fascinante evolução dos padrões no Jogo da Vida.

## Objetivo do Código
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
  <img height="250rem" src="/imagens/imagem1.png">
          </p>

Também é importante compreender que todas as implementações estão distribuídas em diferentes arquivos, os quais estão detalhados na figura abaixo, juntamente com a funcionalidade de cada um deles.
 <p align="center">
  <img height="250rem" src="/imagens/imagem2.png">
          </p>
   - **_main.cpp_**: 
   - **_jogoDaVida.hpp_**: 
   - **_jogoDaVida.cpp_**: 
## Compilação e Execução

O código disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:

       
| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
