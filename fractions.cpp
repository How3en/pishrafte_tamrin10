#include <iostream>

using namespace std;

class Kasr {

private :

 int surat,makhraj;

public :

 Kasr (int s,int m);
 void show(string name);
 void sum(Kasr kasr_digar);
 void subtract(Kasr kasr_digar);
 void multiply(Kasr kasr_digar);
 void divide(Kasr kasr_digar);

};

Kasr::Kasr (int s,int m){

 {
   cout<< "Enter Surat: ";
   cin >> s;
   surat = s;
   cout<< "Enter makhraj: ";
   cin >> m;
   makhraj = m;
 }

}

void Kasr::show(string name){

   if (makhraj == 1)

        cout <<name <<": "<< surat;

   else if (makhraj ==0)

        cout <<"ERRor /0";
   else
        cout <<name <<": "<< surat <<'/' <<makhraj;

  }

void Kasr::sum(Kasr kasr_digar){

   int s =  this->surat * kasr_digar.makhraj + kasr_digar.surat * this->makhraj;

   int m =  this->makhraj * kasr_digar.makhraj;

   cout << "\nsum:"<<s<<'/'<<m;

}

void Kasr::subtract(Kasr kasr_digar){

   int s =  this->surat * kasr_digar.makhraj - kasr_digar.surat * this->makhraj;

   int m =  this->makhraj * kasr_digar.makhraj;

   cout << "\nsubtract:"<<s<<'/'<<m;

}

 void Kasr::multiply(Kasr kasr_digar){

    int s =  this->surat * kasr_digar.surat;

    int m =  this->makhraj * kasr_digar.makhraj;

    cout << "\nmultiply: "<<s<<'/'<<m;

 }

 void Kasr::divide(Kasr kasr_digar){

    int s =  this->surat * kasr_digar.makhraj;

    int m =  this->makhraj * kasr_digar.surat;

    cout << "\ndivide: "<<s<<'/'<<m;

 }

int main()
{

   string name;
   string alamat;

   Kasr kasr1(0,1);
   Kasr kasr2(0,1);

   cout << "Enter your Operation (+,-,*,/): ";
   cin >> alamat;

   name = "kasr1";
   kasr1.show(name);
   cout <<endl;
   name = "kasr2";
   kasr2.show(name);

   if (alamat == "+" ){kasr1.sum(kasr2);}
   if (alamat == "-" ){kasr1.subtract(kasr2);}
   if (alamat == "*" ){kasr1.multiply(kasr2);}
   if (alamat == "/" ){kasr1.divide(kasr2);}

   return 0;
}
