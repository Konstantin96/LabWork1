#include <stdio.h>

#include <iostream>

#include <locale.h>

#include <time.h>

#include <Windows.h>

#include<ctime>
#define sizeArr 20


using namespace std;

unsigned short int nz;





void main()

{

	setlocale(LC_ALL, ".1251");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	while (true)

	{

		srand(time(0));

		cout << "������� ����� �������, ��� ������ ������� 0 ";

		cin >> nz;

		if (nz == 0)

		{

			break;

		}

		else if (nz == 1)

		{
			/*��������, ���������, ������� ��������� ������� ����� �� 6 �������. ������������ ������ ������� ����� �� ������ �����*/
			int sum, prib = 0;
			for (int i = 1; i <= 6; i++)
			{
				cout << "Vvedite summu za " << i << " mesyac :";
				cin >> sum;
				prib += sum;
			}
			cout << "Pribyl' =" << prib << endl;

		}

		else if (nz == 2)
		{
			/*�������� ���������, ������� ������� ���������� ������ � �������� �������*/
			int mas[7];

			cout << "Massiv" << endl;
			for (int i = 0; i < 7; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << endl;
			}
			cout << "Massiv v obtratnom poryadke" << endl;


			for (int i = 6; 0 <= i; i--)
			{
				cout << mas[i] << endl;
			}

		}

		else if (nz == 3)
		{
			/*� ���������� �������, ����������� ���������� �������, ���������� ����������� � ������������ ��������*/
			int mas[10], min = 0, max = 0;
			cout << "Massiv" << endl;
			for (int i = 0; i < 10; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << endl;
			}
			min = mas[0];
			max = mas[0];
			cout << "Min element = ";
			for (int i = 0; i < 10; i++)
			{
				if (mas[i] < min)
				{
					min = mas[i];
				}
			}
			cout << min << endl;

			cout << "Max element = ";
			for (int i = 0; i < 10; i++)
			{
				if (mas[i] > max)
				{
					max = mas[i];
				}
			}
			cout << max << endl;
		}

		else if (nz == 4)
		{
			/*������������ ������ ������� ����� �� ��� (12 �������). ���������� ���������� �����, � ������� ������� ���� ����������� � �����, � ������� ������� ���� ����������.*/
			int mas[12], ch = 0, min = 0, max = 0;
			cout << "Pribyl' za god:" << endl;
			for (int i = 0; i < 12; i++)
			{
				ch++;
				mas[i] = 10000 + rand() % 109000;
				cout << ch << " mesyac. Pribyl' = " << mas[i] << endl;
			}
			min = mas[0];
			max = mas[0];
			cout << "Min pribyl' = ";
			for (int i = 0; i < 10; i++)
			{
				if (mas[i] < min)
				{
					min = mas[i];
				}
			}
			cout << min << endl;

			cout << "Max pribyl' = ";
			for (int i = 0; i < 10; i++)
			{
				if (mas[i] > max)
				{
					max = mas[i];
				}
			}
			cout << max << endl;

		}

		else if (nz == 5)
		{
			/*�������� ���������, ����������� ���������� ����������� ������� ����� ����� ������� ��������.*/\
				cout << "Do sortirivki" << endl;


			int arrNumber[sizeArr];



			for (int i = 0; i <= sizeArr - 1; i++)

			{

				arrNumber[i] = 1 + rand() % 99;

			}
			for (int i = 0; i <= sizeArr - 1; i++)

			{

				cout << "arr[" << i << "] = " << arrNumber[i] << "\n";

			}



			cout << endl;

			cout << "Posle sortirivki" << endl;



			for (int i = 0; i < sizeArr - 1; i++)

			{

				for (int j = (sizeArr - 1); j > i; j--)

				{

					if (arrNumber[j - 1] > arrNumber[j])

					{

						int temp = arrNumber[j - 1];

						arrNumber[j - 1] = arrNumber[j];

						arrNumber[j] = temp;

					}

				}

				cout << "arr[" << i << "] = " << arrNumber[i] << "\n";

			}
		}

		else if (nz == 6)
		{
			/*3.	*������������ ������ ����� ������ �������������, ������ ������� ���������� � ������, ���������� ��������� �������� ������������� (�������� � ����� ���� ������).*/
			double sum = 0;
			for (int i = 0; i < 5; i++)
			{
				double temp;
				cin >> temp;
				sum += temp;
			}
			cout << sum;
		}
		else if (nz == 7)
		{
			/*������������ ������ ������� ����� �� ��� (12 �������). �����  ������������ ������ �������� (��������, 3 � 6 � ����� ����� 3-� � 6-� �������).
			���������� ���������� �����, � ������� ������� ���� ����������� � �����, � ������� ������� ���� ���������� � ������ ���������� ���������.*/
			const char Month[][12] = { "������","�������","����","������","��� �","����","����","������","��������","�������","������","�������" };

			int profit[12];
			int begin = 0;
			int end = 0;
			int max = begin;
			int min = begin;


			for (int i = 0; i < 12; i++)
			{

				profit[i] = 10000 + rand() % 109000;
				cout << "������� � " << Month[i] << "= " << profit[i] << endl;
			}

			cout << "\n";
			cout << "������� ��������� �������� ������� �� 1 �� 12 �: ";
			cin >> begin;
			cout << "������� �������� �������� ������� �� 1 �� 12 �: ";
			cin >> end;



			for (int i = begin; i <= end; i++)
			{
				cout << " " << profit[i];

				if (profit[max] <= profit[i])
					max = i;

				if (profit[min] >= profit[i])
					min = i;
			}

			cout << "\n������������ ������� � �������� ��������� ����� � �" << Month[max] << "\t" << profit[max] << "\n\n";
			cout << "\n����������� ������� � �������� ��������� ����� � �" << Month[min] << "\t" << profit[min] << "\n\n";


		}

		else if (nz == 8)
		{
			/*� ���������� �������, ��������� �� N ������������ ����� ���������:
�	����� ������������� ���������.
�	������������ ���������, ����������� ����� min � max ����������.
�	������������ ��������� � ������� ��������.
�	�����  ���������, ����������� ����� ������ � ��������� �������������� ����������.
*/
			cout << "Vvedite razmer massiva:";
			int n, a;
			cin >> n;
			cout << "Vedite" << n << "elements:\n";
			for (int i = 0; i < n; i++)
			{
				cout << "a[" << i + 1 << "]: ";
				cin >> a;
			}
			int negativ = 0;
			for (int i = 0; i < n; i++)
			{
				if (a < 0)
				{
					negativ += a;
				}
			}
			cout << "Summa otricatel'nyh elementov = " << negativ << endl;
			int max = a, i_max, min = a, i_min;
			for (int i = 1; i < n; i++)
			{
				if (a > max)
				{
					max = a;
					i_max = i;
				}
				if (a < min)
				{
					min = a;
					i_min = i;
				}
			}
			i_min++;
			i_max--;
			int mult = 1;
			for (int i = i_min; i < i_max; i++)
			{
				mult *= a;
			}
			cout << "������������ ���������, ����������� ����� min � max ���������� =" << mult << endl;
			mult = 1;
			for (int i = 1; i < n; i += 2)
			{
				mult *= a;
			}
			cout << "������������ ��������� � ������� �������� =" << mult << endl;
			for (int i = 0; i < n; i++)
			{
				if (a < 0)
				{
					i_min = i;
					break;
				}
			}
			for (int i = n - 1; i > i_min; i--)
			{
				if (a < 0)
				{
					i_max = i;
					break;
				}
			}
			i_min++;
			mult = 1;
			for (int i = i_min; i < i_max; i++)
			{
				mult *= a;
			}
			cout << "�����  ���������, ����������� ����� ������ � ��������� �������������� ���������� =" << mult << endl;
		}

		else if (nz == 9)
		{
			/*�������� ���������, ���������� ��������������� �������� ������ ������� �������� 10 ��������� � 2 ������� �������� 5 ��������� ������*/
			int mas[10], masa[5], masb[5];
			cout << "Massiv 1" << endl;
			for (int i = 0; i < 10; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << endl;
			}
			cout << endl;
			cout << "Massiv 2" << endl;
			for (int i = 0; i < 5; i++)
			{
				masa[i] = mas[i];
				cout << masa[i] << endl;
			}
			cout << endl;
			cout << "Massiv 3" << endl;
			for (int i = 5; i < 10; i++)
			{
				masb[i] = mas[i];
				cout << masb[i] << endl;
			}


		}

		else if (nz == 10)
		{
			/*17.	*�������� ���������, ���������� ��������������� �������� 2-� �������� �������� 5 ��������� ������ � ���� ������ �������� 10 ���������.*/
			int mas[10] = { 0 }, masa[5], masb[5];
			cout << "Massiv 1" << endl;
			for (int i = 0; i < 5; i++)
			{
				masa[i] = 1 + rand() % 99;
				cout << masa[i] << endl;
			}
			cout << endl;
			cout << "Massiv 2" << endl;
			for (int i = 0; i < 5; i++)
			{
				masb[i] = 1 + rand() % 99;
				cout << masb[i] << endl;
			}
			cout << endl;
			cout << "Massiv 3" << endl;
			for (int i = 0; i < 5; i++)
			{
				mas[i] = masa[i];
			}
			for (int i = 5; i < 10; i++)
			{
				mas[i] = masb[i];
				cout << mas[i] << endl;
			}

		}

		else if (nz == 11)
		{
			/*� ���������� ������� ����� ����� ���������:
a)	����� ���� ��������� �������
b)	������� �������������� ���� ��������� �������
c)	����������� �������
d)	������������ �������
*/
			int mas[5][5], sum = 0, sr = 0, min = 0, max = 0;
			cout << "Massiv" << endl;
			for (int i = 0; i < 5; i++)
			{
				mas[i][5] = 1 + rand() % 99;
				for (int j = 0; j < 5; j++)
				{
					mas[i][j] = 1 + rand() % 99;
					cout << mas[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "Summa vseh elementov massiva = ";
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					sum += mas[i][j];
				}
			}
			cout << sum << endl;
			cout << endl;
			cout << "Srednee arifm = ";

			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					sr = sum / mas[i][j];
				}
			}
			cout << sr << endl;
			cout << endl;
			cout << "Min element = ";
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; i++)
				{
					if (mas[i][j] < min)
					{
						min = mas[i][j];
					}
				}cout << endl;
				cout << "Min element = ";
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 5; i++)
					{
						if (mas[i][j] < min)
						{
							min = mas[i][j];
						}
					}
				}
				cout << min << endl;
				cout << endl;
			}
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "Max element = ";
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; i++)
				{
					if (mas[i][j] > min)
					{
						max = mas[i][j];
					}
				}
			}
			cout << max << endl;
			cout << endl;
		}
		else if (nz == 12)
		{
			/*��������� ���������� ������ 8�8 ���������� 0 � 1 ��������� �������, �� ���, ����� ����� ���� � ��� ���� ������, ��� ��������.*/
			int array[8][8];
			int null = 0, ed = 0;

			for (int i = 0; i <8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					array[i][j] = rand() % 2;
					cout <<" " <<array[i][j];
					if (array[i][j] == 0)
						null++;
					if (array[i][j] == 1)
						ed++;

				}

				cout << "\n\n";

			}

			cout << " ���������� ����� � ������� �����: " << null;
			cout << "\n ";

			cout << "���������� ������ � ������� �����: " << ed;
			cout << "\n\n ";



		}
	}
}