// Дано натуральне число   ( ) і масив з   дійсних чисел. Визначити в цьому масиві кількість ділянок, на яких його елементи убувають.

#include <iostream>

using namespace std;
int main()
{
    int n, i;                    // Кількість елементів масиву
    double a[100];                                    // Масив
    int c;                                // Кількість ділянок
    bool flag;
    cout << "n = ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    c = 0;
    flag = true;
    for (i = 1; i < n; i++)    // Починаємо з другого елементу
        if (a[i] > a[i - 1])                    // Є зростання
        {
            if (flag)                          // Нова ділянка
            {
                c++;
                flag = false;
            }
        }
        else                                    // Незростання
            flag = true;
    cout << "Count = " << c << '\n';
}
