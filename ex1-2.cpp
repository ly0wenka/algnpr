// Дано натуральне число n ( ), дійсне число w і масив з n дійс-них чисел. Видалити з масиву елемент, що є найближчим до числа w.
#include <iostream>
#include <cmath>     // для функції fabs()
using namespace std;

int main()
{
    const int MAX_SIZE = 20;    // Максимальна кількість елементів у масиві
    double arr[MAX_SIZE];       // Масив дійсних чисел
    double w;                   // Задане число
    int n;                      // Кількість елементів у масиві

    cout << "Enter w: ";
    cin >> w;
    cout << "Enter number of elements (n): ";
    cin >> n;

    // --- Введення елементів масиву ---
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // --- Вивід початкового масиву ---
    cout << "\nInitial array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // --- Пошук елемента, найближчого до w ---
    int indexToRemove = 0;                 // Номер елементу, який потрібно видалити
    double minDistance = fabs(w - arr[0]); // Мінімальна відстань до w

    for (int i = 1; i < n; i++)
    {
        double distance = fabs(w - arr[i]); // Поточна відстань
        if (distance < minDistance)
        {
            minDistance = distance;
            indexToRemove = i;              // Запам'ятовуємо позицію ближчого елемента
        }
    }

    // --- Видалення знайденого елемента ---
    for (int i = indexToRemove + 1; i < n; i++)
        arr[i - 1] = arr[i]; // Зсуваємо елементи вліво

    n--; // Зменшуємо розмір масиву

    // --- Вивід результату ---
    cout << "\nResulting array";
    if (n == 0)
        cout << " is empty.";
    else
    {
        cout << ":\n";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }

    cout << endl;
}
