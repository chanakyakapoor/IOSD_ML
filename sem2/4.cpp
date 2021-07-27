#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r){

        int s1 = m-l+1;
        int s2 = r-m;
        int M[s1],L[s2];

        for(int i=0 ; i<s1 ; i++)
                M[i] = a[l+i];
        for(int i=0; i<s2 ; i++ )
                L[i] = a[m+1+i];

        int i=0,j=0,k=l;

        while(i<s1 && j<s2){

                if(M[i] <= L[j]){
                        a[k] = M[i];
                        i++;
                }
                if(M[i] > L[j]){
                        a[k] = L[j];
                        j++;
                }
                k++;
        }
        while (i < s1) {
        a[k] = M[i];
        i++;
        k++;
    }


        while (j < s2) {
        a[k] = L[j];
        j++;
        k++;
    }

}

void ms(int a[], int l, int r){
        if(l>=r)
                return;

        int m = (l+r)/2;

        ms(a,l,m);
        ms(a,m+1,r);
        merge(a,l,m,r);
}

void display(int a[], int l, int r){
        for(int i=l;i<r;i++)
                cout<<a[i]<<"\n";
}

int main(){

        int arr[] = {10,1,6,7,9,14,11,2};
        int arr_size = sizeof(arr) / sizeof(arr[0]);

        ms(arr, 0, arr_size - 1);
        display(arr, 0, arr_size);

}
