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
		cout << "Введите номер задания - ";
		cin >> task;

	} while (task <=0 || task > 9);

	switch (task)
	{
		
		case 1:
		{
			cout << "Каждая бактерия делится на две в течение одной минуты.\n";
			cout << "В начальный момент имеется одна бактерия.\n";
			cout << "Составьте программу, которая рассчитывает количество\n";
			cout << "бактерий на заданное вами целое значение момента \n";
			cout << "времени (15 минут, 7 минут и т.п.) .\n";
			
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
			cout << "За " << t << " мин увеличится до " << b << endl;
			cout << "Количество убитых бактерий - " << k << endl;
		} break;
		
#pragma region TASK2

		case 2:
		{
			cout << "Составьте программу вывода на экран всех простых чисел, \n";
			cout << "не превосходящих заданного N. Простым называется натуральное \n";
			cout << "число больше единицы, имеющее только два делителя: единицу и само это число\n";
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
			cout << "последовательность 1, 1, 2, 3, 5, 8, 13, 21,  37, …\n";
			cout << "Составьте программу, позволяющую найти все числа Фибоначчи, меньшие заданного числа N.\n";
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
			cout << "Дано натуральное число n. Найти все числа меньшие Мр\n";
			cout << "числа Мерсенна. Число Мерсенна – это простое число, \n";
			cout << "представленное в виде Mp=2p–1,  где p – тоже простое число.\n";
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
			cout << "Два натуральных числа называют дружественными, \n";
			cout << "если каждое из них равно сумме всех делителей другого, \n";
			cout << "кроме самого этого числа. Найти все пары дружественных \n";
			cout << "чисел, лежащих в диапазоне от 200 до 300.\n";

			
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
			cout << "Остров Манхэттен был приобретен поселенцами за $24 в 1826 г. \n";
			cout << "Каково было бы в настоящее время состояние их счета, \n";
			cout << "если бы эти 24 доллара были помещены тогда в банк под 6% годового дохода?\n";

			int y = 1985 + rand() % 32;
			cout << "Год - " << y << endl;
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
			cout << "Написать программу проверки знания таблицы умножения. \n";
			cout << "Программа должна вывести 10 примеров и выставить оценку: \n";
			cout << "за 10 правильных ответов – «отлично», за 8 или 9 правильных ответов – «хорошо», \n";
			cout << "за 6 или 7 правильный ответов – «удовлетворительно», \n";
			cout << "остальные варианты – «плохо».\n";
			
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
				cout << "Отлично!!!" << endl;
			else if (mark == 8 || mark == 9)
				cout << "ХОРОШО" << endl;
			else if (mark == 6 || mark == 7)
				cout << "Удовлетворительно";
			else
				cout << "ПЛОХО" << endl;
		}
#pragma endregion




	}

}