#include <iostream>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "20220140193";
	mhs1.nama = "Shenn";
	mhs1.alamat = "Cirebon";
	mhs1.umur = 20;
}