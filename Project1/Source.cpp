#include<iostream>
using namespace std;
int main() {
	int R, C;
	int A[100], B[100], Sum[100], Sub[100], Mul[100] = { 0 };
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
	//input Matrix A
	int indexA = 0;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cout << "Matrix A [" << i << "][" << j << "]: ";
			cin >> A[indexA];
			indexA++;
		}
	}
	//input Matrix B
	cout << "****************************\n";
	int indexB = 0;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cout << "Matrix B [" << i << "][" << j << "]: ";
			cin >> B[indexB];
			indexB++;
		}
	}
	//output
	cout << "\n****************************\n";
	indexA = 0;
	cout << "Matrix A\n";
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cout<< A[indexA]<<"\t";
			indexA++;
		}
		cout << endl;
	}
	indexB = 0;
	cout << "\n****************************\n";
	cout << "Matrix B\n";
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cout << B[indexB] << "\t";
			indexB++;
		}
		cout << endl;
	}
	//SUM
	cout << "\n SUM \n";
	indexA = 0; indexB = 0;
	int SumIndex = 0;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			Sum[SumIndex] = A[indexA] + B[indexB];
			cout << Sum[SumIndex] << "\t";
			SumIndex++; indexA++; indexB++;
		}
		cout << endl;
	}
	//SUB
	cout << "\n SUBTRACTION \n";
	indexA = 0; indexB = 0;
	int SubIndex = 0;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			Sub[SubIndex] = A[indexA] - B[indexB];
			cout << Sub[SubIndex] << "\t";
			SubIndex++; indexA++; indexB++;
		}
		cout << endl;
	}
	//MUL

	//output
	int IndexMul = 0;
	for (int i = 0; i < 100; i++)Mul[i] = 0;
	cout << "\n****************************\n";
	int R1 = R, C2 = C,C1=C;
	int var1 = 0;
	for (int i = 0; i < R1; i++) { //Rows of first Matrix
		
		for (int j = 0; j < C2; j++) { //Col of Secound Matrix
		
			int var = j;
			for (int k = 0; k < C2; k++) {//Col or Rows 
				Mul[IndexMul]=A[k+var1] * B[var]+ Mul[IndexMul];
				var = var + C2;
			}
			IndexMul++;
		}
		var1 = var1 + C1;
	}

	//

	cout << "\n****************************\n";
	IndexMul = 0;
	cout << "Mul\n";
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cout << Mul[IndexMul] << "\t";
			IndexMul++;
		}
		cout << endl;
	}
	return 0;
}
	
	
