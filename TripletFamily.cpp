/*This is a function problem.You only need to complete the function given below*/
// function should return the triplet
// in a vector container defined as "vector<int> result"
// use result.push_back() to insert elements in the 
// container
// if no such triplet is found, 
// return the container result as empty
// Note: container should be contain 3 elements or 0 elements only.







//my code
vector<int> findTriplet(int arr[], int n)
{
    vector<int> result;
    unordered_set<int>s;
    for(int i=0;i<n;i++)
        s.insert(arr[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s.find(arr[i]+arr[j])!=s.end()){
                result.push_back(arr[i]);
                result.push_back(arr[j]);
                result.push_back(arr[i]+arr[j]);
                return result;
            }
        }
    } 
    return result;
}
