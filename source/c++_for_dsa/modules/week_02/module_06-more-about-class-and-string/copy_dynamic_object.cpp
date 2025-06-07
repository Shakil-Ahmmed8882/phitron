#include <bits/stdc++.h>
using namespace std;


class Cricketer {
    public: 
    string country; 
    int joursey; 


     Cricketer(string country, int joursey){
        this->country = country; 
        this->joursey = joursey; 
     }
};



int main()
{
    Cricketer* Dhoni = new Cricketer("Inida", 100);  
    Cricketer* Kohli = new Cricketer("Inida", 18);  

    *Kohli = *Dhoni;
    delete Dhoni; 
    cout << Kohli->country << " " << Kohli->joursey << endl; 

    return 0;
}