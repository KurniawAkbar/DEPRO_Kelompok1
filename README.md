# DEPRO_Dasprog_Kelompok_1
Laporan Pengerjaan Demo Project Kelompok 1

Anggota Kelompok 1:
Kurniawan Akbar (5022251108)
Jaisyu Muhammad (5022251050)
Femia Dwiyanti (5022251054)

Pengerjaan Kurniawan Akbar (5022251108):
1.	Tampilan Menu dan fungsi pilihan
2.	Kalkulator Resistor Paralel
3.	Konversi Desimal
   
1. Tampilan Menu dan fungsi pilihan: Menu tampilan ditampilkan diawal fungsi dijalankan yang berisi pilihan fungsi (1-9), kemudian setiap user selesai menggunakan salah satu fungsi, akan ditampilkan pilihan apakah user akan tetap di fungsi tersebut atau beralih ke fungsi lain sampai user memilih pilihan 9 (keluar).
2. Fungsi Menghitung Hambatan Total Resistor Paralel:
   Pada fungsi ini user menginput banyak n resistor (banyak resistor tidak nol), lalu user menginput masing-masing nilai resitor satu per satu. Fungsi akan menghitung dengan persamaan 1/r = 1/r1 + 1/r2 +..1/rn. Ouputnya adalah nilai total yang dihitung dengan persamaan R=1/1/r.
3.  Fungsi Konversi Desimal:
   Pengguna menginput bilangan bulat tak nol, lalu dikonversi ke bentuk lain:
   a. Desimal ke Biner: Bilangan inputan dioperasikan dengan modulus 2 (% 2) dan pembagian genap (/ 2). Hasil akhir bilangan biner merupakan hasil operasi yang diurutkan dari yang paling akhir ke yang paling awal.
   b. Desimal ke Oktal: Bilangan inputan dioperasikan dengan modulus 8 (% 8) dan pembagian 8 (/ 8). Hasil akhir bilangan oktal merupakan hasil operasi yang diurutkan dari yang paling akhir ke yang paling awal.
   c. Desimal ke Heksadesimal: Bilangan inputan dioperasikan dengan modulus 16 (% 16) dan pembagian 8 (/ 16). Hasil operasi setiap bilangan kemudian dikonversi menjadi karakter 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E, dan F. Hasil akhir bilangan heksadesimal merupakan hasil konversi ke karakter yang diurutkan dari yang paling akhir ke yang paling awal.
Hasil akhir setiap konversi akan ditampilkan secara bersamaan.

Pengerjaan Jaisyu Muhammad (5022251050)
Mengerjakan fungsi:
1. Hukum Ohm
2. Daya
3. Oktal ke Desimal

1.) Hukum Ohm
V=I*R
I=V/R
R=V/I
keterangan:
V=Tegangan
I=Arus
R=Resistor/Hambatan
(untuk mencari I, nilai R ≠ 0. begitu juga untuk mencari R, nilai I ≠ 0).

2.) Daya
P=V*I
V=P/I
I=P/V
keterangan:
P=Daya
V=Tegangan
I=Arus
(untuk mencari V, nilai I ≠ 0. begitu juga untuk mencari I, nilai V ≠ 0) 

3.) Oktal ke desimal
while (oktal != 0) {
        sisa = oktal % 10;
        desimal += sisa * pangkat;
        pangkat *= 8;
        oktal /= 10;
sebelum operasi tersebut dilakukan, input yang dimasukkan di cek terlebih dahulu apakah ia angka atau bukan, dan jika angka maka ≠ 0. setelah itu input yang dimasukkan (oktal) diberi % 10 untuk mengambil angka terakhir dan disimpan pada variabel "sisa". nantinya angka terakhir (variabel sisa) di kali dengan variabel "pangkat" yang bernilai 1 dan disimpan pada variabel "desimal". setelah itu variabel pangkat dikali dengan 8. terakhir input (oktal) dibagi 10 dengan tujuan menghilangkan 1 digit angka terakhir yang telah dihitung. proses tersebut berulang hingga input yang dimasukkan bernilai 0 pada baris oktal /=10.

Pengerjaan Femia Dwiyanti (5022251054):
1.	Kalkulator Resistor Seri
2.	Konversi Biner ke Desimal
3.	Konversi Heksadesimal ke Desimal

Penjelasan Operasi Kode:
1.	Kalkulator Resistor Seri
Pada fungsi void resisSeri dapat menghitung jumlah resistor seri sesuai jumlah resistor yang diinput. Tipe data yang digunakan adalah integer i dan jumlah resistor, serta float untuk mencetak hasil perhitungan (Req) yang diinisialisasi dengan 0 (total=0) sehingga parameter total dapat dioperasikan sebagaimana mestinya. Selain itu, terdapat percabangan if else untuk membuat kondisi bahwa besar resistor yang dimasukkan harus lebih dari 0 dan tidak boleh negative. Kemudian terdapat loop untuk membaca nilai resistor sesuai dengan jumlah indeks (jumlah resistor). Di dalam kode, operasi dilakukan dengan total += R; yang sesuai dengan rumus Rtotal = R1 + R2 + R3 + R4.

2.	Konversi Biner ke Desimal
Pada fungsi void binerDesi, parameter yang digunakan adalah charBiner atau bertipe array yang diasumsikan 100, kemudian terdapat variable desimal dan i  dengan tipe data long long yang setara dengan integer namun memiliki kapasitas yang lebih besar dan diinisialisasi dengan 0 agar operasi dapat dijalankan. Pada scanf yang digunakan adalah %99s yang berarti membaca array biner hingga 99 karakter karena 1 nya merupakan terminator null. Kemudian, terdapat loop while karena tidak diketahui pasti jumlah pengulangannya dan kondisi if untuk membatasi input karakter harus 0 dan 1 saja, selain itu akan dianggap tidak valid. Sedangkan operasi yang digunakan dalam kode adalah: desimal = desimal * 2 + (biner[i] - '0');  yang bekerja dengan cara membaca digit biner satu per satu dari kiri ke kanan. Setiap kali baris tersebut dieksekusi, nilai desimal yang sudah terbentuk sebelumnya dikalikan 2, yang secara matematis merepresentasikan pergeseran satu digit ke kiri dalam sistem bilangan basis dua. Setelah “ruang” untuk digit baru terbentuk, ekspresi (biner[i] - '0') digunakan untuk mengubah karakter '0' atau '1' menjadi nilai numerik 0 atau 1 melalui selisih kode ASCII, lalu nilai tersebut ditambahkan ke desimal. Contoh perhitungan missal 101 maka akan bekerja 
0 → (0*2 + 1) = 1
1 → (1*2 + 0) = 2
2 → (2*2 + 1) = 5 
Sementara i++; yang berarti increment untuk melanjutkan ke indeks berikutnya.

3.	Konversi Heksadesimal ke Desimal
Pada fungsi void heksaDesimal, tipe data yang digunakan adalah array berukuran 100, dan long long yang diinisialisasi dengan 0. Kemudian, terdapat loop while dan nested if untuk memvalidasi karakter tersebut. Jika karakter berada pada rentang '0'–'9', maka nilainya diperoleh dengan mengurangkan karakter tersebut dengan '0', sehingga misalnya '5' - '0' = 5. Jika karakter berada pada rentang 'A'–'F' atau 'a'–'f', maka karakter tersebut mewakili nilai 10–15 dan dikonversi dengan operasi pengurangan 'A' atau 'a' kemudian ditambahkan 10. Jika karakter tidak memenuhi kondisi tersebut, maka input dianggap tidak valid. Proses konversi dilakukan menggunakan operasi desimal = desimal * 16 + nilai, yang bekerja dengan membaca digit dari kiri ke kanan. Setiap nilai sebelumnya dikalikan dengan 16 kemudian ditambahkan dengan nilai digit heksadesimal berikutnya. Sebagai contoh, input 1A diproses sebagai berikut:
0 * 16 + 1 = 1
1 * 16 + 10 = 26.
