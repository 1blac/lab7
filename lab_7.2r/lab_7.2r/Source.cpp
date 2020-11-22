// Lab_7.2.cpp
// < ������ ������ ��������� >
// ����������� ������ � 7.2)
// ����������� ������������� ������ ����������� ��������.
// ������ 30
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int** a, const int n, const int Low, const int High, int i, int j);
void Print(int** a, const int n, int i);
void Sort(int** a, const int n);
int main()
{
	srand((unsigned)time(NULL));
	int n;
	cout << "n = "; cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];
	int Low = 16;
	int High = 97;
	Create(a, n, Low, High, 0, 0);
	Print(a, n, 0);
	Sort(a, n);
	Print(a, n, 0);

}
void Create(int** a, const int n, const int Low, const int High, int i,int j)
{
	if (i < n)
	{
		Create(a, n, Low, High, i + 1, j);

		if (j < n)
		{
			a[i][j] = Low + rand() % (High - Low + 1);
			Create(a, n, Low, High, i, j + 1);
		}
	}
       
			
			
}
void PrintRow(int** a, const int rowNo, const int N, int colNo)
{
	cout << setw(4) << a[rowNo][colNo];
	if (colNo < N - 1)
		PrintRow(a, rowNo, N, colNo + 1);
	else
		cout << endl;
}
void Print(int** a, const int n, int i)
{
	PrintRow(a, i, n, 0);
	if (i < n - 1)
		Print(a, n, i + 1);
	else
		cout << endl;
}

void Change(int** a, const int row, const int col, const int colCount)
{
	int tmp;
	tmp = a[row][col];
	a[row][col] = a[row + 1][col + 1];
	a[row + 1][col + 1] = tmp;
}
void Sort(int** a, const int n)
{
	for (int f = 0; f < n - 1; f++)
		for (int f = 0; f < n - 1; f++)
			if (a[f][f] > a[f + 1][f + 1])
				Change(a, f, f, n);
}
