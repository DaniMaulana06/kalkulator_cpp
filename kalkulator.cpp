#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

	int a;
	float b, hasil;
	char aritmatika;
	int pilihan;

	cout << "1. penjumlahan" << endl;
	cout << "2. perkalian" << endl;
	cout << "3. pembagian" << endl;
	cout << "4. pengurangan" << endl;

	label_continue:
	label_ngulang:
	cout << "pilih operasi yang akan dilakukan: ";
	cin >> pilihan;
	if (pilihan > 4)
	{
		cout << "operasi yang anda masukan tidak ditemukan" << endl;
		goto label_continue;
	}

	cout << "masukan angka pertama: ";
	cin >> a;
	cout << "masukan angka kedua: ";
	cin >> b;

	switch (pilihan)
	{
	case 1:
		hasil = a + b;
		cout << "hasil: " << hasil << endl;
		break;

	case 2:
		hasil = a * b;
		cout << "hasil: " << hasil << endl;
		break;

	case 3:
		hasil = a / b;
		cout << "hasil: " << hasil << endl;
		break;

	case 4:
		hasil = a - b;
		cout << "hasil: " << hasil << endl;
		break;
	}

	char pilihan1;
	cout<<"lanjutkan?(y/n): ";
	cin>> pilihan1 ;
	if ((pilihan1 == 'y') | (pilihan1 == 'Y')){
		goto label_ngulang;
	}else if((pilihan1 == 'n') | (pilihan1 == 'N')){
		cout<<"selesaii..";
	}
	getch();
	cin.get();
	return 0;
}
// void verifikasi()
// {

// 	int a, b;

// label_continue:
// 	cout << "masukan pin: ";
// 	cin >> a;
// 	cout << "masukan ulang pin: ";
// 	cin >> b;

// 	if (a == b)
// 	{
// 		cout << "pin yang anda masukan benar" << endl;
// 	}
// 	else if (a != b)
// 	{
// 		cout << "pin yang anda masukan salah" << endl;
// 		goto label_continue;
// 	}
// 	cout << "selesai";
// }
// int getOption();