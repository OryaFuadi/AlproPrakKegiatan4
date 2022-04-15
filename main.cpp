#include <iostream>
using namespace std;

class Tabungan{
  public:
   //input
   void input(){
      cout<<"===== MENGHITUNG MASUKAN DAN PENGELUARAN PERBULAN =====\n\n";
      cout<<"Masukkan uang saku perbulan = ";
      cin>>uang_saku;
      cout<<"masukkan jumlah bulan =";
      cin>>bulan;
      cout<<endl;
      for(int i=0;i<bulan;i++){
        cout<<"Masukkan pengeluaran bulan ke-"<<i+1<<" ";
        cin>>pengeluaran_perbulan[i];
      }
      cout<<endl;
      cout<<"=============================================\n\n";
    }
   
   //proses
   void proses(){
      for(int i=0;i<bulan;i++){
        cout<<"mendapat uang saku sebanyak "<<uang_saku<<endl;
        cout<<"pengeluaran bulan "<<i+1<<" adalah "<< pengeluaran_perbulan[i]<<endl;
        total_tabungan += (uang_saku-pengeluaran_perbulan[i]);
        cout<<"total uang tabungan = "<<total_tabungan<<endl;
        cout<<"--------------------"<<endl;
        total_pengeluaran+=pengeluaran_perbulan[i];
        
      }
      
    }

    void output(){
      cout << "Total Pengeluaran Andi perbulan: " <<total_pengeluaran;
      cout << endl;
      cout << "Tabungan yang Andi miliki saat ini adalah: " << total_tabungan; 
    }

  private:
  	int uang_saku;
    int bulan;
    int pengeluaran_perbulan[50];
    int total_pengeluaran=0;
    int total_tabungan=0;
    
    

  

};

int main(){
  Tabungan tab;
  tab.proses();
  tab.output();

  return 0;
  } 
