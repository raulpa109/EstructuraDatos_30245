#include <iostream>
using namespace std;
int main() {
    

    int num[5] = {10, 25, 6, 4, 9};
    int *p = num;
    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento"<<*(p+i) << endl;
    }
    
    cout << "El valor de num es: " << num[0] << endl;
    cout << "El valor al deirecion de memoria de num: " <<&num[0]<< endl;
    cout << "El valor de *p es: " << p << endl;
    cout << "El valor de p es: " << p << endl;
    cout << "El valor apuntado por p es: " << *p << endl;
    system("pause");
    return 0;
}
