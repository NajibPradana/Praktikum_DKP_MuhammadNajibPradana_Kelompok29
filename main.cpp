#include <iostream>
#include <conio.h>

using namespace std;

class Sistem_Parkiran{
public :
    int jam_masuk,jam_keluar,sel_jam;
    int biaya,tambahan,biaya_total;
    int jenis;

void jenis_kendaraan(){
cout << "Masukan Jenis Kendaraan Anda : \n1. Mobil\n2. Motor"<<endl;
cout << "Pilihan Anda : " ;
cin >> jenis;
}

void tarif_perkendaraan(){
switch (jenis){
		case 1  :
			biaya=3000;
			tambahan=1000;
			cout << "Biaya Parkir Mobil          = Rp 3000(2 jam pertama)\n             Biaya Tambahan = Rp 1000/jam" << endl;
			break;
		case 2  :
			biaya=2000;
			tambahan=500;
			cout << "Biaya Parkir Motor            = Rp 2000(2 jam pertama)\n             Biaya Tambahan   = Rp 500/jam" << endl ;
			break;
		default :
			biaya=0;
	}
	void waktu_masuk() {
    cout << "Jam Masuk Parkir : ";
    cin >> jam_masuk;
}

void waktu_keluar() {
    cout << "Jam keluar Parkir : ";
    cin >> jam_keluar;
}

void waktu_total() {
    if (jam_keluar < jam_masuk) {
        sel_jam = (jam_keluar + 24) - jam_masuk;
    }
    else {
        sel_jam = jam_keluar - jam_masuk;
    }
}
int tarif_total() {
        int biaya_total;
        if (sel_jam>2) {
            biaya_total=(biaya+(sel_jam-2)*tambahan);
            cout << "\nTotal Biaya Parkir anda : " << biaya_total;
        } else {
            biaya_total=biaya;
            cout <<"\nTotal Biaya Parkir anda : " << biaya_total;
        }
        return biaya_total;
    }


	void nota_pembayaran(){
cout << "\n\n----------------------------" << endl;
cout << "_Nota Parkir Terlalu Lama_" << endl;
cout << "----------------------------" << endl;
cout << "Jenis Kendaraan : " << jenis<<endl;
cout << "Masuk Pada Pukul : " << jam_masuk<<endl;
cout << "Keluar Pada Pukul : " << jam_keluar<<endl;
cout << "Lama Waktu Parkir : " << sel_jam<<endl;
cout << "__________" << endl;
cout << "Tagihan : \nPokok : " << biaya << "\nTambahan : " << tambahan ;
}

};




int main()
{
    WaktuParkir A;
    A.jenis_kendaraan();
    A.tarif_perkendaraan();
    A.waktu_masuk();
    A.waktu_keluar();
    A.waktu_total();
    A.nota_pembayaran();
    A.tarif_total();

}
