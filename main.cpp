#include <iostream>
using namespace std;

int main() {
    int n=0, primo_n=0, secondo_n=1, terzo_n;

    cout << "Quanto vuoi lunga la serie numerica di Fibonacci?" << endl;
    cin >> n;

    if(n>0){
        for(int variabile=0;variabile<n;variabile++){
            terzo_n=primo_n+secondo_n;
            secondo_n=primo_n;
            primo_n=terzo_n;
            if(terzo_n<n){
                cout << terzo_n << "\n";
            }else{
                cout << n << endl;
                break;
            }
        }
    }else{
        cout << n << endl;
    }

    return 0;
}
