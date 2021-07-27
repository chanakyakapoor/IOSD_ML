#include<iostream>
using namespace std;
int delele(int arr[], int n, int x)
{

   if (arr[n-1] == x)
       return (n-1);
 
   int prev = arr[n-1], i;
   for (i=n-2; i>=0 && arr[i]!=x; i--)
   {
       int curr = arr[i];
       arr[i] = prev;
       prev = curr;
   }
 
   if (i < 0)
     return 0;
 
   arr[i] = prev;
 
   return (n-1);
}
 
int main()
{
    int n, r;
    cout << "size of array : ";
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++)
        cin >> v[i];
    cout<<"element to be deleted :";
    cin >> r; 

    n = delele(v, n, r);
 
    cout << "new arr: ";
    for (int i=0; i<n; i++)
       cout << v[i] << " ";
 
    return 0;
}