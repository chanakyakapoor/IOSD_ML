#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int v[10][5];
    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            cout << "enter marks of "<<i<<" student of "<< j << " subject";
            cin >> v[i][j];
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            cout << "marks of "<<i<<" student of "<< j << " subject is : ";
            cout << v[i][j];
            
        }
    }
}