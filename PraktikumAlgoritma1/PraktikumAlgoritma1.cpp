#include <iostream>
using namespace std;


int a[20];	// Deklarasi array a dengan ukuran 20
int n;		// Deklarasi variabel n untuk menyimpan banyaknya element pada array


void input() {	// Procedure untuk input
	while (true) { //Looping
		cout << "Masukan banyaknya elemen pada array: ";	// Output ke layar
		cin >> n;		// Input dari pengguna 
		if (n <= 20)	// Jika n kurang dari atau sama dengan 20
			break;		// Keluar dari loop
		else {			// Jika n lebih dari 20
			cout << "\Array dapat mempunyai maksimal 20 element.\n";	// Output ke layar
		}
	}

	cout << endl;								// Output baris kosong 
	cout << "===================" << endl;		// Output ke layar
	cout << "Masukan Element Array" << endl;	// Output ke layar
	cout << "===================" << endl;		// Output ke layar

	for (int i = 0; i < n; i++) {				// Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << "; ";	// output baeis kosong
		cin >> a[i];							// input dari pengguna
	}
}

void display() {		// Prosedur untuk menampilkan hasil 
	cout << endl;		// Output baris kosong
	cout << "==============================" << endl;		// Output ke layar 
	cout << "Element Array yang telah disusun" << endl;		// Output ke layar
	cout << "==============================" << endl;		// Output ke layar
	for (int j = 0; j < n; j++) {
		cout << "Data ke-" << j + 1 << "; ";
		cout << a[j] << endl;
	}
	cout << endl;


}

