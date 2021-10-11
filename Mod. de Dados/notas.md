<h1>Modelagem de Dados</h1>
<h3>Prof. Gilberto Fernandes</h3>
<h2>Primeira Aulas</h2>
<h4>Introdução aos SGBD's <br>Sistemas Gereciadores de Bancos de Dados</h4>
<ul>
    <li>O que são SGBD's</li>
    <li>Integridade do banco de dados</li>
    <li>Banco de dados relacional (SQL)</li>
    <li>Dados como apoio a tomada de decisão</li>
</ul>
<h2>características de um banco de dados</h2>
<ul>
<li>Um banco de dados é um conjunto de dados relacionados entre si.</li>
<li>Os dados, quando relacionados entre si, geram informações relevantes para tomada de decisão ou processamento desses dados.</li>
<li>um banco de dados é um conjunto de dados duráveis e acessíveis por outras aplicações da empresa.
    <li>Os dados somente podem ser apagados por funções específicas e mediante permissão de acesso.</li>
</li>
<li>Natureza autodescritiva</li>
<li>dados isolados das abstrações</li>
<li>suportar multiplas maneiras de visualização</li>
<li>suportar compartilhamento de informações (concorrencia) com as aplicações dele dependentes</li>
</ul>

<h2>Tipos de bancos de dados</h2>
<h3>Sistemas hierarquicos e de rede</h3>
<p>Na década de 80 consistia em dados estruturados em árvore, estático e imutável.</p>
<h3>Relacional</h3>
<p>São bancos onde há a separação entre a parte estrutural e fisica, fazendo uso de entidades, que são tabelas relacionadas entre si, trazendo flexibilidade e otimizando o fluxo de processos pois sua estruturação é dinâmica.</p>
<h3>Relacional / Objeto</h3>
<p>Banco relacionado co conceitos de POO</p>
<h3>Para web com XML</h3>
<p>Permite a integração dos dados</p>
<h3>Para Cloud</h3>
<p>Bancos exclusivos de serviços Cloud</p>

<h2>O que é um SGBD</h2>
<p>É um sistema que realzia o gerenciamento de um banco de dados trazendo funcionalidades para manutenção, gerir o compartilhamento e acesso aos dados, exploração, e extração de informações.</p>

<h2>Aplicações em um banco de dados</h2>
<img src="./src/media/App's%20em%20um%20bd.png">

<p>Na figura acima vemos o esquema de como um banco de dados trabalha com as aplciações, nesse caso várias aplicações consomem e alimentam o mesmo banco.
<br /><br />
Desse modo, somente com um SGBD conseguimos gerenciar como e quando essas aplicações interagem com os dados a fim de evitar erros e falhas. Ele serve como uma unidade intermediária entre o banco de dados e a aplicação tendo como proposito garantir a integridade e segurança dos dados nele contidos.

<ul>
<li>Projetado para gerenciar grandes volumes de dados</li>
<li>Possui mecanismos de controle de falha em software e hardware</li>
<li>Suporta computação distribuida e local</li>
<li>Suporta concorrencia sobre os dados</li>
<li>Entre as mais diversas opções temos as Open-Source e as Proprietárias:
    <ul>
        <li>Oracle - Propriretário</li>
        <li>MySQL - Open Source</li>
        <li>Microsoft SQL Server - Proprietário</li>
        <li>PostgreSQL (SGBDRO) - Open Source</li>
        <li>IBM DB1 - Proprietário</li>
        <li>Microsoft Access - Proprietário</li>
    </ul>
</li>
</ul>

<h2>Conceitos</h2>
<h4>Proteção e recuperação de dados</h4>
<p>Os dados contidos no BD são de alto sigilo e o SGBD precisa dispor sempre de altos padrões de segurança tanto quanto violações quanto à falhas.<br /><br>
Precisa ter tbm possibilidade de gestão de backups e redundâncias.<br /><br>
Além disso deve permitir o controle de permissionamento de usuários para assim garantirmos a integridade das informações contidas e sua visibilidade.

<h4>Transação</h4>
<p>Em resumo, é qualquer consulta, adição, edição ou alteração em uma tabela, documento, informação ou entidade do banco. Pode ser realizada pelo próprio SGBD ou por uma das aplicações conectadas (modelo mais usual).<br/>
<h4>Requisitos de um SGBD</h4>
<p>O conjunto de requisitos de um SGBD recebe o nome de ACID quando atende aos principais elementos contidos nesta categoria, são eles:</p>
<ul>
    <li>A - Atomicidade
        <ul>
            <li style="list-style:none">Garante que nenhuma ou a totalidade de transações sejam executadas, gestrando um estado anterior das alterações para recuperação em caso de falha.</li>
        </ul>
    </li>
    <li>C - Consistencia
        <ul>
            <li style="list-style:none">Consiste em preservar os dados para evitar perda ou quebra de integridade dos dados contidos no banco</li>
        </ul>
    </li>
    <li>I - Isolamento
        <ul>
            <li style="list-style:none">Trata das individualidade das transações evitando que ocorram transações simultâneas</li>
        </ul>
    </li>
    <li>D - Durabilidade        
        <ul>
            <li style="list-style:none">Se refere à manutenção e preservação dos dados nas estruturas tal qual foram gravados.</li>
        </ul>
    </li>
</ul>

<h4>Registro de Ações (LOG)</h4>
<p>São os registros das transçãoçoes efetuadas e suas consequencias no banco,assim como dos status retornados de cada transação e seu efeito</p>

<h2>Banco de dados Relacional</h2>
<p>Trata de um banco de dados onde cada entidade se relaciona com outras. Geralmente os bancos de dados tem estrutura de tabelas (planilhas).</p>
<h3>Modelagem de dados</h3>
<ul>
    <li>Abstração e Observação das necessidades a serem supridas</li>
    <li>Modelagem de dados relacional:
    <ul>
        <li>Criada na década de 700</li>
        <li>Foi criada pro Peter P. Chen</li>
        <li>Foi o padrão até o advento da tecnologia NoSQL</li>
        <li>É baseada na teoria dos conjuntos de algebra relacional.</li>
    </ul>
    </li>
</ul>
<h3>Modelo de dados</h3>
<p>É uma abstração da estrutura e aplicação dos conceitos entendidos para o banco de dados. Ela consiste de um grafo, relatório ou diagrama contendo as estruturas e relacionamentos a serem aplicados.</p>
<img src="./src/media/Modelo%20Gráfico.png">
<p>Neste modelo conseguimos observar, de maneira clara, quais são os dados, seus tipos, seu relacionamento e o resultado das suas ligações</p>
<h3>Modelo Relacional</h3>
<ul>
    <li>Não é estático</li>
    <li>Suporta a evolução do banco e a adição de novas entidades</li>
    <li>Idealiza que os dados são armazenados em tabelas e linhas</li>
    <li>Comporta operações de algebra relacional e teoria dos conjuntos.
        <ul>
            <li>Seleção</li>
            <li>União</li>
            <li>Junção</li>
            <li>Subtração</li>
            <li>Produto cartesiano</li>
            <li>Projeção</li>
        </ul>
    </li>
</ul>

<h3>Exemplo de Tabela Aluno (entidade)</h3>
<table>
<tr>
    <td>Matricula</td>
    <td>Nome</td>
    <td>Dt. Nascimento</td>
    <td>Curso</td>
</tr>
<tr>
    <td>1515</td>
    <td>Ana Lee</td>
    <td>15/06/1989</td>
    <td>Direito</td>
</tr>
<tr>
    <td>1819</td>
    <td>Pedro Luz</td>
    <td>21/07/2000</td>
    <td>Veterinária</td>
</tr>
<tr>
    <td>2125</td>
    <td>Karla Keen</td>
    <td>01/02/1999</td>
    <td>Direito</td>
</tr>
</table>

<p>Em uma tabela podemos dizer que cada linha seria um registro e cada culuna os atributos.</p>

<h3>Data Warehouse</h3>
<p>Diz-se de um consolidado de várias origens de modo a facilitar o processo de Data Mining. Utilizando os processos de data-mining através de um DW conseguimos extrair e agregar valor aos dados de modo mais objetivo e completo, facilitando a busca por esses dados e gerando indicadores mais completos e eficientes.</p>
<p>O DW também gera maior segurança pois preserva os dados dos bancos de dados de origem.</p>

<h3>Data Mining</h3>
<p></p>

<h3>OLTP vs OLAP</h3>

<h4>OLTP</h4>
<p></p>

<h4>OLAP</h4>
<p></p>

<table>
<tr>
    <td>OLTP</td>
    <td>OLAP</td>
</tr>
<tr>
    <td>Operações deRotina</td>
    <td>Operações Analíticas</td>
</tr>
<tr>
    <td>Baixo desempenho em consultas</td>
    <td>Alto desempenho em consultas</td>
</tr>
<tr>
    <td>Sem histórico de consultas</td>
    <td>Permite histórico de consultas</td>
</tr>
<tr>
    <td>Estruturas convencionais de armazenamento.</td>
    <td>Armazenamento em Data Warehouse</td>
</tr>
<tr>
    <td>Dados Volateis</td>
    <td>Dados Históricos</td>
</tr>
</table>

<h2>Redundância em Banco de Dados</h2>
<p>Devemos sempre evitar o uso de dados identicos em entidades distintas para evitar o surgimento de inconsistências</p>

<p>Pode também ser a cópia do banco (backup) para fins de recuperação em caso de falhas ou erros no tratamento dos dados do banco.<br/>
O backup deve possuir um plano e projeto contendo seus detalhes, políticas, planos de recuperação e gravação, manutenção e local de armazenamento.</p>

<h3>Proteção do Banco</h3>
<p>O banco deve possuir políticas de acesso bem definidas visando assegurar o acesso e consistência dos dados. Desse <br>