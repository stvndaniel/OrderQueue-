#include <bits/stdc++.h.>
using namespace std;
void ProsesPesanan (int N, int A) //fungsi yang akan di rekursi
{
if (A <= N) //apabila nomor antrian (A) kurang dari/sama dengan jumlah pesanan (N)
{
cout << endl << endl << "Urutan antrian saat ini : " << A <<endl;

cout << "Pembeli dengan nomor antrian ke " << A << ", harap segera ke kasir untuk mengambil pesanannya." << endl;

system("pause");
A++; //penambahan nomor urutan antrian
ProsesPesanan(N,A); //pemanggilan fungsi rekursif
}
else if (A > N) //apabila nomor antrian lebih dari jumlah pesanan
{
cout << "Semua pesanan telah disajikan!"; //rekursi telah berakhir
}
}
int main(){
int N; //jumlah pesanan
int A = 1; //nomor antrian dimulai dari 1
cout << "Ada berapa banyak pesanan hari ini? :> " ;
cin >> N; //memasukkan jumlah pesanan
ProsesPesanan(N,A); //pemanggilan fungsi
return 0;
}