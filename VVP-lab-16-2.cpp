#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "\nЗадача 2. \nДано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. \nСформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A*D, A*D2 , A*D3 , . . ." << endl;
	int n = 0, a, d;
	int* arr = new int[n];
	cout << "Введите N: "; cin >> n;
	cout << "Введите A: "; cin >> a;
	cout << "Введите D: "; cin >> d;
	for (int i = 0; i < n; i++) {
		arr[i] = a * pow(d, i);
		cout << arr[i] << endl;
	}
	return 0;
}
