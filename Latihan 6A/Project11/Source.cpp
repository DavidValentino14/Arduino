#include <iostream> //library input output
#include <string> //library kata string
#include <fstream>//library file
#include <array>//library buat array

using namespace std;

int bulan_data(int uang)// fungsi untuk menampilkan uang per bulan
{
	cout << "Masukkan Jumlah Uang ";
	cin >> uang;

	return uang;
}

void menampilkan(int tampil)//fungsi untuk menampilkan
{
	cout << tampil;
}
int main()//fungsi main
{
	fstream file1;// ambil file1
	string input, pilihan, output, data1, data2, selesai, pengganti;
	int i, n, ganti, a, b, c, d, x;
	int pilihan1, uang;

	// Untuk Anggota
	string anggota1;
	array <string, 50> anggota;//banyaknya string

	// Untuk Tabungan Bulan Januari
	//string tabungan_bulan;
	array <int, 50> tabungan_bulan_1;

	// Untuk Tabungan Bulan Febuari
	//string tabungan_bulan;
	array <int, 50> tabungan_bulan_2;

	// Untuk Tabungan Bulan Maret
	//string tabungan_bulan;
	array <int, 50> tabungan_bulan_3;

	// Untuk Tabungan Bulan April
	//string tabungan_bulan;
	array <int, 50> tabungan_bulan_4;

	// Untuk Tabungan Bulan Mei
	//string tabungan_bulan;
	array <int, 50> tabungan_bulan_5;

	// Untuk Tabungan Bulan Juni
	//string tabungan_bulan;
	array <int, 50> tabungan_bulan_6;

	// Untuk Tabungan Bulan Juli
	//string tabungan_bulan;
	array <int, 50> tabungan_bulan_7;

	// Untuk Tabungan Bulan Agustus
	//string tabungan_bulan;
	array <int, 50> tabungan_bulan_8;

	// Untuk Tabungan Bulan September
	//string tabungan_bulan;
	array <int, 50> tabungan_bulan_9;

	// Untuk Tabungan Bulan Oktober
	//string tabungan_bulan;
	array <int, 50> tabungan_bulan_10;

	// Untuk Tabungan Bulan Novenber
	//string tabungan_bulan;
	array <int, 50> tabungan_bulan_11;

	// Untuk Tabungan Bulan Desember
	//string tabungan_bulan;
	array <int, 50> tabungan_bulan_12;

	d = 0;
	for (d = 0; d <= 50;)
	{
		if (d < 50)
		{
			tabungan_bulan_1[d] = 0;
			tabungan_bulan_2[d] = 0;
			tabungan_bulan_3[d] = 0;
			tabungan_bulan_4[d] = 0;
			tabungan_bulan_5[d] = 0;
			tabungan_bulan_6[d] = 0;
			tabungan_bulan_7[d] = 0;
			tabungan_bulan_8[d] = 0;
			tabungan_bulan_9[d] = 0;
			tabungan_bulan_10[d] = 0;
			tabungan_bulan_11[d] = 0;
			tabungan_bulan_12[d] = 0;
			d++;
		}
		else if (d == 50)
		{
			break;
		}
	}

	cout << "##########################################\n";
	cout << "#       KOPERASI KUCING USA PEDULI       #\n";
	cout << "##########################################\n";

	while (true)
	{
		cout << "\n#################################################################################\n";
		cout << "1. Tambah peserta Koperasi Kucing USA Peduli\n";
		cout << "2. Tampilkan data peserta Koperasi Kucing USA Peduli\n";
		cout << "3. Ubah data anggota koperasi Kucing USA Peduli\n";
		cout << "4. Input tabungan peserta koperasi Kucing USA Peduli\n";
		cout << "5. Melihat jumlah total tabungan\n";
		cout << "6. Mengexport data total saldo peserta koperasi Kucing USA Peduli ke file.txt\n";
		cout << "7. Menghapus.\n";
		cout << "8. Keluar\n";
		cout << "#################################################################################\n\n";
		cout << "Masukkan pilihan: ";
		cin >> pilihan1;

		if (pilihan1 == 1)//tambah peserta
		{

			system("CLS");
			cout << "Silahkan Menginput Nama Anggota Koperasi\n";
			cout << "Masukkan nama : ";
			getline(cin, anggota1);
			getline(cin, anggota1);
			cout << "\n";

			int i = 0;
			anggota[i] = anggota1;

			for (i = 1; i <= 50; i++)
			{
				cout << "input lagi (ya,tidak) ";
				getline(cin, pilihan);

				if (pilihan == "tidak")
				{
					break;
				}
				else if (pilihan == "ya")
				{
					cout << "Masukkan nama : ";
					getline(cin, anggota1);
					anggota[i] = anggota1;
					cout << "\n";
				}
				else
				{
					
				}
			}
		}

		else if (pilihan1 == 2)
		{
			system("CLS");
			n = 0;
			cout << "Anggota Koperasi Kucing USA Peduli\n";

			for (n = 0; n <= 50;)
			{
				if (n < 50)
				{
					cout << n + 1 << ". " << anggota[n] << endl;
					n++;
				}
				else if (n == 50)
				{
					break;
				}
			}
		}
		else if (pilihan1 == 3)
		{
			cout << "Mengganti data peserta";
			cout << "Piih nomer peserta yang akan diganti : ";
			cin >> ganti;
			cout << anggota[ganti - 1] << " Ubah menjadi ";
			getline(cin, pengganti);
			getline(cin, pengganti);
			anggota[ganti - 1].replace(0, 50, pengganti);
		}

		else if (pilihan1 == 4)
		{
			a = 0;

			cout << "Pilih anggota berdasarkan nomer nya ";
			cin >> a;
			cout << "Masukkan jumlah tabungan anggota ";
			cout << anggota[a - 1] << endl;
			cout << "Bulan\n";

			cout << "Januari   : Rp.";
			cin >> tabungan_bulan_1[a - 1];

			cout << "Febuari   : Rp.";
			cin >> tabungan_bulan_2[a - 1];

			cout << "Maret     : Rp.";
			cin >> tabungan_bulan_3[a - 1];

			cout << "April     : Rp.";
			cin >> tabungan_bulan_4[a - 1];

			cout << "Mei       : Rp.";
			cin >> tabungan_bulan_5[a - 1];

			cout << "Juni      : Rp.";
			cin >> tabungan_bulan_6[a - 1];

			cout << "Juli      : Rp.";
			cin >> tabungan_bulan_7[a - 1];

			cout << "Agustus   : Rp.";
			cin >> tabungan_bulan_8[a - 1];

			cout << "September : Rp.";
			cin >> tabungan_bulan_9[a - 1];

			cout << "November  : Rp.";
			cin >> tabungan_bulan_10[a - 1];

			cout << "Oktober   : Rp.";
			cin >> tabungan_bulan_11[a - 1];

			cout << "Desember  : Rp.";
			cin >> tabungan_bulan_12[a - 1];

		}

		else if (pilihan1 == 5)
		{
			/*int nol = 0, b = 0;
			cout << "Total Saldo Anggota";
			for (b = 0; b <= 50;)
			{
			if (n < 50)
			{
			cout << b + 1 << ". " << anggota[b] << "\tTotal Saldo Rp." << nol + tabungan_bulan_1[b] + tabungan_bulan_2[b] + tabungan_bulan_3[b] + tabungan_bulan_4[b] + tabungan_bulan_5[b] + tabungan_bulan_6[b] + tabungan_bulan_7[b] + tabungan_bulan_8[b] + tabungan_bulan_9[b] + tabungan_bulan_10[b] + tabungan_bulan_11[b] + tabungan_bulan_12[b] << endl;
			b++;
			}
			else if (b = 50)
			{
			break;
			}
			}
			}*/
			cout << "Nilai Tabungan Anggota " << endl;
			cout << "masukkan kode nomer: ";
			cin >> b;
			c = tabungan_bulan_1[b - 1] + tabungan_bulan_2[b - 1] + tabungan_bulan_3[b - 1] + tabungan_bulan_4[b - 1] + tabungan_bulan_5[b - 1] + tabungan_bulan_6[b - 1] + tabungan_bulan_7[b - 1] + tabungan_bulan_8[b - 1] + tabungan_bulan_9[b - 1] + tabungan_bulan_10[b - 1] + tabungan_bulan_11[b - 1] + tabungan_bulan_12[b - 1];
			cout << "nilai tabungan anda adalah Rp." << c;
		}

		else if (pilihan1 == 6)
		{
			x = 0;
			cout << "Anda ingin (save) ?";
			cout << "DATA PROCESSING TO (data_koperasi.txt)" << endl;
			file1.open("data_koperasi.txt", ios::out);
			file1 << "KOPERASI KUCING USA PEDULI\n";
			file1.close();
			for (x = 0; x < 50;)
			{
				if (x < 50)
				{
					file1.open("data_koperasi.txt", ios::app);
					file1 << "\n->Nama Anggota " << anggota[x];
					file1 << "\n -Jumalah tabungan bulan Januari  :" << tabungan_bulan_1[x];
					file1 << "\n -Jumalah tabungan bulan Febuari  :" << tabungan_bulan_2[x];
					file1 << "\n -Jumalah tabungan bulan Maret    :" << tabungan_bulan_3[x];
					file1 << "\n -Jumalah tabungan bulan April    :" << tabungan_bulan_4[x];
					file1 << "\n -Jumalah tabungan bulan Mei      :" << tabungan_bulan_5[x];
					file1 << "\n -Jumalah tabungan bulan Juni     :" << tabungan_bulan_6[x];
					file1 << "\n -Jumalah tabungan bulan Juli     :" << tabungan_bulan_7[x];
					file1 << "\n -Jumalah tabungan bulan Agustus  :" << tabungan_bulan_8[x];
					file1 << "\n -Jumalah tabungan bulan September:" << tabungan_bulan_9[x];
					file1 << "\n -Jumalah tabungan bulan Oktober  :" << tabungan_bulan_10[x];
					file1 << "\n -Jumalah tabungan bulan November :" << tabungan_bulan_11[x];
					file1 << "\n -Jumalah tabungan bulan Desember :" << tabungan_bulan_12[x];
					c = tabungan_bulan_1[x] + tabungan_bulan_2[x] + tabungan_bulan_3[x] + tabungan_bulan_4[x] + tabungan_bulan_5[x] + tabungan_bulan_6[x] + tabungan_bulan_7[x] + tabungan_bulan_8[x] + tabungan_bulan_9[x] + tabungan_bulan_10[x] + tabungan_bulan_11[x] + tabungan_bulan_12[x];
					file1 << "\n -Jumalah tabungan 1 Tahun        :" << c;
					x++;
					file1.close();
				}
				else if (x == 50)
				{
					file1.close();
					cout << "DATA PROCESSING TO (data_koperasi.txt)" << endl;

					break;
				}
			}

		}

		else if (pilihan1 == 7)
		{
			string kosong = "  ";
			cout << "Mengganti data peserta";
			cout << "Piih nomer peserta yang akan diganti : ";
			cin >> ganti;
			anggota[ganti - 1].replace(0, 50, kosong);
			tabungan_bulan_1[ganti - 1] = 0;
			tabungan_bulan_2[ganti - 1] = 0;
			tabungan_bulan_3[ganti - 1] = 0;
			tabungan_bulan_4[ganti - 1] = 0;
			tabungan_bulan_5[ganti - 1] = 0;
			tabungan_bulan_6[ganti - 1] = 0;
			tabungan_bulan_7[ganti - 1] = 0;
			tabungan_bulan_8[ganti - 1] = 0;
			tabungan_bulan_9[ganti - 1] = 0;
			tabungan_bulan_10[ganti - 1] = 0;
			tabungan_bulan_11[ganti - 1] = 0;
			tabungan_bulan_12[ganti - 1] = 0;
		}

		else if (pilihan1 == 8)
		{
			break;
		}
	}
}