
#include<bits/stdc++.h>
using namespace std;

int majority(int *a,int n){
    int index=0,count=1;
    
    for(int i=1;i<n;i++){
        if(a[index]==a[i]){
            count++;
        }    
        else
            count--;
        if(count==0){
            index=i;
            count=1;
        }    
    }
    //we can not find exact count bt this
    //for doing so we need to do some extra 
    //2 2 2 3 3 3 majority element 2
    count=0;
    for(int i=0;i<n;i++){
        if(a[index]==a[i])
            count++;
    }
    if(count>(n/2))
        return a[index];
    else
        return (-1);
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cout<<majority(a,n)<<endl;      
	}
	return 0;
}
