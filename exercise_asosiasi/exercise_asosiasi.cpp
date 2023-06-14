#include <iostream>
#include <vector>
using namespace std;

class Penerbit {
public: 
	string namaPenerbit;
};

class Pengarang {
public:
	string namaPengarang;
	vector<string> bukuDikarang;
	Penerbit* penerbit;
};

class Buku {
public:
	string judulBuku;
	Pengarang* pengarang;
};

int main()
{
	Penerbit gamaPress;
	gamaPress.namaPenerbit = "GAMA PRESS";

	Penerbit intanPariwara;
	intanPariwara.namaPenerbit = "INTAN PARIWARA";

	Pengarang joko;
	joko.namaPengarang = "Joko";
	joko.penerbit = &gamaPress;

	Pengarang lia;
	lia.namaPengarang = "Lia";
	lia.penerbit = &gamaPress;

	Pengarang Giga;
	Giga.namaPengarang = "Giga";
	Giga.penerbit = &gamaPress;

	Pengarang asroni;
	asroni.namaPengarang = "Asroni";
	asroni.penerbit = &intanPariwara;

	Pengarang giga;
	giga.namaPengarang = "Giga";
	giga.penerbit = &intanPariwara;


	Buku fisika;
	fisika.judulBuku = "Fisika";
	fisika.pengarang = &joko;
	joko.bukuDikarang.push_back(fisika.judulBuku);


	Buku algoritma;
	algoritma.judulBuku = "Algoritma";
	algoritma.pengarang = &joko;
	joko.bukuDikarang.push_back(algoritma.judulBuku);

	Buku basisData;
	basisData.judulBuku = "Basis Data";
	basisData.pengarang = &lia;
	lia.bukuDikarang.push_back(basisData.judulBuku);

	Buku dasarPemogramman;
	dasarPemogramman.judulBuku = "Dasar Pemogramman";
	dasarPemogramman.pengarang = &asroni;
	asroni.bukuDikarang.push_back(dasarPemogramman.judulBuku);

	Buku matematika;
	matematika.judulBuku = "Matematika";
	matematika.pengarang = &giga;
	giga.bukuDikarang.push_back(matematika.judulBuku);

	Buku multimedia1;
	multimedia1.judulBuku = "Multimedia 1";
	multimedia1.pengarang = &giga;
	giga.bukuDikarang.push_back(multimedia1.judulBuku);

	//membuat output pertama
	cout << "Daftar pengarang pada penerbit Gama Press :" << endl;
	for (Pengarang* pengarang : { &joko, &lia, &giga }) {
		if (pengarang->penerbit->namaPenerbit == "Gama Press") {
			cout << pengarang->namaPengarang << endl;
		}
	}
	cout << "\n";

	//memuta output ke2
	cout << "Daftar pengarang pada penerbit Intan Pariwara :" << endl;
	for (Pengarang* pengarang : { &asroni, &giga }) {
		if (pengarang->penerbit->namaPenerbit == "Intan Pariwara") {
			cout << pengarang->namaPengarang << endl;
		}
	}
	cout << "\n";

	//membuat output ke3
	cout << "Daftar penerbit yang diikuti Giga :" << endl;
	for (Penerbit* penerbit : { &gamaPress, &intanPariwara }) {
		if (penerbit->namaPenerbit == "Gama Press", "Intan Pariawara") {
			cout << penerbit->namaPenerbit << endl;
		}
	}
	cout << "\n";

	//membuat output ke4
	cout << "Daftar buku yang dikarang Joko :" << endl;
	for (string buku : joko.bukuDikarang) {
		cout << buku << endl;
	}
	cout << "\n";

	//membuat output ke5
	cout << "Daftar buku yang dikarang Lia :" << endl;
	for (string buku : lia.bukuDikarang) {
		cout << buku << endl;
	}
	cout << "\n";

	//membuat output le6
	cout << "Daftar buku yang dikarang Asroni :" << endl;
	for (string buku : asroni.bukuDikarang) {
		cout << buku << endl;
	}
	cout << "\n";

	//membuat output ke 7
	cout << "Daftar buku yang dikaramg Giga :" << endl;
	for (string buku : giga.bukuDikarang) {
		cout << buku << endl;
	}

}

