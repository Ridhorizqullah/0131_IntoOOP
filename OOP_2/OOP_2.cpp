#include <iostream>
using namespace std;

class BangunDatar {

	//akses modifier
	private:
		float panjang, lebar;
	public:
		float luas;

		void input() {

			cout << "masukan panjangnya = ";
			cin >> panjang;
			cout << "masukkan lebarnya = ";
			cin >> lebar;
		}

		float hitunganluas() {
			return panjang * lebar;
		}




};