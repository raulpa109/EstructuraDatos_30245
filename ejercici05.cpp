#include <iostream>
using namespace std;

void factorial(int *p , long *r) {
    *r =1;
    for (int i = 1; i <= *p; i++)
    
     *r =*r * i ;
    
    
    
}
int main() {
    int num;
    long  res;
    cout << "Ingrese un numero: ";
    cin >> num;

    factorial(&num, &res);
    cout << "El factorial de "  << res << endl;
    system("pause");
    return 0;


    
}