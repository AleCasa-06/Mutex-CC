#include <iostream>
#include "thread"

using namespace std;

int conto = 1000;

void Operazione(int conto, int soldi){
    if(conto > 0){
        if(1+rand()%10 < 5){
            if(conto-soldi > 0){
                conto -= soldi;
                cout<<"operazione di prelievo eseguita, residuo: " << conto << endl;
            }
            else{
                cout << "saldo insufficiente" << endl;
            }


        }
        else{
            conto += soldi;
            cout << "deposito eseguito correttamente, saldo attuale: " << conto << endl;
        }
        
    }
}

int main() {

    int n = 0;
    cout << "quanti euro vuoi prelevare?" << endl;
    cin >> n;
    thread thread1(Operazione, conto, n);
    thread1.join();
    return 0;
}
