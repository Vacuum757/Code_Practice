//CES Question 10010: Where's Waldorf? 
//Question website : https://onlinejudge.org/external/100/p10010.pdf

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void printArray(char arr, int m, int n){
    for(int i = 0 ; i < m; i++){
        for(int j = 0 ; j < n; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int main(){
    int cases;
    int m,n;
    cin >> m >> n;
    char block[m][n];
    for(int i = 0 ; i < m; i++){
        for(int j = 0 ; j < n; j++){
            char temp;
            cin >> temp;
            block[i][j] = tolower(temp);
        }
    }
    printArray(block,m,n);
    return 0;
}