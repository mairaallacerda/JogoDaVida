<h1 align="center"> JOGO DA VIDA </h1>

 O Jogo da Vida é um autômato celular fascinante que evolui de acordo com regras simples, mas gera padrões complexos. Inspirado pelo matemático John Conway, esse jogo é representado por uma matriz 2D de células, onde cada célula pode estar viva ou morta. A evolução das células é determinada por um conjunto de regras simples baseadas no número de células vizinhas vivas ou mortas.

 # :hammer: Regras Básicas
 As células do Jogo da Vida seguem as seguintes regras de evolução:
- `1 - Subpopulação`: Qualquer célula viva com menos de dois vizinhos vivos morre de solidão.
- `2 - Estabilidade`: Qualquer célula viva com dois ou três vizinhos vivos continua viva para a próxima geração.
- `3 - Superpopulação`: Qualquer célula viva com mais de três vizinhos vivos morre de superpopulação.
- `4 - Reprodução`: Qualquer célula morta com exatamente três vizinhos vivos se torna uma célula viva.

  
Essas regras simples criam uma dinâmica surpreendentemente complexa e são a base para a fascinante evolução dos padrões no Jogo da Vida.


## Compilação e Execução

O código disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
