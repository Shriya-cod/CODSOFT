#include <iostream>
using namespace std;

int main(){
    char op;
    float a,b;

    cout <<"Enter operator: +,-,*,/:";
    cin >> op;

    cout <<"Enter operands:";
    cin >> a >> b;

    switch(op) {
        case '+':
        cout << a << '+' << b << '=' << a+b;
        break;

        case '-':
        cout << a << '-' << b << '=' << a-b;
        break;

        case '*':
        cout << a << '*' << b << '=' << a*b;
        break;

        case '/':
        cout << a << '/' << b << '=' << a/b;
        break;

        default:
        cout << "Invalid operator!";
        break;
    }
    return 0;
}

    

