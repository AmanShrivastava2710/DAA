//Chef has two numbers A and B.
//In one operation, Chef can choose either A or B and multiply it by 
//Determine whether he can make both A and B equal after any number (possibly, zero) of moves

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for (int i = 0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	    if (a==b){
	        cout<<"YES\n";
	    }
	    else if (a>b){
	        if(ceil(log2((float)a/b)) == floor(log2((float)a/b))){
	            cout<<"yes\n";
	        }
	        else
	        cout<<"no\n";
	        
	    }
	    else{
	    if(ceil(log2((float)b/a)) == floor(log2((float)b/a))){
	        cout<<"YES\n";
	    }
	    else
	    cout<<"NO\n";
	    }
	}   
	return 0;
}
