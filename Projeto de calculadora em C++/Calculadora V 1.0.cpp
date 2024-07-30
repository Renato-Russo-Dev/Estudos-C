#include <iostream>

using namespace std;

int main() {
    int opcao; // Usar int para a escolha da operação
    float num1, num2, resultado;
    bool continuar = true;

    while (continuar) {
        // Menu de opções
        cout << "Escolha uma operacao: " << endl;
        cout << "1. Soma (+)" << endl;
        cout << "2. Subtracao (-)" << endl;
        cout << "3. Multiplicacao (*)" << endl;
        cout << "4. Divisao (/)" << endl;
        cout << "5. Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        // Verifica a opção escolhida
        switch (opcao) {
            case 1:
                cout << "Digite os dois numeros a serem somados: ";
                cin >> num1 >> num2;
                resultado = num1 + num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case 2:
                cout << "Digite os dois numeros a serem subtraidos: ";
                cin >> num1 >> num2;
                resultado = num1 - num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case 3:
                cout << "Digite os dois numeros a serem multiplicados: ";
                cin >> num1 >> num2;
                resultado = num1 * num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case 4:
                cout << "Digite os dois numeros a serem divididos: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "Resultado: " << resultado << endl;
                } else {
                    cout << "Nao e possivel dividir por zero." << endl;
                }
                break;
            case 5:
                continuar = false; // Sai do loop while
                break;
            default:
                cout << "Opcao invalida! Tente novamente." << endl;
        }
    }

    cout << "Calculadora executada com sucesso !!" << endl;

    return 0;
}
