// Lab_4_1_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

void countMarks(int **grades, float *overall, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		float sum = 0;
		for (int j = 1; j <= grades[i][0]; j++)
		{
			sum += grades[i][j];
		}
		overall[i] = sum / grades[i][0];
	}
	float sum = 0;
	for (int i = 0; i < rows; i++)
	{
		sum += overall[i];
	}
	overall[rows] = sum / rows;
}

int main(void)
{
	int rows;
	cout << "Hello! Input the grades, ple\n";
	cin >> rows;
	int **arr;
	arr = new int *[rows];
	float *countedGrades = new float[rows + 1];

	for (int r = 0; r < rows; r++)
	{
		int i;
		cin >> i;
		arr[r] = new int[i + 1];
		arr[r][0] = i;
		for (int c = 1; c <= i; c++)
			cin >> arr[r][c];
	}
	countMarks(arr, countedGrades, rows);
	cout << "-------------------\n";
	for (int r = 0; r < rows; r++)
	{
		cout << "Course " << r + 1 << ": final " << fixed << std::setprecision(2) << countedGrades[r] << ", grades : ";
		for (int c = 1; c <= arr[r][0]; c++)
			cout << arr[r][c] << " ";
		cout << endl;
	}
	cout << "Overall final: " << countedGrades[rows];

	for (int r = 0; r < rows; r++)
		delete[] arr[r];
	delete[] arr;
	delete[] countedGrades;
	return 0;
}