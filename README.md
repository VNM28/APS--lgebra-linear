<h1>Projeto de Criptografia com Álgebra Linear</h1>

<h2>Descrição</h2>
Este projeto tem como objetivo desenvolver um algoritmo de criptografia utilizando técnicas de álgebra linear, aplicado na disciplina de Álgebra Linear. O projeto é dividido em dois módulos principais: Criptografia e Descriptografia.</n>

<h2>Objetivos</h2>

<ul>
  <li>Módulo 01 - Criptografia: Ler uma mensagem de 6 caracteres, gerar a matriz correspondente e criptografá-la.</li>
  <li>Módulo 02 - Descriptografia: Ler uma matriz de mensagem criptografada, descriptografá-la e imprimir a mensagem original.</li>
</ul>

<h2>Tecnologias Utilizadas</h2>

<ul>
  <li>Linguagem de Programação: C.
</ul>

<h2>Funcionalidades</h2>
<h3>Módulo 01 - Criptografia</h3>
<ol>
  <li>Ler uma palavra de 6 caracteres.</li>
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

<h2>Tabela de Conversão CHAR/NUMÉRICO</h2>
<table>
  
  <tr>
    <td>Letra</td>
    <td>Número</td> 
  </tr>
  <tr>
    <td>A</td>
    <td>1</td> 
    
  </tr>
  <tr>
    <td>B</td>
    <td>2</td> 
  </tr>
  <tr>
    <td>C</td>
    <td>3</td> 
  </tr>
  <tr>
    <td>D</td>
    <td>4</td> 
  </tr>
  <tr>
    <td>E</td>
    <td>5</td> 
  </tr>
  <tr>
    <td>F</td>
    <td>6</td> 
  </tr>
  <tr>
    <td>G</td>
    <td>7</td> 
  </tr>
  <tr>
    <td>H</td>
    <td>8</td> 
  </tr>
  <tr>
    <td>I</td>
    <td>9</td> 
  </tr>
  <tr>
    <td>J</td>
    <td>10</td> 
  </tr>
  <tr>
    <td>K</td>
    <td>11</td> 
  </tr>
  <tr>
    <td>L</td>
    <td>12</td> 
  </tr>
  <tr>
    <td>M</td>
    <td>13</td> 
  </tr>
  <tr>
    <td>N</td>
    <td>14</td> 
  </tr>
  <tr>
    <td>O</td>
    <td>15</td> 
  </tr>
  <tr>
    <td>P</td>
    <td>16</td> 
  </tr>
  <tr>
    <td>Q</td>
    <td>17</td> 
  </tr>
  <tr>
    <td>R</td>
    <td>18</td> 
  </tr>
  <tr>
    <td>S</td>
    <td>19</td> 
  </tr>
  <tr>
    <td>T</td>
    <td>20</td> 
  </tr>
  <tr>
    <td>U</td>
    <td>21</td> 
  </tr>
  <tr>
    <td>V</td>
    <td>22</td> 
  </tr>
  <tr>
    <td>W</td>
    <td>23</td> 
  </tr>
  <tr>
    <td>X</td>
    <td>24</td> 
  </tr>
  <tr>
    <td>Y</td>
    <td>25</td> 
  </tr>
  <tr>
    <td>Z</td>
    <td>26</td> 
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
