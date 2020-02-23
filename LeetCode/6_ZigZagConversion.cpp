class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        string temp[numRows];
        //for(int i = 0; i < numRows; i++)
        int plus = 1, x = 0, pos = 0, len = s.size();
        
        while(x < len){
            temp[pos] += s[x];
            
            if(plus == 1) pos++;
            if(plus == 0) pos--;
            
            if(pos == 0) plus = 1;
            if(pos == numRows - 1) plus = 0;
            
            x++;
        }
        
        string ans;
        
        for(int i = 0; i < numRows; i++){
            cout << temp[i] << endl;
            ans += temp[i];
        }
        
        return ans;
    }
};