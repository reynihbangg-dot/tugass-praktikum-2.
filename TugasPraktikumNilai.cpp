#include <iostream>

using namespace std;
int main() {

	double nilai;

	cout << "=Nilai Penentu Naik Kelas=" << endl;
	cout << "masukan nilai:" << endl;
	cin >> nilai;

	cout << "\nhasil :" << endl;
	if (nilai > 89) {
		cout << "Nilai  : A" << endl;
		cout << "Naik kelas" << endl;
 }
	else if(nilai > 80 && nilai <=89){
		cout << "Nilai  : B" << endl;
		cout << "Naik kelas" << endl;
	}
	else if (nilai > 70 && nilai <= 80) {
		cout << "nilai  :C" << endl;
		cout << "Naik kelas" << endl;
	}
	else if (nilai > 60 && nilai <= 70) {
		cout << "nilai  :D" << endl;
		cout << "Tinggal kelas" << endl;
	}
	else if (nilai > 0 && nilai <= 60) {
		cout << "nilai  :E" << endl;
		cout << "Tinggal kelas" << endl;
	}
}