#include <iostream>
using namespace std;
int G56(int, int);
#include <ctime>
#include <cstdlib>
int main() {
    int a;
    int b;
    G56(a, b);
}
int G56(int a, int b)
{
    srand(time(NULL));
    a = (rand() % 10000) + 1;  //随机生成两个相加减乘除的两个数a，b
    b = (rand() % 10000) + 1;
    int c = (rand() % 4) + 1;   //随机生成运算符号 
    switch (c)
    {
        int sum, sum1, t;
    case 1:cout << a << '+' << b << '='; cin >> sum;
        if (a + b != sum) { cout << "false"; return false; }
        else { cout << "true"; return true; }
        break;
    case 2:if (a < b) { t = a; a = b; b = t; }cout << a << '-' << b << '='; cin >> sum;
        if (a - b != sum) { cout << "false"; return false; }
        else { cout << "true"; return true; }
        break;
    case 3:cout << a << '*' << b << '='; cin >> sum;
        if (a * b != sum) { cout << "false"; return false; }
        else { cout << "true"; return true; }
        break;
    case 4:if (a < b) { t = a; a = b; b = t; }cout << a << '/' << b << '='; cin >> sum; cout << "余数="; cin >> sum1;
        if (a / b == sum && a % b == sum1) { cout << "true"; return true; }
        else { cout << "false"; return false; }
        break;
    }
}

