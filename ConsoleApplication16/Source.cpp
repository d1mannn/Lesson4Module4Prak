#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int task;
	srand(time(NULL));

	do
	{
		cout << "������� ����� ������� - ";
		cin >> task;

	} while (task <=0 || task > 9);

	switch (task)
	{
		
		case 1:
		{
			cout << "������ �������� ������� �� ��� � ������� ����� ������.\n";
			cout << "� ��������� ������ ������� ���� ��������.\n";
			cout << "��������� ���������, ������� ������������ ����������\n";
			cout << "�������� �� �������� ���� ����� �������� ������� \n";
			cout << "������� (15 �����, 7 ����� � �.�.) .\n";
			
			int b = 1 + rand() % 8000;
			int t = 10 + rand() % 24;
			int k = 0;
			cout << b << endl;
			for (int i = 1; i <= t; i++)
			{
				if (b > 3000)
				{
					k += b - (500 + rand() % 1500);
				}
				b *= 2;

			}
			cout << "�� " << t << " ��� ���������� �� " << b << endl;
			cout << "���������� ������ �������� - " << k << endl;
		} break;
		
#pragma region TASK2

		case 2:
		{
			cout << "��������� ��������� ������ �� ����� ���� ������� �����, \n";
			cout << "�� ������������� ��������� N. ������� ���������� ����������� \n";
			cout << "����� ������ �������, ������� ������ ��� ��������: ������� � ���� ��� �����\n";
			int n = 5 + rand() % 1000;
			cout << n << endl;
			for (int i = 1; i <=n; i++)
			{
				if (n % i == 0)
				{
					cout << i << endl;
				}
			}


		} break;
#pragma endregion

#pragma region TASK3

		case 3:
		{
			cout << "������������������ 1, 1, 2, 3, 5, 8, 13, 21,  37, �\n";
			cout << "��������� ���������, ����������� ����� ��� ����� ���������, ������� ��������� ����� N.\n";
			int n = 5 ;//1500 + rand() % 1050;
			int a = 1;
			int b = 0;
			int total = 0;
			int month = 0;
			for (int i = 0; i <= n; i++)
			{	
				

				
				a += b;
				cout << a << endl;
				month++;
				cout << "-------------------" << month << endl;
				
				b += a;			
				cout << b << endl;
				month++;
				cout << "-------------------" << month << endl;
				total += a + b;
				
			} cout << total << endl;


		} break;
#pragma endregion

#pragma region TASK4

		case 4:
		{
			cout << "���� ����������� ����� n. ����� ��� ����� ������� ��\n";
			cout << "����� ��������. ����� �������� � ��� ������� �����, \n";
			cout << "�������������� � ���� Mp=2p�1,  ��� p � ���� ������� �����.\n";
			int n = 200 + rand() % 800;
			int p = 10 + rand() % 10;
			int mr = 2 * p - 1;
			cout << " NNNN " << n << endl;
			cout << " PPPP " << p << endl;
			for (int i = 1; i <= n; i++)
			{
				if (i < mr)
				{
					cout << i << endl;
				}
				else
				{
					break;
				}
			}			

		} break;
#pragma endregion

#pragma region TASK5

		case 5:
		{
			cout << "��� ����������� ����� �������� ��������������, \n";
			cout << "���� ������ �� ��� ����� ����� ���� ��������� �������, \n";
			cout << "����� ������ ����� �����. ����� ��� ���� ������������� \n";
			cout << "�����, ������� � ��������� �� 200 �� 300.\n";

			
			int n = 2;
			int sumi = 0;
			for (int i = 1; i <= 1000; i++)
			{	
				for (int j = 1; i <= i; j++)
				{
					if (i % j == 0)
					{
						sumi += i;
						cout << j << endl;
						cout << sumi << endl;
					}
				}
				n++;
			}


		} break;
#pragma endregion


#pragma region TASK7

		case 7:
		{


		} break;
#pragma endregion

#pragma region TASK8

		case 8:
		{
			cout << "������ ��������� ��� ���������� ����������� �� $24 � 1826 �. \n";
			cout << "������ ���� �� � ��������� ����� ��������� �� �����, \n";
			cout << "���� �� ��� 24 ������� ���� �������� ����� � ���� ��� 6% �������� ������?\n";

			int y = 1985 + rand() % 32;
			cout << "��� - " << y << endl;
			float sum = 24;
			for (int i = 1985; i <= y; i++)
			{
				sum += (sum * 6) / 100;
				cout << sum << endl;
			}
			
		} break;
#pragma endregion


#pragma region TASK9
		case 9:
		{
			cout << "�������� ��������� �������� ������ ������� ���������. \n";
			cout << "��������� ������ ������� 10 �������� � ��������� ������: \n";
			cout << "�� 10 ���������� ������� � ��������, �� 8 ��� 9 ���������� ������� � �������, \n";
			cout << "�� 6 ��� 7 ���������� ������� � ������������������, \n";
			cout << "��������� �������� � ������.\n";
			
			int answer, mark = 0, i = 0;
			do
			{	
				int n = 1 + rand() % 8;
				int n2 = 1 + rand() % 8;
				i++;
				cout << n << " * " << n2 << " = ";
				cin >> answer;
				if (answer == (n * n2))
					mark++;
			} while (i < 10);
			if (mark == 10)
				cout << "�������!!!" << endl;
			else if (mark == 8 || mark == 9)
				cout << "������" << endl;
			else if (mark == 6 || mark == 7)
				cout << "�����������������";
			else
				cout << "�����" << endl;
		}
#pragma endregion




	}

}