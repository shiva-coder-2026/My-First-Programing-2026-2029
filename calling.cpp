#include<iostream>
using namespace std;
int main()
{
  int arr[] ={12,6,9,0,240,8,90,78,56,48,420}
  int n = sizeof(arr)/4;
  int mx = arr[0];
  for(int i=1;i<n;i++){
    mx = max(mx,arr[i]);
  }
  cout<<mx;
}
