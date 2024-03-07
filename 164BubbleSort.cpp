#include <iostream>							
using namespace std;						

int a[20];									//Deklarasi array a dengan ukuran 20
int n;										//Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {								//Prosedur untuk input
	while (true) {							//Looping
		cout << "Masukkan banyaknya element pada array : ";				//output ke layar
		cin >> n;							//Input dari pengguna 
		if (n <= 20)						//Jika n kurang dari atau sama dengan 20
			break;							//Keluar dari loop
		else {								//Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";	//Output ke layar
		}
	}