#include <iostream>
using namespace std;

int main()
{
    int n;                // Кількість елементів масиву
    double arr[100];      // Масив дійсних чисел
    int count;            // Кількість убуваючих ділянок
    bool newSegment;      // Прапорець початку нової ділянки

    // --- Введення кількості елементів ---
    cout << "Enter number of elements (n): ";
    cin >> n;

    // --- Введення елементів масиву ---
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // --- Пошук убуваючих ділянок ---
    count = 0;
    newSegment = true;  // спочатку готові до нової ділянки

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1]) // елемент убуває
        {
            if (newSegment)       // початок нової убуваючої ділянки
            {
                count++;
                newSegment = false;
            }
        }
        else
        {
            newSegment = true;    // кінець убуваючої ділянки
        }
    }

    // --- Вивід результату ---
    cout << "Count of decreasing segments = " << count << endl;
}
