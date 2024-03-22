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


## Compilação e Execução

O código disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
