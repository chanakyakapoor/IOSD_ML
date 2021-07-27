#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum=0;
    cout << "size of array : ";
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++)
        cin >> v[i];

    for(int i=0 ;i <n;i++)
        sum+=v[i];

    cout << "mean is  "<< float(sum)/float(n) << " ";

    sort(v, v+n);

    if(n%2!=0){
        cout << "median is " << v[(n-1)/2];
    }
    else cout << "median is " << v[n/2] << " " << v[n/2 + 1];

}