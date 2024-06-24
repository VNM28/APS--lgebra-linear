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

<h2>Resolução</h2>
<h3>Módulo 01 - Criptografia</h3>
<ol>
  <li>Ler uma palavra de 6 caracteres:</li>
  <div align="center">
    <img src="https://github.com/VNM28/APS-Algebra-Linear/assets/55760279/b74cca49-8239-4f7e-b30f-2c96f1e0fa66" alt="Logo da Minha Empresa">
  </div>
  <li>Codificar e armazenar a palavra em uma matriz 3×2 usando a tabela de conversão.</li>
  <li>Multiplicar a matriz de criptografia 𝐶(3×3) pela matriz da mensagem 𝑀(3×2) para gerar a matriz criptografada 𝑀𝐶(3×2).</li>
  <li>Imprimir:</li>
  <ul>
    <li>A palavra original lida:</li>
     <div align="center">
        <img src="https://github.com/VNM28/APS-Algebra-Linear/assets/55760279/1dff97b1-52db-41a0-bc28-cc118da9429e" alt="Logo da Minha Empresa">
      </div>
    <li>A matriz 𝑀(3×2) codificada:</li>
    <div align="center">
        <img src="https://github.com/VNM28/APS-Algebra-Linear/assets/55760279/d6990d47-13bb-472b-abe6-096911a3315e" alt="Logo da Minha Empresa">
    </div>
    <li>A matriz criptografada 𝑀𝐶(3x2):</li>
    <div align="center">
      <img src="https://github.com/VNM28/APS-Algebra-Linear/assets/55760279/eaeafe45-9995-4415-b011-98f5f74f3896" alt="Logo da Minha Empresa">
    </div>
  </ul>
</ol>

<h3>Módulo 02 - Descriptografia</h3>
<ol>
  <li>Ler uma matriz de mensagem criptografada 𝑀𝐶(3x2):</li>
  <div align="center">
    <img src="https://github.com/VNM28/APS-Algebra-Linear/assets/55760279/40a74234-c799-4499-83d3-ebcc964760be" alt="Logo da Minha Empresa">
  </div>
  <li>Multiplicar a matriz inversa de 𝐶 pela matriz criptografada 𝑀𝐶(3×2) para gerar a matriz original 𝑀(3×2).</li>
  <li>Gerar a mensagem original usando a matriz 𝑀(3×2) e a tabela de conversão.</li>
  <li>Imprimir:</li>
  <ul>
    <li>A mensagem original e a matriz descriptografada 𝑀(3×2):</li>
    <div align="center">
      <img src="https://github.com/VNM28/APS-Algebra-Linear/assets/55760279/d0c3708a-4523-4aed-ae32-e42eb5317763" alt="Logo da Minha Empresa">
    </div>
  </ul>
</ol>

<h3>Módulo Extra - Matriz Inversa</h3>
<dl>
  <dt>
    <dd>Método utilizado na resolução da matriz inversa de segunda ordem:   https://youtu.be/F10TdwBH8qc?si=7wyAB7kAoKafq4gJ</dd>
    <dd>Método utilizado na resolução da matriz inversa de terceira ordem:  https://youtu.be/xY02ioZP4kE?si=fnAntEkthn_8j4EW</dd>
  </dt>
  <ol>
    <li> Ler a ordem da matriz:</li>
    <div align="center">
      <img src="https://github.com/VNM28/APS-Algebra-Linear/assets/55760279/6a7d5bf4-01e7-400e-8910-f04ffe8b2afc" alt="Logo da Minha Empresa">
    </div>
    <li>Ler uma matriz (3x2) ou (3x3):</li>
    <div align="center">
      <img src="https://github.com/VNM28/APS-Algebra-Linear/assets/55760279/b7baeb49-88e8-4b15-8463-39c5bf13a8cd" alt="Logo da Minha Empresa">
    </div>
    <li>Imprimir:</li>
      <ul>
        <li>A matriz e o determinante:</li>
        <div align="center">
          <img src="https://github.com/VNM28/APS-Algebra-Linear/assets/55760279/6432d434-2a2b-4bde-b56b-338f442b57d5" alt="Logo da Minha Empresa">
        </div>
        <li>A matriz inversa:</li>
        <div align="center">
          <img src="https://github.com/VNM28/APS-Algebra-Linear/assets/55760279/5b9ace85-39e3-4f87-a019-00e563956c3f" alt="Logo da Minha Empresa">
        </div>
      </ul>
  </ol>
  
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
