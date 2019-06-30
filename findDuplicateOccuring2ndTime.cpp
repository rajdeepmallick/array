void printDuplicates(int arr[], int n){
    /*
    unordered_multiset<int>m1;
    unordered_multiset<int>m2;
    */
    /*
    unordered_set<int>dup;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end())
            s.insert(arr[i]);
        else
            dup.insert(arr[i]);
        m.insert(arr[i]);    
    }
    if(dup.empty()){
        cout<<-1;
    } 
    else{
        for(int i=0;i<n;i++){
            if(dup.find(arr[i])!=dup.end()){
                dup.erase(arr[i]);
            }
            else if(dup.find(arr[i])==dup.end() && m.count(arr[i])>1){
                cout<<arr[i]<<" ";
            }
        }
    }
    */
    /*
    this is correct 
    0 3 3 3 3
    for(int i=0;i<n;i++)
        m1.insert(arr[i]);
    m2=m1;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(m1.find(arr[i])!=m1.end() && m2.find(arr[i])!=m2.end()){
            m2.erase(arr[i]);
        }
        else if(m1.find(arr[i])!=m1.end() && m2.find(arr[i])==m2.end()){
            cout<<arr[i]<<" ";
            m1.erase(arr[i]);
            flag=true;
        }
    }
    if(flag==false)
        cout<<-1;
    */  
    
    
    
    //correct code
    unordered_set<int>s;
    unordered_set<int>dup;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])!=s.end()){
            s.insert(arr[i]);
        }
        else{
            dup.insert(arr[i]);
        }
    }
    s.clear();
    bool flag=false;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])!=s.end() && dup.find(arr[i])!=dup.end()){
            cout<<arr[i]<<" ";
            dup.erase(arr[i]);
            flag=true;
        }
        else{
            s.insert(arr[i]);
        }
    }
    if(flag==false)
        cout<<-1;
    
}
