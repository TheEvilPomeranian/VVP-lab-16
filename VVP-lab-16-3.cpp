#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Задача 3. \nДаны целые числа N (> 2), A и B. \nСформировать и вывести целочисленный массив размера N, первый элемент которого равен A, \nвторой равен B, а каждый последующий элемент равен сумме всех предыдущих" << endl;
	int n = 0, a, b, s;
	int *arr = new int[n];
	cout << "Введите N: "; cin >> n;
	cout << "Введите A: "; cin >> a;
	cout << "Введите B: "; cin >> b;
	if (n > 2) {
		arr[0] = a;
		arr[1] = b;
		arr[2] = arr[0] + arr[1];
		cout << arr[0] << endl;
		cout << arr[1] << endl; 
		cout << arr[2] << endl;
		s = arr[0] + arr[1];
		for (int i = 3; i < n; i++) {
			arr[i] = arr[i - 1] + s;
			cout << arr[i] << endl;
			s = arr[i - 1] + s;
		}
	}
	else {
		cout << "Введено неверное значение для N!" << endl;
	}
	return 0;

}
