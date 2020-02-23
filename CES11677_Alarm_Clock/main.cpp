// CES Question 11677 Alarm Clock
// Question website : https://cpe.cse.nsysu.edu.tw/cpe/file/attendance/problemPdf/11677.pdf

#include <iostream>
using namespace std;

int main(){
    cout<<"Hello World!\n";
    cout<<"Have a nice year!";
    while(1){
        int H1, M1, H2, M2;
        int  H, M;
        cin >> H1 >> M1 >> H2 >> M2;
        
        if(H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0)
            break;
        
        M = M2 - M1;
        if( M < 0){
            M += 60;
            H2--;
            if(H2 < 0){
                H2 += 24;
            }
        }

        H = H2 - H1;
        if(H < 0){
            H += 24;
        }

        cout << H*60 + M << endl;

    }
    return 0;
}
