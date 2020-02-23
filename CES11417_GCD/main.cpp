// CES Question 11677 Alarm Clock
// Question website : https://onlinejudge.org/external/114/p11417.pdf

#include <iostream>
using namespace std;
int GCD(int i ,int j);

int main(){
    int n = 1;
    cin >> n;
    while(n > 0){
        int i,j,ans = 0;
        for(i = 1; i < n; i++){
            for(j = i + 1; j <= n; j++){
                ans += GCD(i,j);
            }
        }
        cout << "ans: " << ans << endl;
        cin >> n;
    }
    return 0;
}

int GCD(int i, int j){
    if(j > i)
        return GCD(j,i);
    if(j == 0)
        return i;
    return GCD(j,i%j);
}