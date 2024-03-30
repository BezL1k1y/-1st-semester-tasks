#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    unsigned long long a,b,c,d,a1,b1;
    bool flag;
    std::string BinA{""};
    std::string BinB{""};
    std::string BinC{""};
    std::string BinD{""};
    cout <<"Введите 2 числа(A и B):\n"<<"A = ";
    cin >> a;
    cout <<"B = ";
    cin >> b;
    flag = 0;
    if (a > 1844674407370955161 || b > 1844674407370955161)
    {
        flag = 1;
    }
    c = a + b;
    a1 = a;
    b1 = b;
    if (a >= b)
    {
        d = a - b;
    }
    if (b > a)
    {
        d = b - a;
    }

    //a -> binA
    while (a > 0)
    {
        BinA += std::to_string(a%2);
        a /= 2;
    }
    reverse(BinA.begin(),BinA.end());
    if (BinA == "")
    {
        BinA = "0";
    }
    if(flag != 1)
    {
        cout <<"Число A в двоичной системе = "<< BinA <<'\n';
    }
    //b -> binB
    while (b > 0)
    {
        BinB += std::to_string(b%2);
        b /= 2;
    }
    reverse(BinB.begin(),BinB.end());
    if (BinB == "")
    {
        BinB = "0";
    }
    if(flag != 1)
    {
        cout <<"Число B в двоичной системе = "<< BinB <<'\n';
    }
    //c - binD
    while (c > 0)
    {
        BinC += std::to_string(c%2);
        c /= 2;
    }
    reverse(BinC.begin(),BinC.end());
    if (BinC == "")
    {
        BinC = "0";
    }
    if(flag != 1)
    {
        cout <<"Сумма чисел A и B в двоичной системе = "<< BinC <<'\n';
    }
    //d - binD
    while (d > 0)
    {
        BinD += std::to_string(d%2);
        d /= 2;
    }
    reverse(BinD.begin(),BinD.end());
    if (BinD == "")
    {
        BinD = "0";
    }
    if (a1 >= b1 & flag != 1)
    {
        cout <<"Разность чисел A и B в двоичной системе = "<< BinD <<'\n';
    }
    if (a1 < b1 & flag != 1)
    {
        cout <<"Разность чисел A и B в двоичной системе = -"<< BinD <<'\n';
    }
    if(flag == 1)
    {
        cout <<"Error, too much value";
    }
    return 0;
}
