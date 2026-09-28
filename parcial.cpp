#include <iostream>
using namespace std; 

int main() {
    float x,y; 
    
    cout << "Ingresa el voltaje: " << endl;
    cin >> x; 
    
    cout << "Ingresa la resistencia: " << endl;
    cin >> y; 

    if (x> 0 && y> 0 ) { 
           cout << "La corriente que circula es " << x/y  << endl ; 
      
    }
    else { 
       cout << "dato erroneo. " << endl;
    }
    return 0;
} 
