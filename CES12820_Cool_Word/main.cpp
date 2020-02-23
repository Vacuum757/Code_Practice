// CES Question 11677 Cool Word
// Question website : https://cpe.cse.nsysu.edu.tw/cpe/file/attendance/problemPdf/12820.pdf

#include <iostream>
#include <string>
using namespace std;

void initArray(int count[], int size){
    for(int i = 0; i<size; i++){
        count[i] = 0;
    }
}

void printArray(int count[], int size){
    for(int i= 0 ; i<size ; i++)
        cout << i << ":" << count[i] << endl;
}

void printResult(int ans[], int size){
    for(int i = 0; i<size ; i++)
        cout << "Case " << i+1 << ": " << ans[i] << endl;
}

int main(){
    int count[26];
    int ccase[30];
    initaArray(ccase, 30);
    for(int i = 0; i < 30 ; i++){
        int n;
        int ans = 0;
        cin >> n;
        
        for(int j = 0; j < n; j++){
            initArray(count, 26);
            string str;
            cin >> str;
            for(int k = 0 ; k < str.length(); k++){
                count[str.at(k)-'a']++;
            }
            int different = 0;
            int good = 1;
            for(int x = 0 ; x < 26; x++){
                if(count[x]!=0)
                    different++;
            }
            if(different == 1){good = 0;}
            else{
                for(int x = 0 ; x < 25; x++){
                    for(int y = x + 1; y < 26 ; y++){
                        if(count[x]!=0 && count[y]!=0 && count[x]==count[y])
                            good = 0;
                    }
                }
            }
            if(good == 1)
                ans++;
            //printArray(count, 26);
        }
        ccase[i] = ans;

    }
    printResult(ccase, 30);
    return 0;
}