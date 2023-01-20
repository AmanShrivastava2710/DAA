//Chef wants to make a purchase. For this, he needs X gold coins, but he has none at the moment.
//Chef has N fixed deposits, the ℎ ith of which is worth Ai coins. He wants to open the minimum number of these deposits so that he has at least X coins.
//You have to tell Chef the minimum number of fixed deposits he must open in order to have X coins, or say that this is impossible.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--){
        int n, x;
        cin >> n >> x;
        int fixed[n];
        
        for (int i = 0; i < n; i++){
            cin >> fixed[i];
        }
        sort(fixed, fixed + n);
        int sum = 0;
        int count = 0;
        
        for (int i = 0; i < n; i++){
            if (sum < x){
            sum = sum + fixed[n - 1 - i];
            count++;
        }
        else{
            break;
        }
    }
    
    if (sum < x){
        cout << -1 << endl;
    }
    else{
        cout << count << endl;
    }
    }
    return 0;
}
