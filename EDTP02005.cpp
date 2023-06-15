#include <iostream>

 use namespace std; 



struct Funcionario {
    string nome;
    int prontuario;
    double salario;
    Funcionario* prox;
};

// Função para adicionar um funcionário no início da lista
 void AdicFunc(Funcionario* head, string nome, int prontuario, double salario) 

{
    Funcionario* novoFuncionario = new Funcionario;
    novoFuncionario->nome = nome;
    novoFuncionario->prontuario = prontuario;
    novoFuncionario->salario = salario;
    novoFuncionario->prox = head;
    head = novoFuncionario;
}

// excluir um funcionário pelo prontuário
void removeFunc(Funcionario* head, int prontuario) {
    if (head == null) {
 cout << "A lista está vazia." <<endl;
        return;
    }

    if (head->prontuario == prontuario) {
        Funcionario* temp = head;
        head = head->prox;
        delete temp;
        cout << "Funcionário removido com sucesso." <<endl;
        return;
    }
Funcionario* func = head;
    Funcionario* prev = null;
    while (func != null && func->prontuario != prontuario) {
        prev = func;
        func = func->prox;
    }

    if (func == null) {
        cout << "Funcionário não encontrado." <<endl;
    } else {
        prev->next = func->prox;
         func;
        cout << "Funcionário removido com sucesso." <<endl;
    }
}

// listar todos os funcionários
  void listFuncionarios(Funcionario* head) {
    if (head == null) {
        cout << "A lista está vazia." << endl;
        return;
    }

    const Funcionario* func = head;
    while (func != null) {
        cout << "Nome: " << func->nome << endl;
        cout << "Prontuário: " << func->prontuario <<endl;
        cout << "Salário: " << func->salario << endl;
        cout << endl;
     func = func->prox;
    }
}


void limparLista(Funcionario* head) {
    while (head != null) {
        Funcionario* temp = head;
        head = head->prox;
        delete temp;
    }
}

int main() {
    Funcionario* head = null;
    int opcao;

    do {
        cout << "Selecione uma opção:" << endl;
        cout << "1. Inserir funcionário" << endl;
        cout << "2. Excluir funcionário" << endl;
        cout << "3. Listar funcionários" << endl;
        cout << "4. Sair" << endl;
        cout << "Opção: ";

    } while (int opcao != 0)


    
    
        