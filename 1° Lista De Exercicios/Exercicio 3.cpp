/*******************
 * **********************************************************

3 - Construa uma estrutura aluno com nome, número de matrículae curso. Leia do usuárioa 

informaçãode 5 alunos, armazene em vetor dessa estrutura e imprima os dados natela.

*******************************************************************************/
#include <iostream>
#include <locale.h>

using namespace std;

    struct alunos {
        string nome;
        int matricula;
        string curso;
    };

int main()
{
    setlocale(LC_ALL,"portuguese");
    
    alunos cadastro[5];
    
    for(int i=0; i<5; i++){
        
        cout << "Digite seu nome: ";
        cin >> cadastro[i].nome;
        cout << "Digite seu numero de matricula: ";
        cin >> cadastro[i].matricula;
        cout << "Digite seu curso: ";
        cin >> cadastro[i].curso;
        cout << endl;
    }

   cout << "Alunos cadastrados:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nome: " << cadastro[i].nome << endl;
        cout << "Matricula: " << cadastro[i].matricula << endl;
        cout << "Curso: " << cadastro[i].curso << endl;
        cout << "------------------------" << endl;
    }

    
    return 0;
}

