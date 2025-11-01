// Упорядкувати числовий масив, що вміщує не більш 20 дійсних чисел, за неспаданням методом «бульбашки». 

#include <iostream>
using namespace std;

int main()
{
    const int MAX_SIZE = 20;       // Максимальна кількість елементів
    double a[MAX_SIZE];            // Масив дійсних чисел
    int N;                         // Кількість елементів масиву

    // --- Введення розміру масиву ---
    cout << "Enter the number of elements (1–20): ";
    cin >> N;

    if (N < 1 || N > MAX_SIZE) {
        cout << "Error: number of elements must be between 1 and 20.\n";
        return 1;
    }

    // --- Введення елементів масиву ---
    cout << "\nEnter array elements:\n";
    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    // --- Виведення початкового масиву ---
    cout << "\nInitial array:\n";
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;

    // --- Сортування методом бульбашки ---
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    // --- Виведення відсортованого масиву ---
    cout << "\nSorted array (ascending order):\n";
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
