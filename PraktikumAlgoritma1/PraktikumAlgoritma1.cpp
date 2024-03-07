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
	for (int j = 0; j < n; j++) {				// Looping dengan j dimulai dari o hingga n-1
		cout << "Data ke-" << j + 1 << "; ";
		cout << a[j] << endl;					// Output ke layar
	}
	cout << endl;								// Output baris kosong


}

void bubbleSortArray() {		//Prosedur untuk mengurutkan array dengan metode buble sort
	int pass = 1;				//Step1

	for (pass; pass <= n - 1; pass++ ) {	// Looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j <= n - 1 - pass; j++) {	// Looping dengan j dimulai dari 0 hingga n-i
			if (a[j] > a[j + 1]) {					//Jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];					//Simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];					//Assign nilai a[j=1] ke a[j]
				a[j + 1] = temp;					//Assign nilai temp ke a[j=1]
			}
		}
	}
}

int main() {
	input();			//memangil read()
	bubbleSortArray();	//memangil bublesortarray ()
	display();			//Memangil display ()
	return 0;
}



