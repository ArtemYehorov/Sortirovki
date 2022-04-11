#include<iostream>
#include<Windows.h>
#include<time.h>
#include<algorithm>

using namespace std;

template <typename T1>

//void Bubble(T1 arr[], const int SIZE)
//{
//	int num = 0;
//	for (int i = 0; i < SIZE - 1; i++)
//	{
//		for (int j = SIZE - 1; j > i; j--)
//		{
//			if (arr[j] < arr[j - 1])
//			{
//				num = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = num;
//			}
//		}
//	}
//}
//
//int main()
//{
//	srand(time(0));
//	const int SIZE = 20;
//	int arr[SIZE];
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 14;
//		cout << arr[i] << ", ";
//	}
//	cout << endl;
//	Bubble(arr, SIZE);
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << arr[i] << ",";
//	}
//}

//void Vstavka(T1 arr[], const int SIZE)
//{
//	T1 num = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		num = arr[i];
//		for (int j = i - 1; j >= 0 && arr[j] > num; j--)
//		{
//			arr[j + 1] = arr[j];
//			arr[j] = num;
//		}
//	}
//}
//
//int main()
//{
//	srand(time(0));
//
//	const int SIZE = 20;
//	int arr[SIZE];
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 21 + (-5);
//		cout << arr[i] << ",";
//	}
//
//	Vstavka(arr, SIZE);
//	cout << endl;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << arr[i] << ",";
//	}
//}


//void choice(T1 arr[], const int SIZE)
//{
//	sort(arr, arr + SIZE);
//}
//
//int main()
//{
//	const int SIZE = 10;
//	int arr[SIZE] = { 1,5,2,11,87,12,10,90,7,100 };
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << arr[i] << ", ";
//	}
//
//	choice(arr, SIZE);
//	cout << endl;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << arr[i] << ", ";
//	}
//}