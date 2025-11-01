// Упорядкувати числовий масив, що вміщує не більш 20 дійсних чисел, за неспаданням методом «бульбашки». 
#include <iostream>

using namespace std;
int main()
{
    int N;                       // Кількість елементів масиву
    double a[20];                                     // Масив
    double b;
    cout << "N = ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "\nInitial array\n";    // Виводимо початкові дані
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    for (int i = 0; i < N - 1; i++)       // Метод "бульбашки"
        for (int j = N - 1; j > i; j--)
            if (a[j] < a[j - 1])
            {
                b = a[j];
                a[j] = a[j - 1];
                a[j - 1] = b;
            }
    cout << "\nResultant array\n";
    for (int i = 0; i < N; i++) // Виводимо результуючий масив
        cout << a[i] << " ";
}
