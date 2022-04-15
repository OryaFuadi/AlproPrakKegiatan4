#include <iostream>
using namespace std;

class Tabungan{
  public:
   //input
   
   //proses
   

    void output(){
      cout << "Total Pengeluaran Andi perbulan: " <<total_tabungan;
      cout << endl;
      cout << "Tabungan yang Andi miliki saat ini adalah: " << total_pengeluaran; 
    }

  private:
  	
    int total_pengeluaran=0;
    int total_tabungan=0;
    

  

};

int main(){
  Tabungan tab;
  tab.output();

  return 0;
  } 
