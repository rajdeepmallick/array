#include<bits/stdc++.h>
using namespace std;

// void printArray(int *a,int n){
//     for(int i=0;i<n;i++)
//         cout<<a[i]<<" ";
//     cout<<endl;    
// }

void smaller(int *a,int n){
    for(int i=0;i<(n-1);i++){
        if(a[i]>a[i+1])
            cout<<a[i+1]<<" ";
        else
            cout<<-1<<" ";
    }
    cout<<-1<<endl;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    smaller(a,n);
	    //printArray(ptr,n);
	}
	return 0;
}
