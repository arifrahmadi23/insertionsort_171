#include <iostream>
using namespace std;

int arr[20];								// Membuat Array dengan panjang data 20
int n;										// Membuat Variable inputan n

void input() {				// Procedure Input
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array : "; // Membuat Inputan jumlah element Array
		cin >> n;									// Memanggil variable inputan n

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 elemen.\n"; // menampilkan Pesan jika data lebih dari 20
		}
	}
	cout << endl;									// Membuat jarak per baris program
	cout << "======================" << endl;		// Membuat tampilan susuna data element array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;


	for (int i + 0; i < n; i++)						// Mengunnakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";		// Memasukan atau menginputkan nilai data n
		cin >> arr[i];								// Menyimpan nilai data n kedalam array arr
	}
}

