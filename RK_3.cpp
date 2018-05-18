#include <iostream>
using namespace std;

struct List{
    int value=0;
    List* next = nullptr;
};


int main() {
    int k,i;
    int j = 0;
    int n = 1;
    List a;
    List *current = &a;
    cout << "Введите элементы списка:" << endl;
    while (n!=0) {
        j++;
        cin >> n;
        current->value = n;
        current->next = new List;
        current = current->next;
    }
    current = &a;
    cout << "Введите i" << endl;
    cin >> i;
    k=j-i-1;
    for(i=0; i<k;i++)
        current = current->next;
    cout << "Значение i-того элемента с конца равно: " << current->value;
    return 0;
}
