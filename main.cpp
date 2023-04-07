#include <iostream>
#include <cmath>

int main() {
    int n, i, sum = 0;
    std::cout << "Ingrese un numero entero positivo: ";
    std::cin >> n;
    
    for (i = 1; i <= n; i++) {
        sum += pow(i, 2);
    }
    
    std::cout << "La sumatoria de los cuadrados de 1 hasta " << n << " es: " << sum << std::endl;
    return 0;
}
