#include <iostream>
#include <iomanip>

using namespace std;

class operasi{
	public:
		void iteratif(int uang_saku);
		
	private:
		int uang_saku;
		int out[12];
		int tabungan = 0, total = 0, bulan;
};

void operasi::iteratif(int uang_saku){
	cout << "Masukan Banyak Bulan :";
	cin >> bulan;
	cout << "" <<endl;
	
	for (int i = 0; i < bulan; i++){
		cout << "Maukan Pengeluaran Bulan KE-" << i + 1 << " : ";
		cin >> out[i];
		tabungan += uang_saku - out[i];
		total +=out[i];
		cout << "| Bulan | Uang Saku | Pengeluaran | Total Pengeluaran | Tabungan |" << endl;
		cout << "|";
		cout << setiosflags(ios::right) << setw(4) << i + 1 << " | ";
		cout << setiosflags(ios::right) << setw(9) << uang_saku << " | ";
		cout << setiosflags(ios::right) << setw(11) << out[i] << " | ";
		cout << setiosflags(ios::right) << setw(17) << total << " | ";
		cout << setiosflags(ios::right) << setw(10) << tabungan << " | " << endl << endl;
	}
}

int main(){
	operasi x;
	int uang_saku;
	cout << "Masukan Uang Saku ANda Tiap Bulan :";
	cin >> uang_saku;
	x.iteratif(uang_saku);
}
