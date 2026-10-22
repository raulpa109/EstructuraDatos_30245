#include <iostream>
using namespace std;
int main() {
    

    int num =10;
     int *p =&num;
    cout << "El valor de num es: " << num << endl;
    cout << "El valor al deirecion de memoria de num: " <<&num<< endl;
    cout << "El valor de *p es: " << p << endl;
    cout << "El valor de p es: " << p << endl;
    cout << "El valor apuntado por p es: " << *p << endl;
    system("pause");
    return 0;
}
