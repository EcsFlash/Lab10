// Lab10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    /*char a, b, c;
    cin >> a;
    b = a + 1;
    c = a - 1;
    cout << "Current char number: " << (int)a << endl;
    cout << "Next char: " << b << endl;
    cout << "Previous char: " << c << endl;
    */
    char str[1000];
    char charf;
    bool flag = false;
    cin >> str;
    
    cin >> charf;
    int len = 0;
    for (int i = 0; i < sizeof(str); i++) {
        if (str[i] != '\0') {
            len += 1;
        }
        else {
            break;
        }
    }
    for (int i = 0; i < len; i++) {
        if (charf == str[i]) {
            flag = true;
            cout << i + 1 << endl;
            if (0 < i and i < (len - 1)) {
                cout << str[i - 1] << endl;
                cout << str[i + 1] << endl;
                break;
            }
            if (i == 0) {
                cout << "no symbols until there" << endl;
                cout << str[i + 1] << endl;
                break;
            }
            if (i == (len - 1)) {
                cout << str[i - 1] << endl;
                cout << "no symbols after there" << endl;
                break;
            }
            
        }
    }
    if (!flag) {
        cout << "No such symbol" << endl;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
