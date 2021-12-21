#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout<< "Задача 1. \nДано целое число N (> 0). \nСформировать и вывести целочисленный массив размера N, \nсодержащий N первых положительных нечетных чисел: 1, 3, 5, . . . "<<endl;
	int n = 0, j = 1; 
	int *arr = new int[n];
	cout <<"Введите N: "; cin >> n;
	for (int i = 0; i < n; i++) {
		arr[i] = j;
		j += 2;
		cout << arr[i] << endl;
	}
	return 0;
}
