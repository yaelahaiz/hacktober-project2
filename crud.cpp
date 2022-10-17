#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int getOption();

int main(){
	int setOption = getOption();
	char is_continue;
	
	enum option {
		CREATE = 1,
		READ,
		UPDATE,
		DELETE,
		FINISH
	};
	while(setOption != FINISH){
		switch(setOption){
			case CREATE:
				cout << "Menambah data mahasiswa\n";
				break;
			case READ:
				cout << "Tampil data mahasiswa\n";
				break;
			case UPDATE:
				cout << "Ubah data mahasiswa\n";
				break;
			case DELETE:
				cout << "Hapus data mahasiswa\n";
				break;
			default:
				cout << "Pilihan Anda tidak ada\n";
				break;
		}
		
		label_continue:
			cout << "Lanjut (y/n) ? ";
			cin >> is_continue;
			if (is_continue == 'y' || is_continue == 'Y'){
				setOption = getOption();
			} else if (is_continue == 'n' || is_continue == 'N'){
				break;
			} else {
				goto label_continue;
			}	
	}
	
	cout << "Program Selesai. \n";
	
	cin.get();
	return 0;
}

int getOption(){
	int piliih;
	system("cls");
	cout << "\n Program CRUD data mahasiswa\n";
	cout << "===============================\n";
	cout << "[1]. Tambah data mahasiswa\n";
	cout << "[2]. Tampilkan data mahasiswa\n";
	cout << "[3]. Ubah data mahasiswa\n";
	cout << "[4]. Hapus data mahasiswa\n";
	cout << "[5]. Selesai\n";
	cout << "===============================\n";
	cout << "Pilih menu [1-5] : ";
	cin >> piliih;
	
	return piliih;
}
