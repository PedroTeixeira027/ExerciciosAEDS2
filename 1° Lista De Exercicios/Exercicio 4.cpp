/******************************************************************************

4.Crie uma estrutura representando os alunos de um determinado curso. A estrutura deveconter a matrículado aluno, nome, nota da primeira prova, 

nota da segunda prova e notada terceira prova.(a) Permita ao usuárioentrar com os dados de 5 alunos.(b) 

Encontre o aluno com maior nota da primeira prova.(c) Encontre o aluno com maior médiageral.(d) 

Encontre o aluno com menor médiageral(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 

*******************************************************************************/
#include <iostream>
#include <locale.h>

using namespace std;

    struct alunos {
        
        string nome;
        int matricula;
        string curso;
        int p1;
        int p2;
        int p3;
    };

int main()
{
   
    setlocale(LC_ALL,"portuguese");
    
    alunos notasAlu[5];
   
    for(int i=0; i<5; i++){
        
        cout << "Digite seu nome: ";
        cin >> notasAlu[i].nome;
        cout << "Digite seu numero de matricula: ";
        cin >> notasAlu[i].matricula;
        cout << "Digite seu curso: ";
        cin >> notasAlu[i].curso;
        cout << "Nota da Prova 1, 2 e 3: ";
        cin >> notasAlu[i].p1 >> notasAlu[i].p2 >> notasAlu[i].p3;
        cout << endl;
    }
    cout << "Alunos Cadastrados!!!";
    cout << endl;
    
    int maiorNota = notasAlu[0].p1;
    int indiceMaiorNota = 0;
    
    for (int x=1; x<5; x++) {
        
        if(notasAlu[x].p1 > maiorNota){
            maiorNota = notasAlu[x].p1;
            indiceMaiorNota = x;
        }
    }
    
    cout << "Aluno com maior nota na Prova 1: " << notasAlu[indiceMaiorNota].nome << " - Nota: " << maiorNota << endl;

    double maiorMedia = (notasAlu[0].p1 + notasAlu[0].p2 + notasAlu[0].p3) / 3.0;
    double menorMedia = maiorMedia;

    for(int i = 1; i < 5; i++) {
        double media = (notasAlu[i].p1 + notasAlu[i].p2 + notasAlu[i].p3) / 3.0;
        if(media > maiorMedia) {
            maiorMedia = media;
        }
        if(media < menorMedia) {
            menorMedia = media;
        }
    }

    cout << "Maior media geral: " << maiorMedia << endl;
    cout << "Menor media geral: " << menorMedia << endl;
    
    return 0;
}