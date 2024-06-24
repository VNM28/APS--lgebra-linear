<h1>Projeto de Criptografia com Álgebra Linear</h1>

<ul>
  <li>Disciplina: Algebra Linear</li>
  <li>Professor: Manuel Martins Filho</li>
  <li>Aluno: Vinícius do Nascimento Marinho</li>
  <li>Turma: 926</li>
</ul>

<h2>Descrição</h2>
Este projeto tem como objetivo desenvolver um algoritmo de criptografia utilizando técnicas de álgebra linear, aplicado na disciplina de Álgebra Linear. O projeto é dividido em dois módulos principais: Criptografia e Descriptografia.</n>

<h2>Objetivos</h2>

<ul>
  <li>Módulo 01 - Criptografia: Ler uma mensagem de 6 caracteres, gerar a matriz correspondente e criptografá-la.</li>
  <li>Módulo 02 - Descriptografia: Ler uma matriz de mensagem criptografada, descriptografá-la e imprimir a mensagem original.</li>
  <li>Módulo Extra - Matriz Inversa: Ler uma matriz de primeira ou segunda ordem e gerar a matriz inversa.</li>
</ul>

<h2>Tecnologias Utilizadas</h2>

<ul>
  <li>Linguagem de Programação: C.
</ul>

<h2>Funcionalidades</h2>
<h3>Módulo 01 - Criptografia</h3>
<ol>
  <li>Ler uma palavra de 6 caracteres:</li>
![01](https://github.com/VNM28/APS-Algebra-Linear/assets/55760279/b74cca49-8239-4f7e-b30f-2c96f1e0fa66)
  <li>Codificar e armazenar a palavra em uma matriz 3×2 usando a tabela de conversão.</li>
  <li>Multiplicar a matriz de criptografia 𝐶(3×3) pela matriz da mensagem 𝑀(3×2) para gerar a matriz criptografada 𝑀𝐶(3×2).</li>
  <li>Imprimir:</li>
  <ul>
    <li>A palavra original lida.</li>
    <li>A matriz 𝑀(3×2) codificada.</li>
    <li>A matriz criptografada 𝑀𝐶(3x2).</li>
  </ul>
</ol>

<h3>Módulo 02 - Descriptografia</h3>
<ol>
  <li>Ler uma matriz de mensagem criptografada 𝑀𝐶(3x2).</li>
  <li>Multiplicar a matriz inversa de 𝐶 pela matriz criptografada 𝑀𝐶(3×2) para gerar a matriz original 𝑀(3×2).</li>
  <li>Gerar a mensagem original usando a matriz 𝑀(3×2) e a tabela de conversão.</li>
  <li>Imprimir:</li>
  <ul>
    <li>A matriz criptografada 𝑀𝐶(3×2).</li>
    <li>A matriz descriptografada 𝑀(3×2).</li>
    <li>A mensagem original.</li> 
  </ul>
</ol>

<h3>Módulo Extra - Matriz Inversa</h3>
<dl>
  <dt>
    <dd>Método utilizado na resolução da matriz inversa de segunda ordem:   https://youtu.be/F10TdwBH8qc?si=7wyAB7kAoKafq4gJ</dd>
    <dd>Método utilizado na resolução da matriz inversa de terceira ordem:  https://youtu.be/xY02ioZP4kE?si=fnAntEkthn_8j4EW</dd>
  </dt>
  
</dl>

<h2>Tabela de Conversão CHAR/NUMÉRICO</h2>
<table>
  <tr>
    <td>A=1</td>
    <td>B=2</td>
    <td>C=3</td>
    <td>D=4</td> 
  </tr>
  <tr>
    <td>E=5</td>
    <td>F=6</td>
    <td>G=7</td>
    <td>H=8</td>
  </tr>
  <tr>
    <td>I=9</td>
    <td>J=10</td>
    <td>K=11</td>
    <td>L=12</td> 
  </tr>
  <tr>
    <td>M=13</td>
    <td>N=14</td>
    <td>O=15</td>
    <td>P=16</td> 
  </tr>

  <tr>
    <td>Q=17</td>
    <td>R=18</td>
    <td>S=19</td>
    <td>T=20</td> 
  </tr>
  <tr>
    <td>U=21</td>
    <td>V=22</td>
    <td>W=23</td>
    <td>X=24</td> 
  </tr>
  <tr>
    <td>Y=25</td>
    <td>Z=26</td>
    <td>*=0</td>
  </tr>
</table>

<h2>Matriz de Criptografia (C)</h2>
<table>
  <tr>
    <td>1</td>
    <td>0</td>
    <td>1</td>
  </tr>
  <tr>
    <td>1</td>
    <td>1</td>
    <td>1</td>
  </tr>
  <tr>
    <td>0</td>
    <td>2</td>
    <td>-1</td>
  </tr>
</table>
