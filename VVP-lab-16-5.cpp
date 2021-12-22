#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Задача 5. \nДан массив A размера N. \nВывести вначале его элементы с нечетными номерами в порядке возрастания номеров, \nа затем — элементы с четными номерами в порядке убывания номеров" << endl;
	int n, a, i;
	cout << "Введите N: "; cin >> n;
	int* arr = new int[n];
	for ( i = 0; i < n; i++) {
		cout << "arr[" << i << "] = "; cin >> arr[i];
	}
	cout << "Все числа с четным номером: " << endl;
	for (i = 0; i < n; i++) {
		if (i % 2 == 0) {
			cout << "arr[" << i << "] = " << arr[i] << endl;

		}
	}
	cout << "Все числа с нечетным номером: " << endl;
	for (i = n; i >= 1; i--) {
		if (i % 2 != 0) {
			cout << "arr[" << i << "] = " << arr[i] << endl;

		}
	}
}
