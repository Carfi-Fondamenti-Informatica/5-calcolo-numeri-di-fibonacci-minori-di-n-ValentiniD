#include <iostream>
using namespace std;

int main() {
    int n=0, primo_n=0, secondo_n=1, terzo_n;

    cout << "Quanto vuoi lunga la serie numerica di Fibonacci?" << endl;
    cin >> n;

    if(n==1){
        cout << "1" << endl;
        }
    for(int terzo_n=0;terzo_n<=n;terzo_n++){
        terzo_n=primo_n+secondo_n;
        if(terzo_n<=n){
            cout << terzo_n << endl;
        }
        secondo_n=primo_n;
        primo_n=terzo_n;
    }
        
    return 0;
}
