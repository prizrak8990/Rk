#include <iostream>
using namespace std;

void pow(int a, int b){
    int res=1;
    if (a==2) {
        cout << (a << b-1);
        return;
    }
    for(int i=0; i < b; i++)
        res = res * a;
    cout << res << endl;
}

int main() {
    int a,b,c,d, med;
    cout << "Введите 3 элемента:" << endl;
    cin >> a >> b >> c;
    if (a<b) swap(a,b);
    if (a<c) swap(a,c);
    if (b<c) swap(b,c);
    med=b;
    cout << "Введите степень медианы:" << endl;
    cin >> d;
    pow (med,d);
    return 0;
}
