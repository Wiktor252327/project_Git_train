#include <iostream>

using namespace std;

int Policz(int a, int b){
    return a*b;
}


int main() {
    cout << "Hello, World!" << std::endl;
    cout << "Hello, World2!" << std::endl;
    cout << "W pierwszym branchu; 2+3=" << Policz(5,7) << std::endl;


    return 0;
}