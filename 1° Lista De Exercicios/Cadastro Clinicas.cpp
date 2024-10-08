// Elabore um pragrama em C++, que fa�a um cadastro e consultas de pacientes de uma determinada clinica. E no final fa�a uma consulta de paciente por cpf e mostre todos os dados
// Dados dos pacientes: CPF, nome,  email, celular. Utilize duas fun��es

#include <iostream>
#include <locale.h>

using namespace std;

struct Pacientes {
	string nome;
	string email;
	string datanasc;
	string cpf;
};

	Pacientes cadastro;

void Novusuario() {
	
	 cout << "Nome: ";
    cin.ignore();
    getline(cin, cadastro.nome);
    
    cout << "Email: ";
    getline(cin, cadastro.email);
    
    cout << "Data Nascimento: ";
    getline(cin, cadastro.datanasc);
    
    cout << "CPF: ";
    getline(cin, cadastro.cpf);
}

void consultarPaciente(string cpfConsulta){
	
	if (cadastro.cpf == cpfConsulta) {
		cout << "CPF: " << cadastro.cpf << endl;
        cout << "Nome: " << cadastro.nome << endl;
        cout << "Email: " << cadastro.email << endl;
        cout << "Data Nascimento: " << cadastro.datanasc << endl;
	} else {
        cout << "Paciente n�o encontrado." << endl;
    }
}

int main(){

	setlocale(LC_ALL,"portuguese");
	
while (true) {
        cout << "\nEscolha uma op��o:\n";
        cout << "1. Cadastrar paciente\n";
        cout << "2. Consultar paciente por CPF\n";
        cout << "3. Sair\n";
        int opcao;
        cin >> opcao;
        
        switch (opcao) {
            case 1:
                Novusuario();
                break;
		case 2: {
                string cpf;
                cout << "Informe o CPF do paciente para consulta: ";
                cin >> cpf;
                consultarPaciente(cpf);
                break;
            }
            case 3:
                cout << "Saindo do programa." << endl;
                return 0;
            default:
                cout << "Op��o inv�lida. Tente novamente." << endl;
                break;
		}
	}

	return 0;	
}
