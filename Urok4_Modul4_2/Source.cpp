#include <iostream>;
#include <stdio.h>;
#include <locale.h>;
#include <math.h>;
using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");

	int N1 = 0;

OsnProgramma:

	cout << "������� ����� ������ \n";
	cout << "����� ����� �� ��������� ������� 0 \n";
	cout << "� ";
	cin >> N1;

	if (N1 != 0) {
		while (N1 < 0 | N1 > 7)
		{
			cout << "�� ����� �������� ����� ������� \n";
			cout << "������� ����� ������ ������ \n";
			cout << "����� ����� �� ��������� ������� 0 \n";
			cout << "� ";
			cin >> N1;
		}

		if (N1 == 1) {
			int X = 6;
			int i = 0;
			int Y[10] = { 6, 6, 6, 6, 6, 6, 6, 6, 6, 6 };

			cout << "������� ������������������ �����" << endl;
			cout << "��� �� ����� ������� 0" << endl;

			while (i <= 10 && X != 0) 
			{
				cout << "X = ";
				cin >> X;
				Y[i] = X;
				i++;
			}

			i = 0;

			cout << "����� ������� � ��������� �� -5 �� 5: " << endl;

			while (i <= 10)
			{
				if (Y[i] > -5 && Y[i] < 5 && Y[i] != 0) 
				{
					cout << Y[i] << endl;
				}
				i++;
			}
			
			goto OsnProgramma;
		}
		else if (N1 == 2) {

			int M = 0;
			int N = 0;
			int i = 0;
			int j = 0;
			int X_st = 0;
			int S = 0;

			cout << "������� �������� ����� N = ";
			cin >> N;
			cout << "������� ������� M = ";
			cin >> M;

			for (i = 1; i <= N; i++) {
				X_st = i;
				for (j = 1; j <= (M-1); j++) {
					X_st = X_st*i;
				}
				S = S + X_st;
			}
			cout << "����� ����� �� 1 �� " << N << " ����������� � ������� " << M << " ����� " << S << endl;

			goto OsnProgramma;
		}
		else if (N1 == 3) {
			float S = 0.0; // ����������
			float A = 0.0; // ���������
			float B = 0.0; // �������
			float C = 3.0; // ���� ��� � %

			int i = 0;

			cout << "������� ����� ���������� S = ";
			cin >> S;
			cout << "������� �������� ����������� ��������� A = ";
			cin >> A;
			while (B<=A)
			{
				cout << "������� �������� ����������� �������� B = ";
				cin >> B;
				if (B <= A) {
					cout << "������� ������ ���� ������ ��������� ���������� �����";
				}
			}

			while (S > 0) {
				B = B*(1 + C / 100);
				S = S + A - B;
				i++;
			}

			cout << "������� ����� ������� " << i << " �������" << endl;
			goto OsnProgramma;
		}
		else if (N1 == 4) {
			int N;
			int M;
			int i;
			int Mass[4];

			Vvod_N:
			cout << "������� �������������� ����� N <= 9999: N = ";
			cin >> N;
			N1 = N;
			if (N > 9999) {
				cout << "���������� ��� ���";
				goto Vvod_N;
			}

			Vvod_M:
			cout << "������� ����� M <= 4: M = ";
			cin >> M;
			if (M > 4) {
				cout << "���������� ��� ���";
				goto Vvod_M;
			}

			for (i = 0; i <= 3; i++) {
				Mass[i] = N % 10;
				N = N / 10;
			}

			cout << "����� M ��������� ��c��" << endl;
			for (i = 0; i <= (M - 1); i++) {
				cout << Mass[i] << endl;
			}

			goto OsnProgramma;
		}
		else if (N1 == 5) {
			int i;
			int j;
			int Mass[4];
			int N;
			int Z = 0;

			cout << "����� ���������� �� 3-� ����" << endl;
			for (i=1; i <= 999; i++) {
				N = i;
				Z = 0;
				for (j = 0; j <= 2; j++) {
					Mass[j] = N % 10;
					Z = Z + pow(Mass[j], 3);
					N = N / 10;
				}
				if (i == Z && i > 99) {
					cout << Z << " = " << i << endl;
				}
			}

			cout << "����� ���������� �� 4-� ����" << endl;
			for (i = 1; i <= 9999; i++) {
				N = i;
				Z = 0;
				for (j = 0; j <= 3; j++) {
					Mass[j] = N % 10;
					Z = Z + pow(Mass[j], 4);
					N = N / 10;
				}
				if (i == Z && i > 999) {
					cout << Z << " = " << i << endl;
				}
			}

			goto OsnProgramma;
		}
		else if (N1 == 6) {
			int i;
			int j;
			int k;
			int N;
			int S;
			int Mass[3];

			cout << "����� ������� 7 � ����� ����� ������� 7" << endl;
			for (i = 1; i <= 999; i++) {
				N = i;
				S = 0;
				for (j = 0; j <= 3; j++) {
					Mass[j] = N % 10;
					N = N / 10;
					S = S + Mass[j];
				}
				if (i % 7 == 0 && S % 7 == 0) {
					cout << i << endl;
				}
			}
			

			goto OsnProgramma;
		}
		else if (N1 == 7) {
			int Mass[6];
			int X;
			int X1 = 0;
			int i = 0;
			int z = 1;
			int S = 0;

			cout << "������� ����� X = ";
			cin >> X;
			X1 = X;

			while (X1 > 0) {
				Mass[i] = X1 % 8;
				X1 = X1 / 8;
				i++;
			}
			i--;

			for (i; i >= 0; i--) {
				S = S + Mass[i] * z;
				z = z * 10;
			}
			cout << "����� " << X << " � ������������ ������� ����� " << S << endl;

			goto OsnProgramma;
		}
	}
	system("pause");
}