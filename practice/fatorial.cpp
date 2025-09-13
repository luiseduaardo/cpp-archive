#include <iostream>

using namespace std;

int factorial(int num);

int main() {
    int n;

    cout << "Digite um número aleatório: ";
    cin >> n;

    cout << "O fatorial de " << n << " é igual a " << factorial(n);

    return 0;
}

int factorial(int num) {
    if (num == 0) return 1;
    else return num * factorial(num - 1);

}