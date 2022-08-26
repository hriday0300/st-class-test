//set 1 
//hriday
//2010990300

#include<bits/stdc++.h>
using namespace std;
 
// Function to find the repeating
// elements with there count
map<int,int> findRepeating(int arr[], int size){
 
    // Hash map to store the
    // frequency of elements
    map<int,int> frequency;
     
    // Loop to store the frequency of
    // elements of array
    for (int i = 0; i < size; i++)
    frequency[arr[i]]++;
    return frequency;
}
         
// Driver Code
int main(){
    int arr[] = {4, 4, 5, 5, 6};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    map<int,int> frequency = findRepeating(arr, arr_size);
    cout<<"Below is the frequency of repeated elements -"<<endl;
    for(auto x : frequency){
        if (frequency[x.first] > 1)
            cout<<x.first<<" --> "<<frequency[x.first]<<endl;
    }
}
