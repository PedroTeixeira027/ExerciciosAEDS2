/*
Fa�a um programa que realize a leitura dos seguintes dados 
relativos a um conjunto de alunos: Matricula, Nome, Codigo da 
Disciplina, Nota1 e Nota2. Considere uma turma de at� 10 alunos. 
Ap�s ler todos os dados digitados, e depois de armazen�-los em 
um vetor de estrutura, exibir na tela a listagem final dos 
alunos com as suas respectivas m�dias finais (use uma m�dia 
ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).
*/

#include <iostream>
using namespace std;
struct TDados
{
   string nome, matricula;	
   float nota1, nota2;
};