#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    double GBP_Bendras = 0.8729;
    double GBP_Pirkti    = 0.8600;
    double GBP_Parduoti  = 0.9220;
    double USD_Bendras   = 1.1793;
    double USD_Pirkti    = 1.1460;
    double USD_Parduoti  = 1.2340;
    double INR_Bendras   = 104.6918;
    double INR_Pirkti    = 101.3862;
    double INR_Parduoti  = 107.8546;
    int Pasirinkimas1;
    double kiekis;
    int valiutapirkti;
    int Pasirinkimas2;
    cout << "Veiksmai:"<<endl;
    cout << "1. Palyginti valiutà"<<endl;
    cout << "2. Pirkti valiutà"<<endl;
    cout << "3. Parduoti valiutà"<<endl;
    cout << "Pasirinkite veiksmà: ";
    cin >> Pasirinkimas1;
    cout<<endl;
    if (Pasirinkimas1==1){
        cout<<"Valiutos:"<<endl;
        cout<<"1. GBP"<<endl;
        cout<<"2. USD"<<endl;
        cout<<"3. INR"<<endl;
        cout<<"Pasirinkite valiutà: ";
        cin>>Pasirinkimas2;
        if (Pasirinkimas2==1){
            cout<<"1 EUR = "<< fixed << setprecision(2) << GBP_Bendras << "GBP"<< endl;
        }
        else if (Pasirinkimas2==2){
            cout<<"1 EUR = "<< fixed << setprecision(2) << USD_Bendras << "USD"<< endl;
        }
        else if (Pasirinkimas2==3){
            cout<<"1 EUR = "<< fixed << setprecision(2) << INR_Bendras << "INR" << endl;
        }
    }
    return 0;
}
