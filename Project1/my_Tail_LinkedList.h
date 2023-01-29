#include<iostream>
using namespace std;
int main() {
	int R, C;
	int AR1[5], BR1[5], Sum1[5], Sub1[5];
	int AR2[5], BR2[5], Sum2[5], Sub2[5];
	int AR3[5], BR3[5], Sum3[5], Sub3[5];
	int AR4[5], BR4[5], Sum4[5], Sub4[5];
	int AR5[5], BR5[5], Sum5[5], Sub5[5];

	//
r:
	cout << "Both Matrix have same Rows and Columns\n";
	cout << "Input no. of Rows(max: 5): "; cin >> R;
	cout << "Input no. of Col(max: 5): "; cin >> C;
	if ((C > 5 || R > 5) || (C < 1 || R < 1)) {
		cout << "Invalide Input, Row or Col must be less then 5 and greater than 0\n";
		goto r;
	}
	if (C != R) {
		cout << "No. of Rows isnt equal to no. of Column\nSo no Addition or Subtraction can be performe \n";
		goto r;
	}
	//Input Matirx A
	int temp = R;
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << "Matrix A [1][" << i + 1 << "]: ";
			cin >> AR1[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << "Matrix A [2][" << i + 1 << "]: ";
			cin >> AR2[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << "Matrix A [3][" << i + 1 << "]: ";
			cin >> AR3[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << "Matrix A [4][" << i + 1 << "]: ";
			cin >> AR4[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << "Matrix A [5][" << i + 1 << "]: ";
			cin >> AR5[i];
		}
		temp--;
	}

	//Input Matirx B
	temp = R;
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << "Matrix B [1][" << i + 1 << "]: ";
			cin >> BR1[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << "Matrix B [2][" << i + 1 << "]: ";
			cin >> BR2[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << "Matrix B [3][" << i + 1 << "]: ";
			cin >> BR3[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << "Matrix B [4][" << i + 1 << "]: ";
			cin >> BR4[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << "Matrix B [5][" << i + 1 << "]: ";
			cin >> BR5[i];
		}
		temp--;
	}
	//Sum
	temp = R;
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			Sum1[i] = AR1[i] + BR1[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			Sum2[i] = AR2[i] + BR2[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			Sum3[i] = AR3[i] + BR3[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			Sum4[i] = AR4[i] + BR4[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			Sum5[i] = AR5[i] + BR5[i];
		}
		temp--;
	}
	//Print Sum
	cout << "Printing Sum:\n";

	temp = R;
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << Sum1[i] << ' ';
		}
		cout << endl;
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << Sum2[i] << ' ';
		}
		cout << endl;
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << Sum3[i] << ' ';
		}
		cout << endl;
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << Sum4[i] << ' ';
		}
		cout << endl;
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << Sum5[i] << ' ';
		}
		cout << endl;
		temp--;
	}

	//SubtrARtion

	temp = R;
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			Sub1[i] = AR1[i] - BR1[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			Sub2[i] = AR2[i] - BR2[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			Sub3[i] = AR3[i] - BR3[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			Sub4[i] = AR4[i] - BR4[i];
		}
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			Sub5[i] = AR5[i] - BR5[i];
		}
		temp--;
	}
	//Print SubtrARtion
	cout << "Printing SubtrARtion:\n";

	temp = R;
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << Sub1[i] << ' ';
		}
		cout << endl;
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << Sub2[i] << ' ';
		}
		cout << endl;
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << Sub3[i] << ' ';
		}
		cout << endl;
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << Sub4[i] << ' ';
		}
		cout << endl;
		temp--;
	}
	if (temp > 0) {
		for (int i = 0; i < C; i++) {
			cout << Sub5[i] << ' ';
		}
		cout << endl;
		temp--;
	}
	//Multiply


	system("pause");
	return 0;
}