#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
using namespace std;

double f1(int num) {
    double rs = 1;
    for (int i = 1; i <= num; ++i) {
        rs *= i;
    }
    return rs;
}

double f2(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * f2(num - 1);
    }
}

double f3(int num) {
    return sqrt(2 * 3.14159 * num) * pow(num / exp(1), num);
}


int main(){
    setlocale(LC_ALL, "RU");
    int num,count;
    string num1;
    int flag;
    flag = 1;
    
    
    do {
        count = 0;
        cout << "Введите число(0-170) для возведения в факториал: ";
        cin >> num1;
        for(int i=0;i<num1.size();i++){
            if((48<=int(num1[i])) and (int(num1[i])<=57)){
                count += 1;
            }
        }
        if (num1.size() != count){
            flag = 2;
        }
        num = atoi(num1.c_str());
        if ((0 <= num) and (num < 171) and (flag != 2)){
            flag = 1;
        }else if((num == 2147483647) or (num == -2147483648) or (flag == 2)){
            cout << "Invalid Input\n";
            flag = 0;
        }else if((66<num<2147483647) or (-2147483648<num<0)){
            cout <<"Invalid Input\n";
            flag = 0;
        }
    }while(flag == 0);
    
    cout << fixed << setprecision(0);

    cout << f1(num) << "\n";
    
    cout << f2(num) << "\n";
    
    cout << f3(num) << "\n";
}
