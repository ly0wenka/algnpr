// Дано натуральне число n ( ), дійсне число w і масив з n дійс-них чисел. Видалити з масиву елемент, що є найближчим до числа w.
#include <iostream>
using namespace std;
int main()
{
    double a[20], w;
    int N;
    int k;                // Номер елементу, що видалятиметься
    double Min;                         // Мінімальна відстань
    cout << "w = "; cin >> w;
    cout << "N = ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "\nInitial array\n";    // Виводимо початкові дані
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    k = 0;
    Min = abs(w - a[0]);
    for (int i = 1; i < N; i++)        // Перебираємо елементи
        if (fabs(w - a[i]) < Min)
        {
            k = i;            // Запам'ятовуємо номер елементу
            Min = fabs(w - a[i]);      // та відстань до нього
        }
    for (int i = k + 1; i < N; i++)
        a[i - 1] = a[i];                    // Зсув елементів
    N--;                            // Розмір масиву зменшився
    cout << "\nResultant array";
    if (N == 0)
        cout << " is empty";
    else
    {
        cout << ":\n";
        for (int i = 0; i < N; i++)   // Виводимо результуючий 
            cout << a[i] << " ";                      // масив
    }
}
