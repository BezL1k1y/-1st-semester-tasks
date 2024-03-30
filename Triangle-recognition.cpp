#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Введите длины трех сторон треугольника меньше |1.7e19|: ";
    if (!(cin >> a >> b >> c) or cin.peek() != '\n') {
        cout << "Ошибка ввода\n";
        return 1;
    }
    if (a <1.7e-19 or b <1.7e-19 or c <1.7e-19){
        cout << "Ошибка ввода\n";
        return 1;
    }

    if (a <1.7e-19 or b <1.7e-19 or c <1.7e-19){
        cout << "Ошибка ввода\n";
        return 1;
    
    if (a > 0 and b > 0 and c > 0 and a + b > c and a + c > b and b + c > a) {
        if (a == b and b == c) {
            cout << "Треугольник равносторонний\n";
        }else if (a == b or b == c or a == c) {
            if (a*a + b*b == c*c or a*a + c*c == b*b or b*b + c*c == a*a) {
                cout << "Треугольник равнобедренный и прямоугольный\n";
            }else if((a*a + b*b > c*c) and (a*a + c*c > b*b) and (b*b + c*c > a*a)){
                cout << "Треугольник равнобедренный и остроугольный\n";
            }else{
                cout << "Треугольник равнобедренный и тупоугольный\n";
            }
        }else{
            if (a*a + b*b == c*c or a*a + c*c == b*b or b*b + c*c == a*a) {
                cout << "Треугольник прямоугольный\n";
            }else if ((a*a + b*b > c*c) and (a*a + c*c > b*b) and (b*b + c*c > a*a)){
                cout << "Треугольник остроугольный\n";
            }else{
                cout <<"Треугольник тупоугольный\n";
            }
        }
    }else{
        cout << "Из сторон нельзя построить треугольник\n";
    }

    return 0;
}
