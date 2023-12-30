#include<bits/stdc++.h>
 using namespace std;

     bool makeEqual(vector<string>& words) {
       unordered_map<char, int> counts;
      for (auto a  : words) {
            for (char x : a) {
                counts[x]++;
            }
        }
     int n = words.size();
        for (auto a : counts) {
            if (a.second % n != 0) {
                return false;
            }
        }
        
        return true;

    }

int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n; 
            vector<string> words(n);
            for(int i=0; i<n; i++){
                cin>> words[i];
            }
           bool result = makeEqual(words);
           cout << result;
           
        }
return 0;}
