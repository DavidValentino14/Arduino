# include <iostream> //input output
# include <string> //untuk string
# include <array> //membuat array atau suatu data banyak
# include <fstream> //mengakses file


using namespace std;



//Variable dan array yang digunakan
int pointer;
int*pointerPtr = &pointer;
int pilihan1, pilihan2, pilihan3, pilihan4, pilihan5; //menginputkan pilihan
int harga1, bayar; // hasil akhir perhitungan
int i = 2, j = 1, batas = 0, batas2 = 0, batas3 = 0, b = 0, c = 0, d = 0; //limit
string a, pilihanstring, pilihanstring2;//membuat pilihan
string tanggalhasil, datadata, datadata1;
array <string, 6> tanggal;
array <string, 51> pemesan;//untuk menginputkan nama pemesan
array <int, 3> harga_tipe_bus;//untuk menginputkan harga dari tipe bus
array <string, 3> harga_tipe_busStr{ "  ", "Bus Eksklusif", "Bus Ekonomi" };//menginputkan nama tipe bus
array <int, 9> harga_jarak_bus;//harga jarak
array <string, 9> harga_jarak_busStr{ "  ", "Solo - Ambarawa", "Solo - Boyolali", "Solo - Jakarta", "Solo - Jogja", "Solo - Klaten", "Solo - Semarang", "Solo - Seragen", "Solo - Surabaya" };//jaraknya
array <char, 3> kode_bus{ ' ', 'A', 'B' };
array <string, 9> kode_daerah{ "  ", "sowa", "soli", "sota", "soja", "soen", "song", "soen", "soya" };
array < double, 51> kode;//kode pemesan
array <string, 51> tempat_dudukStr;
array <string, 51> kode_tempat_duduk;
array <string, 51> kode_tempat_duduk2;
array <string, 4> jam{ "  ", "08:00", "12:00", "16:00" };
fstream struk;//mengiput ke data struk, yang akan diimport ke struk_pembayaran.txt
fstream kode1;
ifstream kode2;

//Fungsi-fungsi yang digunakan
void tanggal1();
void jam1();
void menu();
void jurusan();
void ya_tidak();
void jumlah_pemesanan();
void tiket();
void kembalian();


//Penjabaran fungsi
int main()
{
	kode1.open("kode_tempat_duduk.txt", ios::out);
	kode1.close();
	while (true)
	{
		if (b < 51)
		{
			kode[c] = b*0.01;

			b++;
			c++;
		}
		else if (b = 51)
		{
			break;
		}
	}
	menu();

	jurusan();

	cout << "\n\n                            TIKET                         \n\n";
	kode1.open("kode_tempat_duduk.txt", ios::in);
	for (batas2 = j; batas2 <= pilihan3; batas2++)
	{

		getline(kode1, datadata1);
		datadata1;
		cout << "=====================================================================================\n";
		cout << "                         GO BUS TAYO                         \n\n";
		cout << "KODE              : " << kode_bus[pilihan1] << '-' << kode_daerah[pilihan2] << kode[batas2] << '.' << endl;
		cout << "TANGGAL           : " << tanggalhasil << ".\n";
		cout << "JAM               : " << jam[pilihan5] << ".\n";
		cout << "KODE TEMPAT DUDUK : " << datadata1 << ".\n";
		cout << "NAMA              : " << pemesan[batas2] << ".\n";
		cout << "KELAS             : " << harga_tipe_busStr[pilihan1] << ".\n";
		cout << "HARGA             : Rp." << harga1 << ",00.\n";
		cout << "TUJUAN            : " << harga_jarak_busStr[pilihan2] << ".\n";
		cout << "=====================================================================================\n";

	}
	kode1.close();
	j = batas2;

	cout << "\n\ntotal harga yang harus di bayar : Rp." << harga1*pilihan3 << ",00\n";
	kembalian();

	struk.open("struk_pembayaran.txt", ios::out);
	struk << "GO BUS TAYO\n\n";
	struk << "Penumpang : \n";

	for (batas3 = 1; batas3 <= pilihan3; batas3++)
	{
		struk << batas3 << ". " << pemesan[batas3] << endl;
	}
	j = batas3;
	struk << "Tujuan Bus       : " << harga_jarak_busStr[pilihan2] << endl;
	struk << "Tipe Bus         : " << harga_tipe_busStr[pilihan1] << endl;
	struk << "total pembayaran : Rp." << harga1*pilihan3 << ",00" << endl;
	struk.close();

	cin.get();
	cin.get();
}


void menu()
{
	cout << "####################################################\n";
	cout << "#                                                  #\n";
	cout << "#                      GO BUS                      #\n";
	cout << "#                       TAYO                       #\n";
	cout << "#                                                  #\n";
	cout << "####################################################\n\n";
	tanggal1();

	cout << "\n\nPilihan tipe bus\n";
	cout << "1. Pesan Tiket Bus Eksklusif\n";
	cout << "2. Pesan Tiket Bus Ekonomi\n";
	harga_tipe_bus[0] = 0;
	while (true)
	{
		cout << "Masukkan Pilihan : ";
		cin >> pilihan1;

		if (pilihan1 == 1)
		{
			harga_tipe_bus[1] = 9000;
			break;
		}
		else if (pilihan1 == 2)
		{
			harga_tipe_bus[2] = 5000;
			break;
		}
		else
		{
			cout << "Maaf input anda salah.\n";
		}
	}
}
void tanggal1()
{
	cout << "Masukkan tanggal keberangkatan :\n";
	cout << "Tanggal : ";
	cin >> tanggal[0];
	cout << "bulan   : ";
	cin >> tanggal[1];
	cout << "Tahun   : ";
	cin >> tanggal[2];

	tanggalhasil = tanggal[0] + '/' + tanggal[1] + '/' + tanggal[2];
	cout << "Tanggal keberangkatan anda " << tanggalhasil;
	jam1();
}
void jam1()
{
	cout << "\nPilih jam keberangkatan\n";
	cout << "1. Jam 08:00\n";
	cout << "2. Jam 12:00\n";
	cout << "3. Jam 16:00\n";
	cout << "Masukkan pilihan : ";
	cin >> pilihan5;
	if (pilihan5 == 1)
	{

	}
	else if (pilihan5 == 2)
	{

	}
	else if (pilihan5 == 3)
	{

	}
	else
	{
		jam1();
	}
}
void jurusan()
{
	cout << "\n\n####################################################\n";
	cout << "#                  Pilih  Jurusan                  #\n";
	cout << "####################################################\n\n";

	cout << "1. Solo - Ambarawa\n";
	cout << "2. Solo - Boyolali\n";
	cout << "3. Solo - Jakarta\n";
	cout << "4. Solo - Jogja\n";
	cout << "5. Solo - Klaten\n";
	cout << "6. Solo - Semarang\n";
	cout << "7. Solo - Seragen\n";
	cout << "8. Solo - Surabaya\n";
	harga_jarak_bus[0] = 0;
	while (true)
	{
		cout << "Masukkan Pilihan : ";
		cin >> pilihan2;
		if (pilihan2 == 1)
		{
			harga_jarak_bus[1] = 26000;
			break;
		}
		else if (pilihan2 == 2)
		{
			harga_jarak_bus[2] = 23000;
			break;
		}
		else if (pilihan2 == 3)
		{
			harga_jarak_bus[3] = 67000;
			break;
		}
		else if (pilihan2 == 4)
		{
			harga_jarak_bus[4] = 18000;
			break;
		}
		else if (pilihan2 == 5)
		{
			harga_jarak_bus[5] = 10000;
			break;
		}
		else if (pilihan2 == 6)
		{
			harga_jarak_bus[6] = 14000;
			break;
		}
		else if (pilihan2 == 7)
		{
			harga_jarak_bus[7] = 16000;
			break;
		}
		else if (pilihan2 == 8)
		{
			harga_jarak_bus[8] = 27000;
			break;
		}
		else
		{
			cout << "Maaf input anda salah.\n";
		}
	}
	harga1 = harga_tipe_bus[pilihan1] + harga_jarak_bus[pilihan2];

	cout << "Anda ingin memesan tiket " << harga_tipe_busStr[pilihan1] << " dengan jurusan " << harga_jarak_busStr[pilihan2] << " dengan Harga : " << harga1 << endl;
	ya_tidak();

}

void ya_tidak()
{
	cout << "ya atau tidak ? : ";
	cin >> pilihanstring;
	if (pilihanstring == "ya")
	{
		jumlah_pemesanan();
	}
	else if (pilihanstring == "tidak")
	{
		menu();
	}
	else
	{
		ya_tidak();
	}
}

void tempat_duduk()
{
	tempat_dudukStr[pilihan4];
	cout << "Pilih tempat duduk dengan nomer : " << kode_bus[pilihan1];
	cin >> pilihan4;
	if (tempat_dudukStr[pilihan4] == "terjual")
	{
		cout << "Tempat duduk telah dipesan.\n";
		cout << "Silahkan memilih kembali\n";
		tempat_duduk();
	}
	else if (tempat_dudukStr[pilihan4] != "terjual")
	{
		cout << "Anda akan memilih tempat duduk dengan nomer : " << kode_bus[pilihan1] << pilihan4;
		cout << " ya atau tidak ?\n";
		cin >> pilihanstring2;
		if (pilihanstring2 == "ya")
		{
			tempat_dudukStr[pilihan4] = "terjual";
			//kode_tempat_duduk[d] = kode_bus[pilihan1] + pilihan4;
			kode1.open("kode_tempat_duduk.txt", ios::app);
			kode1 << kode_bus[pilihan1] << pilihan4 << endl;
			kode1.close();
		}
		else if (pilihanstring2 == "tidak")
		{
			tempat_duduk();
		}

	}
}

void jumlah_pemesanan()
{

	cout << "\n\n####################################################\n";
	cout << "#               Pesan Berapa Banyak                #\n";
	cout << "####################################################\n\n";
	cout << "Masukkan Pilihan : ";
	cin >> pilihan3;
	cout << "Masukkan nama penumpang : ";
	getline(cin, pemesan[0]);
	getline(cin, pemesan[1]);
	tempat_duduk();
	for (batas = i; batas <= pilihan3; batas++)
	{
		cout << "Masukkan nama penumpang : ";
		getline(cin, pemesan[batas]);
		getline(cin, pemesan[batas]);
		tempat_duduk();
	}
	i = batas;
}

void tiket()
{

}

void kembalian()
{
	cout << "Bayar : Rp.";
	cin >> bayar;
	if (bayar < harga1*pilihan3)
	{
		cout << "Maaf uang anda kurang\n";
		kembalian();
	}
	else if (bayar >= harga1*pilihan3)
	{
		cout << "Kembalian anda Rp." << bayar - harga1*pilihan3 << ",00\n";
		cout << "Terimakasih telah mempercayai kami untuk membeli tiket di sini\n";
	}
}
