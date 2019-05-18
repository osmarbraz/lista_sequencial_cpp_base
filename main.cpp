/**
 * Implementação base de Lista Sequencial de forma estruturada.
 *
 */

//Declaração de bibliotecas
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//Declaração dos métodos
int leitura();
bool inserirFim(int lista[], int valor, int &n);
string listar(int lista[], int n);
bool estaCheia(int n);
bool estaVazia(int n);
int getQuantidade(int n);

/**
 * Tamanho máximo da lista.
 */
const int TAMANHO_LISTA = 100;

/**
 * Realiza a leitura dos dados dos nós.
 *
 * @return O valor lido.
 */
int leitura() {
    cout << "\nDigite um valor: ";
    int valor = 0;
    cin >> valor;
    return valor;
}

/**
 * Insere um Nó no final da lista.
 *
 * @param lista Lista dos Nós.
 * @param valor Um novo valor de um nó a ser inserido na lista.
 * @param n Quantidade de elementos da lista. 
 * @return Verdadeiro ou falso se conseguiu incluir o novo valor.
 */
bool inserirFim(int lista[], int valor, int &n) {
    if (n < TAMANHO_LISTA) {
        //Insere o novo valor na posição n.
        lista[n] = valor;
        //Incrementa a quantidade de Nós.
        n = n + 1;
        return true;
    } else {
        cout << "Inserir Fim - Lista cheia." << endl;
        return false;
    }
}

/**
 * Lista os dados da lista.
 *
 * @param lista Lista dos Nós.
 * @param n Quantidade de Nós da lista.
 * @return Uma String com os dados da lista.
 */
string listar(int lista[], int n) {
    //String de retorno
    string temp = "";
    for (int i = 0; i < n; i++) {
        temp = temp + to_string(i) + "-" + to_string(lista[i]) + "\n";
    }
    return temp;
}

/**
 * Retorna se a lista está cheia.
 * @param n Quantidade de Nós da lista.
 * @return Verdadeiro ou falso se a lista está cheia.
 */
bool estaCheia(int n) {
    return (n == TAMANHO_LISTA);
}

/**
 * Retorna se a lista esta vazia.
 * @param n Quantidade de Nós da lista.
 * @return Verdadeiro ou falso se a lista está vazia.
 */
bool estaVazia(int n) {
    return n == 0;
}

/**
 * Retorna a quantidade de Nós da lista.
 * @param n Quantidade de Nós da lista.
 * @return A quantidade de Nós da lista.
 */
int getQuantidade(int n) {
    return n;
}

/**
 * Programa principal.
 *
 * @param args
 * @param argv
 */
int main(int argc, char** argv) {
    /**
     * Declaração da lista
     */
    int lista[TAMANHO_LISTA];
    // Controla o menu da lista
    int opcao = -1;

    /**
     * Tamanho atual da lista.
     */
    int n = 0;

    //Laço do menu de opções
    while (opcao != 99) {
        //Monta o menu de opções        
        cout << "\n\t### Lista Sequencial ###\n"
                << "Selecione a opção desejada:\n"
                << " 1- Listar Nós\n"
                << " 2- Inserir Nó no início\n"
                << " 3- Inserir Nó em uma posição especifica\n"
                << " 4- Inserir Nó no fim\n"                
                << " 5- Inserir Nó ordenado\n"
                << " 6- Remover Nó do início\n"
                << " 8- Remover Nó de uma posição específica\n"
                << " 7- Remover Nó do fim\n"                
                << " 9- Remover Nó pelo valor\n"
                << "10- Procurar o dado de uma posição específica\n"
                << "11- Procurar a posição de um dado\n"
                << "12- Mostrar a quantidade de Nós\n"
                << "13- Está cheia?\n"
                << "14- Está vazia?\n"
                << "99- Sair\n"
                << " Opcao:";
        cin >> opcao;
        switch (opcao) {
            case 1:
            {
                if (estaVazia(n)) {
                    cout << "\nLista vazia!" << endl;
                } else {
                    cout << "\nListagem \n" << listar(lista, n) << endl;
                }
                break;
            }
            case 2:
            {

                break;
            }
            case 3:
            {
                //Preenche o valor do dado
                int dado = leitura();
                if (inserirFim(lista, dado, n) == true) {
                    cout << "\nNó inserido no fim com Sucesso!" << endl;
                } else {
                    cout << "\nNó não inserido no fim!" << endl;
                }
                break;
            }
            case 4:
            {

                break;
            }
            case 5:
            {

            }
            case 6:
            {

            }
            case 7:
            {

            }
            case 8:
            {

            }
            case 9:
            {

            }
            case 10:
            {

            }
            case 11:
            {

            }
            case 12:
            {
                cout << "\nQuantidade de Nós na lista : " << getQuantidade(n) << endl;
                break;
            }
            case 13:
            {
                cout << "\nLista está cheia : " << estaCheia(n) << endl;
                break;
            }
            case 14:
            {
                cout << "\nLista está vazia : " << estaVazia(n) << endl;
                break;
            }
            //Opção de saída do programa
            case 99:
            {
                cout << "\nSaindo do programa!";
                break;
            }
                //Opção inválida do menu
            default:
            {
                cout << "\nOpção inválida!";
                break;
            }
        }//Fim switch
    }//Fim while
    return 0;
}//Fim main