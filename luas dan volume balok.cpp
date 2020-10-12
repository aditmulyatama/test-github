#include <iostream>
using namespace std;

int main() {
    int p,l,t,V,LP;

    cout<<"++++++Luas Permukaan dan Volume Balok++++++\n\n";\

    cout<<"panjang = ";
    cin>>p;

    cout<<"lebar   = ";
    cin>>l;

    cout<<"tinggi  = ";
    cin>>t;

    cout<<"\n===========================\n\n";

    LP=2*(p*l+p*t+l*t);
    V=p*l*t;

    cout<<"Luas permukaan balok = "<<LP<<endl;
    cout<<"Volume balok         = " << V<<"\n\n";
    }
