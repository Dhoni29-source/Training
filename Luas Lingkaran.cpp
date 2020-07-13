#include <iostream> // 	Library yg dibutuhkan untuk menggunakan fungsi cin, cout dll 
// #include <stdio.h> // Library yg dibutuhkan untuk menggunakan fungsi scantf, printf dll
using namespace std; // Perintah yg digunakan untuk mendeklarasikan bahwa kita menggunakan semua fungsi yg ada di namespace std

main()
{
	// Deklarasi variabel berada di dalam main(), artinya tidak global dan hanya bisa difungsikan disini saja
	const float pi = 3.14;
	float r;
	int L;
	
	// cin untuk input (nilai ke variabel) dan cout untuk output (menampilkan) ke console.
	cout << "input r =  "; 
	cin >> r;
	
	// rumus Luas Lingkaran
	L = pi * r*r; 
	cout <<"Luas Lingkaran = ";
	cout << L; 
	cout << "cm^2";
}
