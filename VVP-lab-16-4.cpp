#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Задача 4. \nДан массив A размера N. \nВывести его элементы в следующем порядке: A1, AN , A2, AN-1, A3, AN-2..." << endl;
	int n, a, Si =1, Sn =1;
	cout << "Введите N: "; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "arr[" << i << "] = "; cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cout << arr[i] << " ";
		}
		else if (i == 1) {
			cout << arr[n-1] << " ";
		}
		else if ((i % 2 == 0)&&(i>=2)) {
			cout << arr[i - Si]<< " ";
			Si++;
		}
		else if ((i % 2 != 0) && (i > 1)) {
			cout << arr[n - 1 - Sn] << " ";
			Sn++;
		}
	}
}
