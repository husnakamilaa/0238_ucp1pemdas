#include <iostream>
using namespace std;

int main() {
    //variable //saya kasih batasan panjang arraynya 100, disoal tidak ada keterangannya
    string nama[100]; 
    float sensor1[100], sensor2[100], sensor3[100];
    string status[100];
    string pilihan;

    int N = 0; //buat indeks awal array(perulangan) kota

    do 
    {
        //input output
        cout << "Masukkan nama kota : " << endl;
        cin >> nama[N];
        cout << "Masukkan indeks sensor 1 : " << endl;
        cin >> sensor1[N];
        cout << "Masukkan indeks sensor 2 : " << endl;
        cin >> sensor2[N];
        cout << "Masukkan indeks sensor 3 : " << endl;
        cin >> sensor3[N];

        //itung //NO 6A
        float rerata = (sensor1[N] + sensor2[N] + sensor3[N]) / 3.0; 

        if (rerata > 75 || sensor1[N] == 45 || sensor2[N] == 45 || sensor3[N] == 45) //conditional statement apakah tergolong tidak sehat atau sehat
        {
            status[N] = "Tidak Sehat";
        }
        else
        {
            status[N] = "Sehat";
        }

        //NO 6B //untuk nampilin nama trus spasi status
        cout << "\nNama\t\tStatus" << endl;
        for (int i = 0; i <= N; i++) { //perulangan untuk output nama spasi status
            cout << nama[i] << "\t\t" << status[i] << endl;
        }

        //indeks awal total sehat dan tdk sehat
        int total_sehat = 0;
        int total_tidak_sehat = 0;

        for (int i = 0; i <= N; i++) { //perulangan untuk memasukkan status
            if (status[i] == "Sehat") { //klo statusnya sehat ditambah (++) ke int total_sehat
                total_sehat++;
            } else {
                total_tidak_sehat++; //klo selain itu (artinya tergolong sebaliknya = tdk sehat) ditambah (++) ke int total_tidak_sehat
            }
        }

        //NO 6C //tampilkan total lokasi yg punya udara sehat dan tidak sehat
        cout << "\nTotal lokasi dengan kualitas udara Sehat : " << total_sehat << endl;
        cout << "Total lokasi dengan kualitas udara Tidak Sehat : " << total_tidak_sehat << endl;

        N++;

        //NO 6D //ngasih pilihan mau ngulang program atau enggak
        cout << "\nApakah ingin mengulang program? (y/n): ";
        cin >> pilihan;

    } while (pilihan == "y" || pilihan == "Y");

    return 0;
}

// 1. DEKLARASI VARIABLE
// string nama = string itu terdiri atas beberapa karakter, klo yang panjang kek nama make string
// int umur = buat angka yang bulat atau tanpa koma
// float matematika = buat angka yang bisa make koma2

// 2. PROSEDUR & FUNGSI
// contoh prosedur
//tidak bisa menyimpan nilai, kek cmn lewat. jdi jgn panggil prosedurnya
// void input() {
// 
// }
// contoh fungsi
//bisa untuk menyimpan nilai, di klo mau manggil yg dipanggil fungsinya
// int HargaJual () {
//
//}
//
//int totalHarga() 
//{
//    return (nAdidas * hAdidas) + (nPuma * hPuma) + (nNB * hNB) + (nNike * hNike);
//}
//
//void input()
//{
//    cout << "Masukkan jumllah Adidas = ";
//    cin >> nAdidas;
//
//    cout << "Masukkan jumllah Puma = ";
//    cin >> nPuma;
//
//    cout << "Masukkan jumllah New Balance = ";
//    cin >> nNB;
//
//    cout << "Masukkan jumllah Compass = ";
//    cin >> nCompass;
//
//    cout << "Masukkan jumllah Nike = ";
//    cin >> nNike;
//}

// 3. IMPLEMENTASI LOOPING
// for (i = 0; i > 5; i++) {
//    
//}
//klo jumlahnya udh ditentukan make for
// klo jumlah blm ditentukan :
// while //kondisi diuji didepan
//do { 
//
//} while ((pilihan == "y") || (pilihan == "Y")) //kondisi diuji diakhir
//
// do 
//    {
//        cout << "Makan " << endl;
//        cout << "Main game " << endl;
//        cout << "Ibadah " << endl;

//        cout << "Apakah anda masih hidup? (Yes/No)";
//        cin >> pilihan;
//        
//    } while (pilihan == "Yes");

// 4. IMPLEMENTASI CONDITIONAL STATEMENT
//if, if..else, if...else if...else
// rerata = (matematika + fisika) / 2;
//    if (matematika >= 71)
//    {
//        status = "Lulus";
//    }
//    else if (rerata > 60)
//    {
//        status = "Lulus";
//    }
//    else
//    {
//        status = "Gagal";
//    }
//
//if klo kondisinya cuman satu, misalif bilangan > 5 maka akan dikali(*) 2,
// if..else, klo kondisinya ada dua, misal if bilangan >= 5 maka akan dikali(*) 2, else nya dikali(*) 4
//if...else if...else, klo kondisinya lbh dari 2, misal if  bilangan1 == bilangan2 maka akan muncul output bilangan 1 sama dengan bilangan 2
// else if bilangan1 > bilangan2 maka outputnya bilangan 1 lbh besar dari bilangan 2
//else bilangan1 < bilangan2 maka outputnya bilangan 2 lbh besar dari bilangan 1

// 5. IMPLEMENTASI STRUCT
// struct Mahasiswa {
//    string nim;
//    string nama;
//    DetailAlamat alamat;
//    int umur;
//};
// 
//berisi banyak variable dengan tipe data yang berbeda