#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2;
    char operacion;

    cout << "Ingrese la operacion (+, -, *, /, ^, r, l, n): ";
    cin >> operacion;

    switch (operacion) {
        // casos se implementarán en los siguientes pasos
        default:
            cout << "Operacion no reconocida.\n";
      case '+':
      cout << "Ingrese dos numeros: ";
      cin >> num1 >> num2;
      cout << "Resultado: " << num1 + num2 << endl;
       break;

     case '-':
     cout << "Ingrese dos numeros: ";
      cin >> num1 >> num2;
      cout << "Resultado: " << num1 - num2 << endl;
     break;
      case '*':
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;
    cout << "Resultado: " << num1 * num2 << endl;
    break;

    case '/':
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;
    if (num2 != 0)
        cout << "Resultado: " << num1 / num2 << endl;
    else
        cout << "Error: Division por cero\n";
    break;
      
    }

    return 0;
}
