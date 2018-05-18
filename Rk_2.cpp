#include <iostream>
using namespace std;

struct List{
int value=0;
List* next = nullptr;
};


int main() {
    int i=0;
    int n=1;
    List a;
    List* current = &a;
    cout << "Введите элементы списка:" << endl;
    while (n!=0) {
        i++;
        cin >> n;
        current->value = n;
        current->next = new List;
        current = current->next;
    }
    auto *y=new int[i-1];
    current = &a;
    i = 0;
    while(current->next!= nullptr){
        y[i]=current->value;
        current = current->next;
        i++;
    }
    current = &a;
    for( i ; i!=0 ; i-- ){
        current->value=y[i-2];
        current = current->next;
    }
    current = &a;
    while(current->next!= nullptr){
        cout << current->value << " ";
        current=current->next;
    }
}
