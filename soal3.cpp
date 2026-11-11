#include <iostream>
#include <string>

using namespace std;

#define MAX 100

char stack[MAX];
int top = -1;

void push(char value) {
    if (top < MAX - 1) {
        top++;
        stack[top] = value;
    }
}

char pop() {
    if (top >= 0) {
        char value = stack[top];
        top--;
        return value;
    }

}


int main() {
    string kata;

    cout << "Masukkan kata: ";
    cin >> kata;

    for (char c : kata) {
        push(c);
    }

    cout << "Kata dibalik: ";

    while (top >= 0) {
        cout << pop();
    }

    if(  stack == stack){
    cout << "KATA INI ADALAH PALINDROM\n";
} else  {
    cout << "BUKAN PALINDROM\n";
}

    cout << endl;

    return 0;
}