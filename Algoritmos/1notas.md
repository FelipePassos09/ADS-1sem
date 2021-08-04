<h1>Conceitos de Algoritmos e Programação</h1>

Algoritmo pode ser resumido em uma sequência ordenada de passos para que seja executada uma tarefa.

* Isso pode ser lido como uma sequencia de cálculos, passos, ações, processos ou qualquer que seja a necessidade para a solução pretendida.

O processo se inicia a partir da entrada dos dados, passa para o processamento e, enfim, ocorre saída dos valores processados. Tal fluxo é destinado á desmembrar as etapas da solução para uma melhor implementação.

* Entrada: é o momento onde ocorre a leitura do dado a ser tratado, pode tanto ser considerada por um input manual quanto pela leitura de um arquivo, banco de dados, api ou outro meio de obtenção do dado a ser tratado.

* Processamento: é o conjunto de cálculos, funções, modificações e demais passos realizados sobre os dados. Tal etapa é o coração do programa e sua principal atribuição.

* Saída: é a entrega dos dados tratados. Essa é a etapa final da solução, onde o resultado dos esforços é apresentado.

<h2>Exemplos de Algoritmo</h2>

1. Uma receita de bolo
2. Um passo a passo de um sistema
3. Um tutorial da internet
4. O manual de montagem de um objeto
5. O projeto de uma casa.

<h3>Notação e Documentação</h3>

Para a exemplificação e escrita de um algoritmo temos a linguagem que iremos adotar, os fluxos e a notação semântica dos passos. Tal notgação deve seguir um conjunto de regras para que seja de simples notação, compreenção e com uma estrutura organizada.

Comumente usamos uma notação com termos em português (recomendo o Portugol Studio para isso, http://lite.acad.univali.br/portugol/) para familiarizar-nos com as estruturas de comando. Por exemplo:

Para obtermos a média de duas notas temos de criar variáveis para armazená-las, somá-las, dividi-las e avaliar se atendem ou não a nota de corte para então mostrar o resultado se aluno passou ou não. Esse raciocínio pode ser exemplificado como o algoritmo abaixo:

<p>
<br>
nota1 = x<p>
nota2 = y <p>
<br>
média = (nota1 + nota2)/2<p>
<br>
se média <= 7:<p>
  <_>aluno reprovou<p>
senão:<p>
  <_>Aluno passou<p>

<br>
Como pode ser observado acima, ambas as maneiras apresentam o mesmo cenário e solução, porém uma com bem menos palavras que a anterior, e com uma visualização mais intuitiva, também.

As linguagens de computação utilizam esse formato de estrutura por permitir uma padronização nas notações do código e agregar maior produtividade e precisão ao processo.

<h2>Linguagem de Programação</h2>

Entende-se por linguagem de programação as tecnologias de notação, compilação e semãntica que se destinam à criação de programas. Temos como linguagens o Python, C, C++, C#, Java, JavaScript(JS), Rust, entre muitos outros.

Cada linguagem de programação possui um conjunto de palavras reservadas, funções e padrões inerentes à sua leitura e interpretação pelo computador e podem ser diferenciadas por Liguagens Interpretadas e Linguagens Compiladas.

<h4>Compilador</h4>

Temos duas grandes subdivisões entre as linguagens de programação, as INTERPRETADAS e as COMPILADAS. O que as diferencia é a necessidade, ou não, de seu código ser compilado em linguagem de BAIXO-NÍVEL para que seja reconhecida pelo computador, já as interpretadas tem instruções que podem ser lidas pelo sistema sem a necessidade de compilação.

Temos com exemplos de linguagens compiladas: C, C++, C# (ou C++++) e o Java.
Já para as linguagens interpretadas temos: JavasCript, Python e o PHP.

O fluxo da linguagem C (e da maioria das linguagens interpretadas) segue a premissa de que o mesmo cód. fonte possa ser utilizado para diversos sistemas e daí surge a necessidade do compilador, desse modo podemos converter o mesmo cód para formatos compativeis com qualquer sistema, por exemplo: para wWindows, linux e macOS.

Desse modo o fluxo segue três níveis: 

    * Cód. Fonte (sourcecode) - é feito em linguagem de alto-nível, a linguagem utilizando verbos, legivel e compreensível para humanos, antes de ser compilado.
    * Objeto - é o resultado da compilação do sourcecode, ela, geralmente, é em linguagem de baixo-nível (binário) e é o que será interpretado pelo sistema após a montagem.
    * Máquina - é o resultado da montagem(assembling) e possivel de ser lido pelo sistema.
