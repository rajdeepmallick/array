#include<bits/stdc++.h>
using namespace std;
int convertFive(int n);
 

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	cout<<convertFive(n)<<endl;
    }
}




//my code
int convertFive(int n){
    vector<int>v;
    while(n>0){
        v.push_back(n%10);
        n=n/10;
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==0)
            v[i]+=5;
    }
    for(int i=0;i<v.size();i++){
        n=n+v[i]*pow(10,i);
    }
    return n;
}
