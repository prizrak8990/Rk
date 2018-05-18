#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Введите количество пременных:" << endl;
    cin >> n;
    int* mas=new int[n];
    cout << "Введите пременные:" << endl;
    for(int i=0;i<n;i++) {
        cin >> a;
        mas[i] = a;
    }
    for(int i=0;i<n;i++)
        if(a[i]==0 && a[i+1]==1)
            cout << "I-тое значение равно: " << i << endl;
    return 0;
}
