#include <iostream>							
using namespace std;						

int a[20];											//Deklarasi array a dengan ukuran 20
int n;											//Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {									//Prosedur untuk input
	while (true) {								//Looping
		cout << "Masukkan banyaknya element pada array : ";				//output ke layar
		cin >> n;								//Input dari pengguna 
		if (n <= 20)							//Jika n kurang dari atau sama dengan 20
			break;								//Keluar dari loop
		else {									//Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";	//Output ke layar
		}
	}
	cout << endl;								//Output baris kosong
	cout << "=====================" << endl;	//Output ke layar
	cout << "Masukkan Elemen Array" << endl;	//Output ke layar
	cout << "=====================" << endl;	//Output ke layar

	for (int i = 0; i < n; i++) {				//Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": ";	//Output ke layar
		cin >> a[i];							//Input dari pengguna
	}
}

void display() {								//Deklarasi untuk menampilkan hasil		
	cout << endl;								//Output baris kosong
	cout << "================================" << endl;	//Output ke layar
	cout << "Elemen Array Yang Telah Tersusun" << endl;	//Output ke layar
	cout << "================================" << endl;	//Output ke layar
	for (int j = 0; j < n; j++) {				//Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << j + 1 << ": ";	//Output ke layar
		cout << a[j] << endl;					//Output ke layar
	}
	cout << endl;								//Output baris kosong
}