#include <bits/stdc++.h>
using namespace std;

void ifrepeat(int* a, int n){
    unordered_map<int,int> m;
    
    for(int i=0;i<n;i++){//creating the map
        m[a[i]]++;//for same key increase frequency
    }
    
    cout<<"the non repeating numbers are: ";
    //iterator->first == key(element value)
    //iterator->second == value(frequency)
    
    for(auto it=m.begin();it!=m.end();it++)
    if(it->second==1)//frequency==1 means non-repeating element
    cout<<(it->first)<<" ";

}

int main()
{
    int n;
    cout<<"enter array length\n";
    cin>>n;
    int* a=(int*)(malloc(sizeof(int)*n));

    cout<<"input array elements...\n";
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    ifrepeat(a,n);

    return 0;
}
